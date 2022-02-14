
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pSelect; } ;
struct TYPE_9__ {int flags; TYPE_3__ x; } ;
struct TYPE_7__ {TYPE_1__* pEList; } ;
struct TYPE_6__ {int nExpr; } ;
typedef int Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(Parse *VAR_1, Expr *VAR_2){

  if( VAR_2->flags & VAR_0 ){
    FUNC_1(VAR_1, VAR_2->x.pSelect->pEList->nExpr, 1);
  }else

  {
    FUNC_0(VAR_1, "row value misused");
  }
}
