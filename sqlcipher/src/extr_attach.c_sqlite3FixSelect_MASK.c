
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pPrior; TYPE_2__* pWith; int pLimit; int pOrderBy; int pHaving; int pGroupBy; int pWhere; int pSrc; int pEList; } ;
struct TYPE_6__ {int nCte; TYPE_1__* a; } ;
struct TYPE_5__ {TYPE_3__* pSelect; } ;
typedef TYPE_3__ Select ;
typedef int DbFixer ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int FUNC_3(
  DbFixer *VAR_0,
  Select *VAR_1
){
  while( VAR_1 ){
    if( FUNC_1(VAR_0, VAR_1->pEList) ){
      return 1;
    }
    if( FUNC_2(VAR_0, VAR_1->pSrc) ){
      return 1;
    }
    if( FUNC_0(VAR_0, VAR_1->pWhere) ){
      return 1;
    }
    if( FUNC_1(VAR_0, VAR_1->pGroupBy) ){
      return 1;
    }
    if( FUNC_0(VAR_0, VAR_1->pHaving) ){
      return 1;
    }
    if( FUNC_1(VAR_0, VAR_1->pOrderBy) ){
      return 1;
    }
    if( FUNC_0(VAR_0, VAR_1->pLimit) ){
      return 1;
    }
    if( VAR_1->pWith ){
      int VAR_2;
      for(VAR_2=0; VAR_2<VAR_1->pWith->nCte; VAR_2++){
        if( FUNC_3(VAR_0, VAR_1->pWith->a[VAR_2].pSelect) ){
          return 1;
        }
      }
    }
    VAR_1 = VAR_1->pPrior;
  }
  return 0;
}
