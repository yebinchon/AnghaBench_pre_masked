
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pMemCtx; } ;
typedef TYPE_1__ lsm_env ;
typedef int TmGlobal ;
typedef int FILE ;


 int FUNC_0 (int *,int*,int*,int *) ;

void FUNC_1(
  lsm_env *VAR_0,
  int *VAR_1,
  int *VAR_2,
  FILE *VAR_3
){
  if( VAR_0->pMemCtx==0 ){
    *VAR_1 = 0;
    *VAR_2 = 0;
  }else{
    FUNC_0((TmGlobal *)(VAR_0->pMemCtx), VAR_1, VAR_2, VAR_3);
  }
}
