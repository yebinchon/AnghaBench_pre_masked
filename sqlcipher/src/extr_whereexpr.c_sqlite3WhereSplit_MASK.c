
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int op; } ;
typedef TYPE_1__ WhereClause ;
struct TYPE_10__ {struct TYPE_10__* pRight; struct TYPE_10__* pLeft; int op; } ;
typedef TYPE_2__ Expr ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ) ;

void FUNC_2(WhereClause *VAR_0, Expr *VAR_1, u8 VAR_2){
  Expr *VAR_3 = FUNC_0(VAR_1);
  VAR_0->op = VAR_2;
  if( VAR_3==0 ) return;
  if( VAR_3->op!=VAR_2 ){
    FUNC_1(VAR_0, VAR_1, 0);
  }else{
    FUNC_2(VAR_0, VAR_3->pLeft, VAR_2);
    FUNC_2(VAR_0, VAR_3->pRight, VAR_2);
  }
}
