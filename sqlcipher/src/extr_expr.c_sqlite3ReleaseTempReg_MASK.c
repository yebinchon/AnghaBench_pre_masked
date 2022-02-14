
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nTempReg; int* aTempReg; } ;
typedef TYPE_1__ Parse ;


 scalar_t__ FUNC_0 (int*) ;

void FUNC_1(Parse *VAR_0, int VAR_1){
  if( VAR_1 && VAR_0->nTempReg<FUNC_0(VAR_0->aTempReg) ){
    VAR_0->aTempReg[VAR_0->nTempReg++] = VAR_1;
  }
}
