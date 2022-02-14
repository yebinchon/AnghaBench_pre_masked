
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int expression_t ;
struct TYPE_4__ {int * value_expr; int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ const_decl_t ;
struct TYPE_5__ {TYPE_1__* global_consts; TYPE_1__* const_decls; } ;
typedef TYPE_2__ compile_ctx_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static expression_t *FUNC_1(compile_ctx_t *VAR_0, const WCHAR *VAR_1, BOOL VAR_2)
{
    const_decl_t *VAR_3;

    for(VAR_3 = VAR_0->const_decls; VAR_3; VAR_3 = VAR_3->next) {
        if(!FUNC_0(VAR_3->name, VAR_1))
            return VAR_3->value_expr;
    }

    if(!VAR_2)
        return ((void*)0);

    for(VAR_3 = VAR_0->global_consts; VAR_3; VAR_3 = VAR_3->next) {
        if(!FUNC_0(VAR_3->name, VAR_1))
            return VAR_3->value_expr;
    }

    return ((void*)0);
}
