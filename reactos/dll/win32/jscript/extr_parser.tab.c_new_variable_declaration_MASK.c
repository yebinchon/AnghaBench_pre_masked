
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * global_next; int * next; int * expr; int const* identifier; } ;
typedef TYPE_1__ variable_declaration_t ;
typedef int parser_ctx_t ;
typedef int expression_t ;
typedef int WCHAR ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static variable_declaration_t *FUNC_1(parser_ctx_t *VAR_0, const WCHAR *VAR_1, expression_t *VAR_2)
{
    variable_declaration_t *VAR_3 = FUNC_0(VAR_0, sizeof(variable_declaration_t));

    VAR_3->identifier = VAR_1;
    VAR_3->expr = VAR_2;
    VAR_3->next = ((void*)0);
    VAR_3->global_next = ((void*)0);

    return VAR_3;
}
