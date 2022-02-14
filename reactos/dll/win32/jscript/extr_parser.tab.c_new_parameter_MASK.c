
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_4__ {int * next; int const* identifier; } ;
typedef TYPE_1__ parameter_t ;
typedef int WCHAR ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static parameter_t *FUNC_1(parser_ctx_t *VAR_0, const WCHAR *VAR_1)
{
    parameter_t *VAR_2 = FUNC_0(VAR_0, sizeof(parameter_t));

    VAR_2->identifier = VAR_1;
    VAR_2->next = ((void*)0);

    return VAR_2;
}
