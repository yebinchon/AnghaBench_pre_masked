
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_3__ {int expr; int * false_expression; int * true_expression; int * expression; } ;
typedef TYPE_1__ conditional_expression_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, expression_t *VAR_2,
       expression_t *VAR_3, expression_t *VAR_4)
{
    conditional_expression_t *VAR_5 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_5));

    VAR_5->expression = VAR_2;
    VAR_5->true_expression = VAR_3;
    VAR_5->false_expression = VAR_4;

    return &VAR_5->expr;
}
