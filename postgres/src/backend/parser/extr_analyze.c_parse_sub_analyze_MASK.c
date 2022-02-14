
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_locked_from_parent; int p_resolve_unknowns; int * p_parent_cte; } ;
typedef int Query ;
typedef TYPE_1__ ParseState ;
typedef int Node ;
typedef int CommonTableExpr ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,int *) ;

Query *
FUNC_3(Node *VAR_0, ParseState *VAR_1,
      CommonTableExpr *VAR_2,
      bool VAR_3,
      bool VAR_4)
{
 ParseState *VAR_5 = FUNC_1(VAR_1);
 Query *VAR_6;

 VAR_5->p_parent_cte = VAR_2;
 VAR_5->p_locked_from_parent = VAR_3;
 VAR_5->p_resolve_unknowns = VAR_4;

 VAR_6 = FUNC_2(VAR_5, VAR_0);

 FUNC_0(VAR_5);

 return VAR_6;
}
