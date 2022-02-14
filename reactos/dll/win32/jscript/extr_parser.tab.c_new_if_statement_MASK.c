
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int statement_t ;
typedef int parser_ctx_t ;
struct TYPE_3__ {int stat; int * else_stat; int * if_stat; int * expr; } ;
typedef TYPE_1__ if_statement_t ;
typedef int expression_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, expression_t *VAR_2, statement_t *VAR_3, statement_t *VAR_4)
{
    if_statement_t *VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_5));
    if(!VAR_5)
        return ((void*)0);

    VAR_5->expr = VAR_2;
    VAR_5->if_stat = VAR_3;
    VAR_5->else_stat = VAR_4;

    return &VAR_5->stat;
}
