
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ p_expr_kind; } ;
typedef TYPE_1__ ParseState ;
typedef scalar_t__ ParseExprKind ;
typedef int Node ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (TYPE_1__*,int *) ;

Node *
FUNC_2(ParseState *VAR_1, Node *VAR_2, ParseExprKind VAR_3)
{
 Node *VAR_4;
 ParseExprKind VAR_5;


 FUNC_0(VAR_3 != VAR_0);
 VAR_5 = VAR_1->p_expr_kind;
 VAR_1->p_expr_kind = VAR_3;

 VAR_4 = FUNC_1(VAR_1, VAR_2);

 VAR_1->p_expr_kind = VAR_5;

 return VAR_4;
}
