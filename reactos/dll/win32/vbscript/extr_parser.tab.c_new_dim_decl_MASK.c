
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int dim_list_t ;
struct TYPE_4__ {int * next; int * dims; int is_array; int const* name; } ;
typedef TYPE_1__ dim_decl_t ;
typedef int WCHAR ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static dim_decl_t *FUNC_1(parser_ctx_t *VAR_0, const WCHAR *VAR_1, BOOL VAR_2, dim_list_t *VAR_3)
{
    dim_decl_t *VAR_4;

    VAR_4 = FUNC_0(VAR_0, sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);

    VAR_4->name = VAR_1;
    VAR_4->is_array = VAR_2;
    VAR_4->dims = VAR_3;
    VAR_4->next = ((void*)0);
    return VAR_4;
}
