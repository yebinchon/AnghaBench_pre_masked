
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_4__ {int * next; int by_ref; int const* name; } ;
typedef TYPE_1__ arg_decl_t ;
typedef int WCHAR ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static arg_decl_t *FUNC_1(parser_ctx_t *VAR_0, const WCHAR *VAR_1, BOOL VAR_2)
{
    arg_decl_t *VAR_3;

    VAR_3 = FUNC_0(VAR_0, sizeof(*VAR_3));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->name = VAR_1;
    VAR_3->by_ref = VAR_2;
    VAR_3->next = ((void*)0);
    return VAR_3;
}
