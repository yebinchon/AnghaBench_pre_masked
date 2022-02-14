
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_4__ {int elision; int * next; int * expr; } ;
typedef TYPE_1__ array_element_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static array_element_t *FUNC_1(parser_ctx_t *VAR_0, int VAR_1, expression_t *VAR_2)
{
    array_element_t *VAR_3 = FUNC_0(VAR_0, sizeof(array_element_t));

    VAR_3->elision = VAR_1;
    VAR_3->expr = VAR_2;
    VAR_3->next = ((void*)0);

    return VAR_3;
}
