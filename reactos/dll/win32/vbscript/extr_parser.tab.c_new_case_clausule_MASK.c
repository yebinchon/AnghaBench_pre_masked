
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int statement_t ;
typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_5__ {struct TYPE_5__* next; int * stat; int * expr; } ;
typedef TYPE_1__ case_clausule_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static case_clausule_t *FUNC_1(parser_ctx_t *VAR_0, expression_t *VAR_1, statement_t *VAR_2, case_clausule_t *VAR_3)
{
    case_clausule_t *VAR_4;

    VAR_4 = FUNC_0(VAR_0, sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);

    VAR_4->expr = VAR_1;
    VAR_4->stat = VAR_2;
    VAR_4->next = VAR_3;
    return VAR_4;
}
