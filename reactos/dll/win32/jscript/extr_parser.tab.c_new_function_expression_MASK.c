
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int source_elements_t ;
typedef int parser_ctx_t ;
struct TYPE_5__ {int * head; } ;
typedef TYPE_1__ parameter_list_t ;
struct TYPE_6__ {int expr; int * next; int src_len; int const* src_str; int const* event_target; int * source_elements; int * parameter_list; int const* identifier; } ;
typedef TYPE_2__ function_expression_t ;
typedef int expression_t ;
typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static expression_t *FUNC_1(parser_ctx_t *VAR_1, const WCHAR *VAR_2, parameter_list_t *VAR_3,
    source_elements_t *VAR_4, const WCHAR *VAR_5, const WCHAR *VAR_6, DWORD VAR_7)
{
    function_expression_t *VAR_8 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_8));

    VAR_8->identifier = VAR_2;
    VAR_8->parameter_list = VAR_3 ? VAR_3->head : ((void*)0);
    VAR_8->source_elements = VAR_4;
    VAR_8->event_target = VAR_5;
    VAR_8->src_str = VAR_6;
    VAR_8->src_len = VAR_7;
    VAR_8->next = ((void*)0);

    return &VAR_8->expr;
}
