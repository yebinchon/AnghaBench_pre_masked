
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_4__ {int * next; int * props; int * funcs; } ;
typedef TYPE_1__ class_decl_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static class_decl_t *FUNC_1(parser_ctx_t *VAR_0)
{
    class_decl_t *VAR_1;

    VAR_1 = FUNC_0(VAR_0, sizeof(*VAR_1));
    if(!VAR_1)
        return ((void*)0);

    VAR_1->funcs = ((void*)0);
    VAR_1->props = ((void*)0);
    VAR_1->next = ((void*)0);
    return VAR_1;
}
