
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int iUsedShmid; } ;
struct TYPE_15__ {scalar_t__ nTreeLimit; scalar_t__ bAutowork; int pWorkCtx; int (* xWork ) (TYPE_3__*,int ) ;scalar_t__ bDiscardOld; TYPE_2__ treehdr; TYPE_1__* pClient; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_13__ {int iId; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ) ;

int FUNC_8(lsm_db *VAR_3, int VAR_4){
  int VAR_5 = VAR_2;
  int VAR_6 = 0;

  FUNC_1(VAR_3, VAR_4);
  if( VAR_5==VAR_2 && VAR_4 && FUNC_6(VAR_3)>VAR_3->nTreeLimit ){
    VAR_6 = 1;
    FUNC_5(VAR_3);
  }
  FUNC_4(VAR_3, VAR_4);

  if( VAR_5==VAR_2 ){
    if( VAR_6 && VAR_3->bAutowork ){
      VAR_5 = FUNC_3(VAR_3, 1);
    }else if( VAR_4 && VAR_3->bDiscardOld ){
      VAR_5 = FUNC_0(VAR_3, VAR_3->pClient->iId, VAR_3->treehdr.iUsedShmid);
    }
  }
  VAR_3->bDiscardOld = 0;
  FUNC_2(VAR_3, VAR_1, VAR_0, 0);

  if( VAR_6 && VAR_3->bAutowork==0 && VAR_3->xWork ){
    VAR_3->xWork(VAR_3, VAR_3->pWorkCtx);
  }
  return VAR_5;
}
