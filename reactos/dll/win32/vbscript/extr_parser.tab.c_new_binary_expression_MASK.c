
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_type_t ;
typedef int expression_t ;
struct TYPE_3__ {int expr; int * right; int * left; } ;
typedef TYPE_1__ binary_expression_t ;


 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_0, expression_type_t VAR_1, expression_t *VAR_2, expression_t *VAR_3)
{
    binary_expression_t *VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1, sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);

    VAR_4->left = VAR_2;
    VAR_4->right = VAR_3;
    return &VAR_4->expr;
}
