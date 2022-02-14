
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int statement_t ;
struct TYPE_4__ {int * tail; int * head; } ;
typedef TYPE_1__ statement_list_t ;
typedef int parser_ctx_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static statement_list_t *FUNC_1(parser_ctx_t *VAR_0, statement_t *VAR_1)
{
    statement_list_t *VAR_2 = FUNC_0(VAR_0, sizeof(statement_list_t));

    VAR_2->head = VAR_2->tail = VAR_1;

    return VAR_2;
}
