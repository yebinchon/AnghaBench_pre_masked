
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * head; } ;
typedef TYPE_1__ statement_list_t ;
typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_7__ {int * next; int * stat; int * expr; } ;
typedef TYPE_2__ case_clausule_t ;


 TYPE_2__* FUNC_0 (int *,int) ;

__attribute__((used)) static case_clausule_t *FUNC_1(parser_ctx_t *VAR_0, expression_t *VAR_1, statement_list_t *VAR_2)
{
    case_clausule_t *VAR_3 = FUNC_0(VAR_0, sizeof(case_clausule_t));

    VAR_3->expr = VAR_1;
    VAR_3->stat = VAR_2 ? VAR_2->head : ((void*)0);
    VAR_3->next = ((void*)0);

    return VAR_3;
}
