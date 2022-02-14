
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int xFree; int xRealloc; int xMalloc; void* pMemCtx; int (* xMutexStatic ) (TYPE_1__*,int ,int *) ;} ;
typedef TYPE_1__ lsm_env ;
struct TYPE_8__ {int xSaveFree; int xSaveRealloc; int xSaveMalloc; void* pMutex; int xDelMutex; int xLeaveMutex; int xEnterMutex; scalar_t__ (* xMalloc ) (int) ;int xFree; int xRealloc; } ;
typedef TYPE_2__ TmGlobal ;
struct TYPE_9__ {int pMutex; TYPE_1__* pEnv; } ;
typedef TYPE_3__ LsmMutex ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_5(lsm_env *VAR_9){
  TmGlobal *VAR_10;
  LsmMutex *VAR_11;
  FUNC_0( VAR_9->pMemCtx==0 );


  VAR_10 = (TmGlobal *)FUNC_4(sizeof(TmGlobal));
  FUNC_1(VAR_10, 0, sizeof(TmGlobal));
  VAR_10->xMalloc = FUNC_4;
  VAR_10->xRealloc = VAR_8;
  VAR_10->xFree = VAR_4;
  VAR_11 = (LsmMutex *)VAR_10->xMalloc(sizeof(LsmMutex));
  VAR_11->pEnv = VAR_9;
  VAR_9->xMutexStatic(VAR_9, VAR_0, &VAR_11->pMutex);
  VAR_10->xEnterMutex = VAR_6;
  VAR_10->xLeaveMutex = VAR_7;
  VAR_10->xDelMutex = VAR_5;
  VAR_10->pMutex = (void *)VAR_11;

  VAR_10->xSaveMalloc = VAR_9->xMalloc;
  VAR_10->xSaveRealloc = VAR_9->xRealloc;
  VAR_10->xSaveFree = VAR_9->xFree;


  VAR_9->pMemCtx = (void *)VAR_10;
  VAR_9->xMalloc = VAR_2;
  VAR_9->xRealloc = VAR_3;
  VAR_9->xFree = VAR_1;
}
