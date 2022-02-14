
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int nSlot; scalar_t__ nEntry; TYPE_1__** aSlot; } ;
struct TYPE_12__ {int nKey; scalar_t__ pScanNext; struct TYPE_12__* pHashNext; } ;
typedef TYPE_1__ Fts5HashEntry ;
typedef TYPE_2__ Fts5Hash ;


 int SQLITE_NOMEM ;
 int SQLITE_OK ;
 int fts5EntryKey (TYPE_1__*) ;
 TYPE_1__* fts5HashEntryMerge (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ memcmp (int ,char const*,int) ;
 int memset (TYPE_1__**,int ,int) ;
 int sqlite3_free (TYPE_1__**) ;
 TYPE_1__** sqlite3_malloc64 (int) ;

__attribute__((used)) static int fts5HashEntrySort(
  Fts5Hash *pHash,
  const char *pTerm, int nTerm,
  Fts5HashEntry **ppSorted
){
  const int nMergeSlot = 32;
  Fts5HashEntry **ap;
  Fts5HashEntry *pList;
  int iSlot;
  int i;

  *ppSorted = 0;
  ap = sqlite3_malloc64(sizeof(Fts5HashEntry*) * nMergeSlot);
  if( !ap ) return SQLITE_NOMEM;
  memset(ap, 0, sizeof(Fts5HashEntry*) * nMergeSlot);

  for(iSlot=0; iSlot<pHash->nSlot; iSlot++){
    Fts5HashEntry *pIter;
    for(pIter=pHash->aSlot[iSlot]; pIter; pIter=pIter->pHashNext){
      if( pTerm==0
       || (pIter->nKey+1>=nTerm && 0==memcmp(fts5EntryKey(pIter), pTerm, nTerm))
      ){
        Fts5HashEntry *pEntry = pIter;
        pEntry->pScanNext = 0;
        for(i=0; ap[i]; i++){
          pEntry = fts5HashEntryMerge(pEntry, ap[i]);
          ap[i] = 0;
        }
        ap[i] = pEntry;
      }
    }
  }

  pList = 0;
  for(i=0; i<nMergeSlot; i++){
    pList = fts5HashEntryMerge(pList, ap[i]);
  }

  pHash->nEntry = 0;
  sqlite3_free(ap);
  *ppSorted = pList;
  return SQLITE_OK;
}
