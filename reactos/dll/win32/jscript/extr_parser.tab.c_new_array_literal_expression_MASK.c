
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_5__ {int * head; } ;
typedef TYPE_1__ element_list_t ;
struct TYPE_6__ {int length; int expr; int * element_list; } ;
typedef TYPE_2__ array_literal_expression_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, element_list_t *VAR_2, int VAR_3)
{
    array_literal_expression_t *VAR_4 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_4));

    VAR_4->element_list = VAR_2 ? VAR_2->head : ((void*)0);
    VAR_4->length = VAR_3;

    return &VAR_4->expr;
}
