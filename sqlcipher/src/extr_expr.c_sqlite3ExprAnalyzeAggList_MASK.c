
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ExprList_item {int pExpr; } ;
struct TYPE_3__ {int nExpr; struct ExprList_item* a; } ;
typedef int NameContext ;
typedef TYPE_1__ ExprList ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(NameContext *VAR_0, ExprList *VAR_1){
  struct ExprList_item *VAR_2;
  int VAR_3;
  if( VAR_1 ){
    for(VAR_2=VAR_1->a, VAR_3=0; VAR_3<VAR_1->nExpr; VAR_3++, VAR_2++){
      FUNC_0(VAR_0, VAR_2->pExpr);
    }
  }
}
