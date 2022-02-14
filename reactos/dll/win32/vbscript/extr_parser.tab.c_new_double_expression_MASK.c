
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_3__ {double value; int expr; } ;
typedef TYPE_1__ double_expression_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, double VAR_2)
{
    double_expression_t *VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_3));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->value = VAR_2;
    return &VAR_3->expr;
}
