
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_27__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_35__ {TYPE_6__* call_ctx; int global; int * host_global; int stack_top; } ;
typedef TYPE_3__ script_ctx_t ;
typedef int scope_chain_t ;
typedef void* jsval_t ;
struct TYPE_36__ {TYPE_2__* builtin_info; } ;
typedef TYPE_4__ jsdisp_t ;
struct TYPE_37__ {unsigned int func_cnt; unsigned int var_cnt; int instr_off; TYPE_1__* variables; TYPE_27__* funcs; } ;
typedef TYPE_5__ function_code_t ;
struct TYPE_38__ {unsigned int argc; int flags; struct TYPE_38__* prev_frame; void* variable_obj; void* function_instance; int * this_obj; int stack_base; int ip; int scope; int base_scope; int bytecode; void* ret; TYPE_5__* function; } ;
typedef TYPE_6__ call_frame_t ;
typedef int bytecode_t ;
struct TYPE_34__ {scalar_t__ class; } ;
struct TYPE_33__ {int event_target; } ;
struct TYPE_32__ {int func_id; int name; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int DISPID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,unsigned int,int ,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_27__*,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *,TYPE_27__*,int *,TYPE_4__**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_3__*,void**) ;
 int VAR_8 ;
 TYPE_6__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_6__*) ;
 TYPE_4__* FUNC_11 (int *) ;
 void* FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,int ,int ,int *) ;
 int FUNC_14 (TYPE_4__*,int ,int ) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 void* FUNC_17 () ;
 int FUNC_18 (TYPE_3__*,int ,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_3__*,TYPE_6__*,int *,TYPE_4__*,unsigned int,void**) ;
 int * FUNC_22 (int ) ;

HRESULT FUNC_23(script_ctx_t *VAR_9, DWORD VAR_10, bytecode_t *VAR_11, function_code_t *VAR_12, scope_chain_t *VAR_13,
        IDispatch *VAR_14, jsdisp_t *VAR_15, jsdisp_t *VAR_16, unsigned VAR_17, jsval_t *VAR_18, jsval_t *VAR_19)
{
    call_frame_t *VAR_20;
    unsigned VAR_21;
    HRESULT VAR_22;

    for(VAR_21 = 0; VAR_21 < VAR_12->func_cnt; VAR_21++) {
        jsdisp_t *VAR_23;

        if(!VAR_12->funcs[VAR_21].event_target)
            continue;

        VAR_22 = FUNC_5(VAR_9, VAR_11, VAR_12->funcs+VAR_21, VAR_13, &VAR_23);
        if(FUNC_0(VAR_22))
            return VAR_22;

        VAR_22 = FUNC_3(VAR_9, VAR_12->funcs+VAR_21, VAR_23);
        FUNC_15(VAR_23);
        if(FUNC_0(VAR_22))
            return VAR_22;
    }

    if(VAR_10 & (VAR_1 | VAR_0)) {
        for(VAR_21=0; VAR_21 < VAR_12->var_cnt; VAR_21++) {
            FUNC_2("[%d] %s %d\n", VAR_21, FUNC_6(VAR_12->variables[VAR_21].name), VAR_12->variables[VAR_21].func_id);
            if(VAR_12->variables[VAR_21].func_id != -1) {
                jsdisp_t *VAR_24;

                VAR_22 = FUNC_5(VAR_9, VAR_11, VAR_12->funcs+VAR_12->variables[VAR_21].func_id, VAR_13, &VAR_24);
                if(FUNC_0(VAR_22))
                    return VAR_22;

                VAR_22 = FUNC_14(VAR_16, VAR_12->variables[VAR_21].name, FUNC_16(VAR_24));
                FUNC_15(VAR_24);
            }else if(!(VAR_10 & VAR_1) || !FUNC_18(VAR_9, VAR_12->variables[VAR_21].name, ((void*)0))) {
                DISPID VAR_25 = 0;

                VAR_22 = FUNC_13(VAR_16, VAR_12->variables[VAR_21].name, VAR_8, &VAR_25);
                if(FUNC_0(VAR_22))
                    return VAR_22;
            }
        }
    }


    if(VAR_14) {
        jsdisp_t *VAR_26;

        VAR_26 = FUNC_11(VAR_14);
        if(VAR_26) {
            if(VAR_26->builtin_info->class == VAR_5 || VAR_26->builtin_info->class == VAR_6)
                VAR_14 = ((void*)0);
            FUNC_15(VAR_26);
        }
    }

    if(VAR_9->call_ctx && (VAR_10 & VAR_0)) {
        VAR_22 = FUNC_7(VAR_9, VAR_9->call_ctx, VAR_4);
        if(FUNC_0(VAR_22))
            return VAR_22;
    }

    VAR_20 = FUNC_9(sizeof(*VAR_20));
    if(!VAR_20)
        return VAR_3;

    VAR_20->function = VAR_12;
    VAR_20->ret = FUNC_17();
    VAR_20->argc = VAR_17;
    VAR_20->bytecode = FUNC_4(VAR_11);

    if(!(VAR_10 & (VAR_1|VAR_0))) {
        VAR_22 = FUNC_21(VAR_9, VAR_20, VAR_13, VAR_16, VAR_17, VAR_18);
        if(FUNC_0(VAR_22)) {
            FUNC_19(VAR_20->bytecode);
            FUNC_10(VAR_20);
            return VAR_22;
        }
    }else if(VAR_13) {
        VAR_20->base_scope = VAR_20->scope = FUNC_20(VAR_13);
    }

    VAR_20->ip = VAR_12->instr_off;
    VAR_20->stack_base = VAR_9->stack_top;
    if(VAR_14)
        VAR_20->this_obj = VAR_14;
    else if(VAR_9->host_global)
        VAR_20->this_obj = VAR_9->host_global;
    else
        VAR_20->this_obj = FUNC_22(VAR_9->global);
    FUNC_1(VAR_20->this_obj);

    if(VAR_15)
        VAR_20->function_instance = FUNC_12(VAR_15);

    VAR_20->flags = VAR_10;
    VAR_20->variable_obj = FUNC_12(VAR_16);

    VAR_20->prev_frame = VAR_9->call_ctx;
    VAR_9->call_ctx = VAR_20;

    if(VAR_10 & VAR_2) {




        if(VAR_19)
            *VAR_19 = FUNC_17();
        return VAR_7;
    }

    return FUNC_8(VAR_9, VAR_19);
}
