
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_4__ {int * next; int * value_expr; int const* name; } ;
typedef TYPE_1__ const_decl_t ;
typedef int WCHAR ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static const_decl_t *FUNC_1(parser_ctx_t *VAR_0, const WCHAR *VAR_1, expression_t *VAR_2)
{
    const_decl_t *VAR_3;

    VAR_3 = FUNC_0(VAR_0, sizeof(*VAR_3));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->name = VAR_1;
    VAR_3->value_expr = VAR_2;
    VAR_3->next = ((void*)0);
    return VAR_3;
}
