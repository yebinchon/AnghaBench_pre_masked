
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct yColCache {scalar_t__ tempReg; int iReg; } ;
struct TYPE_3__ {scalar_t__ nTempReg; int * aTempReg; } ;
typedef TYPE_1__ Parse ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(Parse *VAR_0, struct yColCache *VAR_1){
  if( VAR_1->tempReg ){
    if( VAR_0->nTempReg<FUNC_0(VAR_0->aTempReg) ){
      VAR_0->aTempReg[VAR_0->nTempReg++] = VAR_1->iReg;
    }
    VAR_1->tempReg = 0;
  }
}
