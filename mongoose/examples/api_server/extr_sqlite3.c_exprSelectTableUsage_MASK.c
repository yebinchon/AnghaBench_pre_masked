
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WhereMaskSet ;
struct TYPE_7__ {struct TYPE_7__* pPrior; int pHaving; int pWhere; int pOrderBy; int pGroupBy; int pEList; TYPE_2__* pSrc; } ;
struct TYPE_6__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_5__ {int pOn; TYPE_3__* pSelect; } ;
typedef TYPE_2__ SrcList ;
typedef TYPE_3__ Select ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static Bitmask FUNC_3(WhereMaskSet *VAR_0, Select *VAR_1){
  Bitmask VAR_2 = 0;
  while( VAR_1 ){
    SrcList *VAR_3 = VAR_1->pSrc;
    VAR_2 |= FUNC_1(VAR_0, VAR_1->pEList);
    VAR_2 |= FUNC_1(VAR_0, VAR_1->pGroupBy);
    VAR_2 |= FUNC_1(VAR_0, VAR_1->pOrderBy);
    VAR_2 |= FUNC_2(VAR_0, VAR_1->pWhere);
    VAR_2 |= FUNC_2(VAR_0, VAR_1->pHaving);
    if( FUNC_0(VAR_3!=0) ){
      int VAR_4;
      for(VAR_4=0; VAR_4<VAR_3->nSrc; VAR_4++){
        VAR_2 |= FUNC_3(VAR_0, VAR_3->a[VAR_4].pSelect);
        VAR_2 |= FUNC_2(VAR_0, VAR_3->a[VAR_4].pOn);
      }
    }
    VAR_1 = VAR_1->pPrior;
  }
  return VAR_2;
}
