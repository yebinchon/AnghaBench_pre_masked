
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_4__ {int tail; int head; } ;
typedef TYPE_1__ parameter_list_t ;
typedef int WCHAR ;


 int FUNC_0 (int *,int const*) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static parameter_list_t *FUNC_2(parser_ctx_t *VAR_0, const WCHAR *VAR_1)
{
    parameter_list_t *VAR_2 = FUNC_1(VAR_0, sizeof(parameter_list_t));

    VAR_2->head = VAR_2->tail = FUNC_0(VAR_0, VAR_1);

    return VAR_2;
}
