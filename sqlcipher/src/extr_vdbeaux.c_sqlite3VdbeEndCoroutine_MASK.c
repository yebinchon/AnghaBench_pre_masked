
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pParse; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_5__ {scalar_t__ nRangeReg; scalar_t__ nTempReg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void FUNC_1(Vdbe *VAR_1, int VAR_2){
  FUNC_0(VAR_1, VAR_0, VAR_2);







  VAR_1->pParse->nTempReg = 0;
  VAR_1->pParse->nRangeReg = 0;
}
