
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct RowSetEntry {int dummy; } ;
typedef int sqlite3 ;
struct TYPE_5__ {scalar_t__ iBatch; int rsFlags; scalar_t__ nFresh; struct RowSetEntry* pFresh; scalar_t__ pForest; scalar_t__ pLast; scalar_t__ pEntry; int * db; scalar_t__ pChunk; } ;
typedef TYPE_1__ RowSet ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;

RowSet *FUNC_3(sqlite3 *VAR_1){
  RowSet *VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2));
  if( VAR_2 ){
    int VAR_3 = FUNC_2(VAR_1, VAR_2);
    VAR_2->pChunk = 0;
    VAR_2->db = VAR_1;
    VAR_2->pEntry = 0;
    VAR_2->pLast = 0;
    VAR_2->pForest = 0;
    VAR_2->pFresh = (struct RowSetEntry*)(FUNC_0(sizeof(*VAR_2)) + (char*)VAR_2);
    VAR_2->nFresh = (u16)((VAR_3 - FUNC_0(sizeof(*VAR_2)))/sizeof(struct RowSetEntry));
    VAR_2->rsFlags = VAR_0;
    VAR_2->iBatch = 0;
  }
  return VAR_2;
}
