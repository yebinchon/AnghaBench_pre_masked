
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ExprList_item {int pExpr; } ;
struct TYPE_3__ {int nExpr; struct ExprList_item* a; } ;
typedef TYPE_1__ ExprList ;
typedef int DbFixer ;


 scalar_t__ FUNC_0 (int *,int ) ;

int FUNC_1(
  DbFixer *VAR_0,
  ExprList *VAR_1
){
  int VAR_2;
  struct ExprList_item *VAR_3;
  if( VAR_1==0 ) return 0;
  for(VAR_2=0, VAR_3=VAR_1->a; VAR_2<VAR_1->nExpr; VAR_2++, VAR_3++){
    if( FUNC_0(VAR_0, VAR_3->pExpr) ){
      return 1;
    }
  }
  return 0;
}
