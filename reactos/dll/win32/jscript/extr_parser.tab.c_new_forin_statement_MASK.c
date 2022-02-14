
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int variable_declaration_t ;
typedef int statement_t ;
typedef int parser_ctx_t ;
struct TYPE_3__ {int stat; int * statement; int * in_expr; int * expr; int * variable; } ;
typedef TYPE_1__ forin_statement_t ;
typedef int expression_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, variable_declaration_t *VAR_2, expression_t *VAR_3,
        expression_t *VAR_4, statement_t *VAR_5)
{
    forin_statement_t *VAR_6;

    VAR_6 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_6));
    if(!VAR_6)
        return ((void*)0);

    VAR_6->variable = VAR_2;
    VAR_6->expr = VAR_3;
    VAR_6->in_expr = VAR_4;
    VAR_6->statement = VAR_5;

    return &VAR_6->stat;
}
