
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* pPrior; int pOrderBy; int pGroupBy; int pEList; int pOffset; int pLimit; int pHaving; int pWhere; } ;
typedef TYPE_1__ Select ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static void FUNC_2(Select *VAR_0, int *VAR_1){
  if( VAR_0 ){
    FUNC_0(VAR_0->pWhere, VAR_1);
    FUNC_0(VAR_0->pHaving, VAR_1);
    FUNC_0(VAR_0->pLimit, VAR_1);
    FUNC_0(VAR_0->pOffset, VAR_1);
    FUNC_1(VAR_0->pEList, VAR_1);
    FUNC_1(VAR_0->pGroupBy, VAR_1);
    FUNC_1(VAR_0->pOrderBy, VAR_1);
    FUNC_2(VAR_0->pPrior, VAR_1);
  }
}
