
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_5__ {unsigned int val; struct TYPE_5__* next; } ;
typedef TYPE_1__ dim_list_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static dim_list_t *FUNC_1(parser_ctx_t *VAR_0, unsigned VAR_1, dim_list_t *VAR_2)
{
    dim_list_t *VAR_3;

    VAR_3 = FUNC_0(VAR_0, sizeof(*VAR_3));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->val = VAR_1;
    VAR_3->next = VAR_2;
    return VAR_3;
}
