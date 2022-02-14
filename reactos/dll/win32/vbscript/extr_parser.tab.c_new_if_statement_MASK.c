
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int statement_t ;
typedef int parser_ctx_t ;
struct TYPE_3__ {int stat; int * else_stat; int * elseifs; int * if_stat; int * expr; } ;
typedef TYPE_1__ if_statement_t ;
typedef int expression_t ;
typedef int elseif_decl_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, expression_t *VAR_2, statement_t *VAR_3, elseif_decl_t *VAR_4,
        statement_t *VAR_5)
{
    if_statement_t *VAR_6;

    VAR_6 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_6));
    if(!VAR_6)
        return ((void*)0);

    VAR_6->expr = VAR_2;
    VAR_6->if_stat = VAR_3;
    VAR_6->elseifs = VAR_4;
    VAR_6->else_stat = VAR_5;
    return &VAR_6->stat;
}
