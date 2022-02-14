
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* call_ctx; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_10__ {int bytecode; int ret; scalar_t__ this_obj; scalar_t__ variable_obj; scalar_t__ function_instance; struct TYPE_10__* prev_frame; scalar_t__ pop_locals; scalar_t__ pop_variables; TYPE_4__* scope; scalar_t__ arguments_obj; TYPE_4__* base_scope; int stack_base; } ;
typedef TYPE_2__ call_frame_t ;
struct TYPE_11__ {int ref; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_12(script_ctx_t *VAR_1)
{
    call_frame_t *VAR_2 = VAR_1->call_ctx;

    VAR_2->stack_base -= VAR_2->pop_locals + VAR_2->pop_variables;

    FUNC_3(VAR_2->scope == VAR_2->base_scope);


    if(VAR_2->scope && VAR_2->scope->ref > 1) {
        HRESULT VAR_3 = FUNC_5(VAR_1, VAR_2, VAR_0);
        if(FUNC_1(VAR_3))
            FUNC_0("Failed to detach variable object: %08x\n", VAR_3);
    }

    if(VAR_2->arguments_obj)
        FUNC_4(VAR_2->arguments_obj);
    if(VAR_2->scope)
        FUNC_10(VAR_2->scope);

    if(VAR_2->pop_variables)
        FUNC_11(VAR_1, VAR_2->pop_variables);
    FUNC_11(VAR_1, VAR_2->pop_locals);

    VAR_1->call_ctx = VAR_2->prev_frame;

    if(VAR_2->function_instance)
        FUNC_7(VAR_2->function_instance);
    if(VAR_2->variable_obj)
        FUNC_7(VAR_2->variable_obj);
    if(VAR_2->this_obj)
        FUNC_2(VAR_2->this_obj);
    FUNC_8(VAR_2->ret);
    FUNC_9(VAR_2->bytecode);
    FUNC_6(VAR_2);
}
