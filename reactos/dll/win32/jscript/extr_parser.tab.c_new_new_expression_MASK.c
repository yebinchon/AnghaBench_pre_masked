
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_5__ {int expr; int * argument_list; int * expression; } ;
typedef TYPE_1__ call_expression_t ;
struct TYPE_6__ {int * head; } ;
typedef TYPE_2__ argument_list_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, expression_t *VAR_2, argument_list_t *VAR_3)
{
    call_expression_t *VAR_4 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_4));

    VAR_4->expression = VAR_2;
    VAR_4->argument_list = VAR_3 ? VAR_3->head : ((void*)0);

    return &VAR_4->expr;
}
