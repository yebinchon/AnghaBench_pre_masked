
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stat; int * statement; int * expr; int do_while; } ;
typedef TYPE_1__ while_statement_t ;
typedef int statement_t ;
typedef int parser_ctx_t ;
typedef int expression_t ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, BOOL VAR_2, expression_t *VAR_3, statement_t *VAR_4)
{
    while_statement_t *VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_5));
    if(!VAR_5)
        return ((void*)0);

    VAR_5->do_while = VAR_2;
    VAR_5->expr = VAR_3;
    VAR_5->statement = VAR_4;

    return &VAR_5->stat;
}
