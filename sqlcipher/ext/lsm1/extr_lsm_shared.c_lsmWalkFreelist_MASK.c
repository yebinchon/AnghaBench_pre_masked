
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pFreelist; TYPE_1__* pWorker; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_11__ {int bReverse; int iFree; int (* xUsr ) (void*,int,VAR_0) ;scalar_t__ bDone; void* pUsrctx; TYPE_2__* pFreelist; TYPE_3__* pDb; } ;
typedef TYPE_4__ WalkFreelistCtx ;
struct TYPE_12__ {scalar_t__ iId; int iBlk; } ;
struct TYPE_9__ {int nEntry; TYPE_5__* aEntry; } ;
struct TYPE_8__ {TYPE_2__ freelist; } ;
typedef TYPE_5__ FreelistEntry ;


 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int,int (*) (void*,int,VAR_2),void*) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 int FUNC_2 (void*,int,VAR_3) ;

int FUNC_3(
  lsm_db *VAR_4,
  int VAR_5,
  int (*VAR_6)(void *, int, VAR_7),
  void *VAR_8
){
  const int VAR_9 = (VAR_5 ? -1 : 1);
  int VAR_10;
  int VAR_11;

  WalkFreelistCtx VAR_12[2];

  VAR_12[0].pDb = VAR_4;
  VAR_12[0].bReverse = VAR_5;
  VAR_12[0].pFreelist = &VAR_4->pWorker->freelist;
  if( VAR_12[0].pFreelist && VAR_5 ){
    VAR_12[0].iFree = VAR_12[0].pFreelist->nEntry-1;
  }else{
    VAR_12[0].iFree = 0;
  }
  VAR_12[0].xUsr = FUNC_2;
  VAR_12[0].pUsrctx = (void *)&VAR_12[1];
  VAR_12[0].bDone = 0;

  VAR_12[1].pDb = VAR_4;
  VAR_12[1].bReverse = VAR_5;
  VAR_12[1].pFreelist = VAR_4->pFreelist;
  if( VAR_12[1].pFreelist && VAR_5 ){
    VAR_12[1].iFree = VAR_12[1].pFreelist->nEntry-1;
  }else{
    VAR_12[1].iFree = 0;
  }
  VAR_12[1].xUsr = VAR_6;
  VAR_12[1].pUsrctx = VAR_8;
  VAR_12[1].bDone = 0;

  VAR_10 = FUNC_0(VAR_4, VAR_5, FUNC_2, (void *)&VAR_12[0]);

  if( VAR_12[0].bDone==0 ){
    for(VAR_11=0; VAR_11<2; VAR_11++){
      int VAR_13;
      WalkFreelistCtx *VAR_14 = &VAR_12[VAR_11];
      for(VAR_13=VAR_14->iFree;
          VAR_14->pFreelist && VAR_10==VAR_1 && VAR_13<VAR_14->pFreelist->nEntry && VAR_13>=0;
          VAR_13 += VAR_9
         ){
        FreelistEntry *VAR_15 = &VAR_14->pFreelist->aEntry[VAR_13];
        if( VAR_15->iId>=0 && VAR_14->xUsr(VAR_14->pUsrctx, VAR_15->iBlk, VAR_15->iId) ){
          return VAR_1;
        }
      }
    }
  }

  return VAR_10;
}
