
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* func; } ;
struct TYPE_8__ {scalar_t__ p_ref_hook_state; } ;
struct TYPE_7__ {scalar_t__ resolve_option; } ;
typedef TYPE_2__ ParseState ;
typedef TYPE_3__ PLpgSQL_expr ;
typedef int Node ;
typedef int ColumnRef ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_2__*,TYPE_3__*,int *,int) ;

__attribute__((used)) static Node *
FUNC_1(ParseState *VAR_1, ColumnRef *VAR_2)
{
 PLpgSQL_expr *VAR_3 = (PLpgSQL_expr *) VAR_1->p_ref_hook_state;

 if (VAR_3->func->resolve_option == VAR_0)
  return FUNC_0(VAR_1, VAR_3, VAR_2, 0);
 else
  return ((void*)0);
}
