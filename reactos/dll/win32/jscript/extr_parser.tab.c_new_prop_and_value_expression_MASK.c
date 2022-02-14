
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int expr; int * property_list; } ;
typedef TYPE_1__ property_value_expression_t ;
struct TYPE_6__ {int * head; } ;
typedef TYPE_2__ property_list_t ;
typedef int parser_ctx_t ;
typedef int expression_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, property_list_t *VAR_2)
{
    property_value_expression_t *VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_3));

    VAR_3->property_list = VAR_2 ? VAR_2->head : ((void*)0);

    return &VAR_3->expr;
}
