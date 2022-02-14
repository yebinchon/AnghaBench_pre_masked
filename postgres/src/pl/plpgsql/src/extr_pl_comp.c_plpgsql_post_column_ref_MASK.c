
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int location; int fields; } ;
struct TYPE_13__ {TYPE_1__* func; } ;
struct TYPE_12__ {scalar_t__ p_ref_hook_state; } ;
struct TYPE_11__ {scalar_t__ resolve_option; } ;
typedef TYPE_2__ ParseState ;
typedef TYPE_3__ PLpgSQL_expr ;
typedef int Node ;
typedef TYPE_4__ ColumnRef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int * FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_4__*,int ) ;

__attribute__((used)) static Node *
FUNC_7(ParseState *VAR_4, ColumnRef *VAR_5, Node *VAR_6)
{
 PLpgSQL_expr *VAR_7 = (PLpgSQL_expr *) VAR_4->p_ref_hook_state;
 Node *VAR_8;

 if (VAR_7->func->resolve_option == VAR_3)
  return ((void*)0);

 if (VAR_7->func->resolve_option == VAR_2 && VAR_6 != ((void*)0))
  return ((void*)0);
 VAR_8 = FUNC_6(VAR_4, VAR_7, VAR_5, (VAR_6 == ((void*)0)));

 if (VAR_8 != ((void*)0) && VAR_6 != ((void*)0))
 {




  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_4("column reference \"%s\" is ambiguous",
      FUNC_0(VAR_5->fields)),
     FUNC_3("It could refer to either a PL/pgSQL variable or a table column."),
     FUNC_5(VAR_4, VAR_5->location)));
 }

 return VAR_8;
}
