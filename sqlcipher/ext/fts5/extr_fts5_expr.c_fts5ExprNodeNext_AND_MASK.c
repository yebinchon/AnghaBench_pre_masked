
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_4__ {scalar_t__ bNomatch; int * apChild; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef int Fts5Expr ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(
  Fts5Expr *VAR_1,
  Fts5ExprNode *VAR_2,
  int VAR_3,
  i64 VAR_4
){
  int VAR_5 = FUNC_0(VAR_1, VAR_2->apChild[0], VAR_3, VAR_4);
  if( VAR_5==VAR_0 ){
    VAR_5 = FUNC_1(VAR_1, VAR_2);
  }else{
    VAR_2->bNomatch = 0;
  }
  return VAR_5;
}
