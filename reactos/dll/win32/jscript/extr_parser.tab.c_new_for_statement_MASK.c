
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * head; } ;
typedef TYPE_1__ variable_list_t ;
typedef int statement_t ;
typedef int parser_ctx_t ;
struct TYPE_6__ {int stat; int * statement; int * end_expr; int * expr; int * begin_expr; int * variable_list; } ;
typedef TYPE_2__ for_statement_t ;
typedef int expression_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, variable_list_t *VAR_2, expression_t *VAR_3,
        expression_t *VAR_4, expression_t *VAR_5, statement_t *VAR_6)
{
    for_statement_t *VAR_7;

    VAR_7 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_7));
    if(!VAR_7)
        return ((void*)0);

    VAR_7->variable_list = VAR_2 ? VAR_2->head : ((void*)0);
    VAR_7->begin_expr = VAR_3;
    VAR_7->expr = VAR_4;
    VAR_7->end_expr = VAR_5;
    VAR_7->statement = VAR_6;

    return &VAR_7->stat;
}
