
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_8__ {int isAnchor; struct TYPE_8__* pLruNext; struct TYPE_8__* pLruPrev; } ;
struct TYPE_9__ {int mxPinned; int nMinPage; int nMaxPage; int nPurgeable; TYPE_1__ lru; } ;
struct TYPE_11__ {int separateCache; TYPE_2__ grp; } ;
struct TYPE_10__ {int szPage; int szExtra; int bPurgeable; int nMin; scalar_t__ nHash; int nPurgeableDummy; int * pnPurgeable; scalar_t__ szAlloc; TYPE_2__* pGroup; } ;
typedef int PgHdr1 ;
typedef TYPE_2__ PGroup ;
typedef TYPE_3__ PCache1 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_7__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static sqlite3_pcache *FUNC_7(int VAR_1, int VAR_2, int VAR_3){
  PCache1 *VAR_4;
  PGroup *VAR_5;
  int VAR_6;

  FUNC_1( (VAR_1 & (VAR_1-1))==0 && VAR_1>=512 && VAR_1<=65536 );
  FUNC_1( VAR_2 < 300 );

  VAR_6 = sizeof(PCache1) + sizeof(PGroup)*VAR_0;
  VAR_4 = (PCache1 *)FUNC_6(VAR_6);
  if( VAR_4 ){
    if( VAR_0 ){
      VAR_5 = (PGroup*)&VAR_4[1];
      VAR_5->mxPinned = 10;
    }else{
      VAR_5 = &VAR_0;
    }
    if( VAR_5->lru.isAnchor==0 ){
      VAR_5->lru.isAnchor = 1;
      VAR_5->lru.pLruPrev = VAR_5->lru.pLruNext = &VAR_5->lru;
    }
    VAR_4->pGroup = VAR_5;
    VAR_4->szPage = VAR_1;
    VAR_4->szExtra = VAR_2;
    VAR_4->szAlloc = VAR_1 + VAR_2 + FUNC_0(sizeof(PgHdr1));
    VAR_4->bPurgeable = (VAR_3 ? 1 : 0);
    FUNC_3(VAR_5);
    FUNC_5(VAR_4);
    if( VAR_3 ){
      VAR_4->nMin = 10;
      VAR_5->nMinPage += VAR_4->nMin;
      VAR_5->mxPinned = VAR_5->nMaxPage + 10 - VAR_5->nMinPage;
      VAR_4->pnPurgeable = &VAR_5->nPurgeable;
    }else{
      VAR_4->pnPurgeable = &VAR_4->nPurgeableDummy;
    }
    FUNC_4(VAR_5);
    if( VAR_4->nHash==0 ){
      FUNC_2((sqlite3_pcache*)VAR_4);
      VAR_4 = 0;
    }
  }
  return (sqlite3_pcache *)VAR_4;
}
