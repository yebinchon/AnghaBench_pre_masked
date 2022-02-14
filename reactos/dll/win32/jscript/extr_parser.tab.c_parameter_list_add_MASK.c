
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_5__ {TYPE_4__* tail; } ;
typedef TYPE_1__ parameter_list_t ;
typedef int WCHAR ;
struct TYPE_6__ {struct TYPE_6__* next; } ;


 TYPE_4__* FUNC_0 (int *,int const*) ;

__attribute__((used)) static parameter_list_t *FUNC_1(parser_ctx_t *VAR_0, parameter_list_t *VAR_1, const WCHAR *VAR_2)
{
    VAR_1->tail = VAR_1->tail->next = FUNC_0(VAR_0, VAR_2);

    return VAR_1;
}
