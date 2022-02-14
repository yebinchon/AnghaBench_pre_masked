
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_4__ {int * next; int * expr; } ;
typedef TYPE_1__ argument_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static argument_t *FUNC_1(parser_ctx_t *VAR_0, expression_t *VAR_1)
{
    argument_t *VAR_2 = FUNC_0(VAR_0, sizeof(argument_t));

    VAR_2->expr = VAR_1;
    VAR_2->next = ((void*)0);

    return VAR_2;
}
