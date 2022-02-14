
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pEList; struct TYPE_7__* pPrior; } ;
struct TYPE_6__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_5__ {int pExpr; } ;
typedef TYPE_3__ Select ;
typedef int Parse ;
typedef int CollSeq ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static CollSeq *FUNC_2(Parse *VAR_0, Select *VAR_1, int VAR_2){
  CollSeq *VAR_3;
  if( VAR_1->pPrior ){
    VAR_3 = FUNC_2(VAR_0, VAR_1->pPrior, VAR_2);
  }else{
    VAR_3 = 0;
  }
  FUNC_0( VAR_2>=0 );
  if( VAR_3==0 && VAR_2<VAR_1->pEList->nExpr ){
    VAR_3 = FUNC_1(VAR_0, VAR_1->pEList->a[VAR_2].pExpr);
  }
  return VAR_3;
}
