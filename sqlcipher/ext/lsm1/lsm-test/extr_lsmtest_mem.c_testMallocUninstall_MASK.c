
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xFree; int xRealloc; int xMalloc; scalar_t__ pMemCtx; } ;
typedef TYPE_1__ lsm_env ;
struct TYPE_7__ {int (* xDelMutex ) (TYPE_2__*) ;int xSaveFree; int xSaveRealloc; int xSaveMalloc; } ;
typedef TYPE_2__ TmGlobal ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(lsm_env *VAR_0){
  TmGlobal *VAR_1 = (TmGlobal *)VAR_0->pMemCtx;
  VAR_0->pMemCtx = 0;
  if( VAR_1 ){
    VAR_0->xMalloc = VAR_1->xSaveMalloc;
    VAR_0->xRealloc = VAR_1->xSaveRealloc;
    VAR_0->xFree = VAR_1->xSaveFree;
    VAR_1->xDelMutex(VAR_1);
    FUNC_1(VAR_1);
  }
}
