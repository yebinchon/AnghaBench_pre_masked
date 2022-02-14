
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iRangeReg; int nRangeReg; int nMem; } ;
typedef TYPE_1__ Parse ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(Parse *VAR_0, int VAR_1){
  int VAR_2, VAR_3;
  if( VAR_1==1 ) return FUNC_0(VAR_0);
  VAR_2 = VAR_0->iRangeReg;
  VAR_3 = VAR_0->nRangeReg;
  if( VAR_1<=VAR_3 ){
    VAR_0->iRangeReg += VAR_1;
    VAR_0->nRangeReg -= VAR_1;
  }else{
    VAR_2 = VAR_0->nMem+1;
    VAR_0->nMem += VAR_1;
  }
  return VAR_2;
}
