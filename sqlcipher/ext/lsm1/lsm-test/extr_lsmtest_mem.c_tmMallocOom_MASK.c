
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nCountdown; int bPersist; void (* xHook ) (void*) ;int bEnable; void* pHookCtx; } ;
typedef TYPE_1__ TmGlobal ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(
  TmGlobal *VAR_0,
  int VAR_1,
  int VAR_2,
  void (*VAR_3)(void *),
  void *VAR_4
){
  FUNC_0( VAR_1>=0 );
  FUNC_0( VAR_2==0 || VAR_2==1 );
  VAR_0->nCountdown = VAR_1;
  VAR_0->bPersist = VAR_2;
  VAR_0->xHook = VAR_3;
  VAR_0->pHookCtx = VAR_4;
  VAR_0->bEnable = 1;
}
