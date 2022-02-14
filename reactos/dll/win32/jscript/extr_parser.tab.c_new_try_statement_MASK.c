
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stat; int * finally_statement; int * catch_block; int * try_statement; } ;
typedef TYPE_1__ try_statement_t ;
typedef int statement_t ;
typedef int parser_ctx_t ;
typedef int catch_block_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, statement_t *VAR_2,
       catch_block_t *VAR_3, statement_t *VAR_4)
{
    try_statement_t *VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_5));
    if(!VAR_5)
        return ((void*)0);

    VAR_5->try_statement = VAR_2;
    VAR_5->catch_block = VAR_3;
    VAR_5->finally_statement = VAR_4;

    return &VAR_5->stat;
}
