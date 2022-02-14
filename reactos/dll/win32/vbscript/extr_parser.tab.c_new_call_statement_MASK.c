
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int statement_t ;
typedef int parser_ctx_t ;
typedef int member_expression_t ;
struct TYPE_3__ {int stat; int is_strict; int * expr; } ;
typedef TYPE_1__ call_statement_t ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, BOOL VAR_2, member_expression_t *VAR_3)
{
    call_statement_t *VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);

    VAR_4->expr = VAR_3;
    VAR_4->is_strict = VAR_2;
    return &VAR_4->stat;
}
