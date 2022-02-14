
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ExprList_item {int pExpr; } ;
typedef int Walker ;
struct TYPE_3__ {int nExpr; struct ExprList_item* a; } ;
typedef TYPE_1__ ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;

int FUNC_1(Walker *VAR_2, ExprList *VAR_3){
  int VAR_4;
  struct ExprList_item *VAR_5;
  if( VAR_3 ){
    for(VAR_4=VAR_3->nExpr, VAR_5=VAR_3->a; VAR_4>0; VAR_4--, VAR_5++){
      if( FUNC_0(VAR_2, VAR_5->pExpr) ) return VAR_0;
    }
  }
  return VAR_1;
}
