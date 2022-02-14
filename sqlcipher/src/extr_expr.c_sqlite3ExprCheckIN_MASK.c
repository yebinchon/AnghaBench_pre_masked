
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pSelect; } ;
struct TYPE_9__ {int flags; int pLeft; TYPE_3__ x; } ;
struct TYPE_7__ {TYPE_1__* pEList; } ;
struct TYPE_6__ {int nExpr; } ;
typedef int Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(Parse *VAR_1, Expr *VAR_2){
  int VAR_3 = FUNC_0(VAR_2->pLeft);
  if( (VAR_2->flags & VAR_0) ){
    if( VAR_3!=VAR_2->x.pSelect->pEList->nExpr ){
      FUNC_1(VAR_1, VAR_2->x.pSelect->pEList->nExpr, VAR_3);
      return 1;
    }
  }else if( VAR_3!=1 ){
    FUNC_2(VAR_1, VAR_2->pLeft);
    return 1;
  }
  return 0;
}
