
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_3__ {int expr; int const* identifier; int * expression; } ;
typedef TYPE_1__ member_expression_t ;
typedef int expression_t ;
typedef int WCHAR ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, expression_t *VAR_2, const WCHAR *VAR_3)
{
    member_expression_t *VAR_4 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_4));

    VAR_4->expression = VAR_2;
    VAR_4->identifier = VAR_3;

    return &VAR_4->expr;
}
