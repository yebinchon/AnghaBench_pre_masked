
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_3__ {int expr; int const* identifier; } ;
typedef TYPE_1__ identifier_expression_t ;
typedef int expression_t ;
typedef int WCHAR ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, const WCHAR *VAR_2)
{
    identifier_expression_t *VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_3));

    VAR_3->identifier = VAR_2;

    return &VAR_3->expr;
}
