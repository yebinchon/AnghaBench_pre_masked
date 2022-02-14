
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nTempReg; int nColCache; TYPE_1__* aColCache; int * aTempReg; } ;
struct TYPE_4__ {int iReg; scalar_t__ tempReg; } ;
typedef TYPE_2__ Parse ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(Parse *VAR_0, int VAR_1){
  if( VAR_0->aColCache[VAR_1].tempReg ){
    if( VAR_0->nTempReg<FUNC_0(VAR_0->aTempReg) ){
      VAR_0->aTempReg[VAR_0->nTempReg++] = VAR_0->aColCache[VAR_1].iReg;
    }
  }
  VAR_0->nColCache--;
  if( VAR_1<VAR_0->nColCache ){
    VAR_0->aColCache[VAR_1] = VAR_0->aColCache[VAR_0->nColCache];
  }
}
