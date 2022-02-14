
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expr; int * expression; } ;
typedef TYPE_1__ unary_expression_t ;
typedef int parser_ctx_t ;
typedef int expression_type_t ;
typedef int expression_t ;


 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_0, expression_type_t VAR_1, expression_t *VAR_2)
{
    unary_expression_t *VAR_3 = FUNC_0(VAR_0, VAR_1, sizeof(*VAR_3));

    VAR_3->expression = VAR_2;

    return &VAR_3->expr;
}
