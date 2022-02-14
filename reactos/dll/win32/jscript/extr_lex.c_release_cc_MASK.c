
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* vars; } ;
typedef TYPE_1__ cc_var_t ;
typedef TYPE_1__ cc_ctx_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(cc_ctx_t *VAR_0)
{
    cc_var_t *VAR_1, *VAR_2;

    for(VAR_1 = VAR_0->vars; VAR_1; VAR_1 = VAR_2) {
        VAR_2 = VAR_1->next;
        FUNC_0(VAR_1);
    }

    FUNC_0(VAR_0);
}
