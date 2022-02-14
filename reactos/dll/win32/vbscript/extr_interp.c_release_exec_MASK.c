
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* stack; scalar_t__* vars; scalar_t__* args; int heap; scalar_t__* arrays; TYPE_1__* func; scalar_t__ this_obj; int dynamic_vars; scalar_t__ ret_val; } ;
typedef TYPE_2__ exec_ctx_t ;
struct TYPE_4__ {unsigned int arg_cnt; unsigned int var_cnt; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(exec_ctx_t *VAR_0)
{
    unsigned VAR_1;

    FUNC_2(&VAR_0->ret_val);
    FUNC_5(VAR_0->dynamic_vars);

    if(VAR_0->this_obj)
        FUNC_0(VAR_0->this_obj);

    if(VAR_0->args) {
        for(VAR_1=0; VAR_1 < VAR_0->func->arg_cnt; VAR_1++)
            FUNC_2(VAR_0->args+VAR_1);
    }

    if(VAR_0->vars) {
        for(VAR_1=0; VAR_1 < VAR_0->func->var_cnt; VAR_1++)
            FUNC_2(VAR_0->vars+VAR_1);
    }

    if(VAR_0->arrays) {
        for(VAR_1=0; VAR_1 < VAR_0->func->var_cnt; VAR_1++) {
            if(VAR_0->arrays[VAR_1])
                FUNC_1(VAR_0->arrays[VAR_1]);
        }
        FUNC_3(VAR_0->arrays);
    }

    FUNC_4(&VAR_0->heap);
    FUNC_3(VAR_0->args);
    FUNC_3(VAR_0->vars);
    FUNC_3(VAR_0->stack);
}
