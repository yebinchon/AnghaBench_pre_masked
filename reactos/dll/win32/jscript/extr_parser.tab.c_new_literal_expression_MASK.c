
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int literal_t ;
struct TYPE_3__ {int expr; int * literal; } ;
typedef TYPE_1__ literal_expression_t ;
typedef int expression_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, literal_t *VAR_2)
{
    literal_expression_t *VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_3));

    VAR_3->literal = VAR_2;

    return &VAR_3->expr;
}
