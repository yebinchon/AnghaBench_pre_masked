
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int xExprCallback; int * pParse; } ;
typedef TYPE_2__ Walker ;
struct TYPE_10__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_8__ {scalar_t__ zName; } ;
typedef int Parse ;
typedef TYPE_3__ ExprList ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,void*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;

void FUNC_3(Parse *VAR_1, ExprList *VAR_2){
  if( VAR_2 ){
    int VAR_3;
    Walker VAR_4;
    FUNC_0(&VAR_4, 0, sizeof(Walker));
    VAR_4.pParse = VAR_1;
    VAR_4.xExprCallback = VAR_0;
    FUNC_2(&VAR_4, VAR_2);
    for(VAR_3=0; VAR_3<VAR_2->nExpr; VAR_3++){
      FUNC_1(VAR_1, 0, (void*)VAR_2->a[VAR_3].zName);
    }
  }
}
