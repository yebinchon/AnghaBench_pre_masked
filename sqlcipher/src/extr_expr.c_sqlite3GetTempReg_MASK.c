
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nTempReg; int nMem; int* aTempReg; } ;
typedef TYPE_1__ Parse ;



int FUNC_0(Parse *VAR_0){
  if( VAR_0->nTempReg==0 ){
    return ++VAR_0->nMem;
  }
  return VAR_0->aTempReg[--VAR_0->nTempReg];
}
