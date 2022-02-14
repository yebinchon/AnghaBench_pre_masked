
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iRowid; scalar_t__ bEof; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef int Fts5Expr ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(
  Fts5Expr *VAR_0,
  Fts5ExprNode *VAR_1,
  Fts5ExprNode *VAR_2
){
  if( VAR_2->bEof ) return -1;
  if( VAR_1->bEof ) return +1;
  return FUNC_0(VAR_0, VAR_1->iRowid, VAR_2->iRowid);
}
