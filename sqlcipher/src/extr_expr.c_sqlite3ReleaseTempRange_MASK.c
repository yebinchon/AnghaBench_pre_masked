
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nRangeReg; int iRangeReg; } ;
typedef TYPE_1__ Parse ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(Parse *VAR_0, int VAR_1, int VAR_2){
  if( VAR_2==1 ){
    FUNC_0(VAR_0, VAR_1);
    return;
  }
  if( VAR_2>VAR_0->nRangeReg ){
    VAR_0->nRangeReg = VAR_2;
    VAR_0->iRangeReg = VAR_1;
  }
}
