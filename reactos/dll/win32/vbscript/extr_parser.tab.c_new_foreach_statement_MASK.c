
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int statement_t ;
typedef int parser_ctx_t ;
struct TYPE_3__ {int stat; int * body; int * group_expr; int const* identifier; } ;
typedef TYPE_1__ foreach_statement_t ;
typedef int expression_t ;
typedef int WCHAR ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, const WCHAR *VAR_2, expression_t *VAR_3,
        statement_t *VAR_4)
{
    foreach_statement_t *VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_5));
    if(!VAR_5)
        return ((void*)0);

    VAR_5->identifier = VAR_2;
    VAR_5->group_expr = VAR_3;
    VAR_5->body = VAR_4;
    return &VAR_5->stat;
}
