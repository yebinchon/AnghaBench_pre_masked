
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int scope_chain_t ;
typedef int jsdisp_t ;
struct TYPE_6__ {int param_cnt; } ;
typedef TYPE_2__ function_code_t ;
typedef int bytecode_t ;
struct TYPE_5__ {int dispex; int length; } ;
struct TYPE_7__ {TYPE_1__ function; TYPE_2__* func_code; int * code; int * scope_chain; } ;
typedef TYPE_3__ InterpretedFunction ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int,int ,int ,int *,void**) ;
 int FUNC_4 (int *,int *,int **) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;

HRESULT FUNC_10(script_ctx_t *VAR_6, bytecode_t *VAR_7, function_code_t *VAR_8,
        scope_chain_t *VAR_9, jsdisp_t **VAR_10)
{
    InterpretedFunction *VAR_11;
    jsdisp_t *VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_4(VAR_6, ((void*)0), &VAR_12);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_13 = FUNC_3(VAR_6, ((void*)0), &VAR_1, sizeof(InterpretedFunction), VAR_2,
                           VAR_0, ((void*)0), (void**)&VAR_11);
    if(FUNC_1(VAR_13)) {
        VAR_13 = FUNC_5(&VAR_11->function.dispex, VAR_5, VAR_3,
                                           FUNC_7(VAR_12));
        if(FUNC_1(VAR_13))
            VAR_13 = FUNC_9(VAR_6, &VAR_11->function.dispex, VAR_12);
        if(FUNC_0(VAR_13))
            FUNC_6(&VAR_11->function.dispex);
    }
    FUNC_6(VAR_12);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(VAR_9) {
        FUNC_8(VAR_9);
        VAR_11->scope_chain = VAR_9;
    }

    FUNC_2(VAR_7);
    VAR_11->code = VAR_7;
    VAR_11->func_code = VAR_8;
    VAR_11->function.length = VAR_11->func_code->param_cnt;

    *VAR_10 = &VAR_11->function.dispex;
    return VAR_4;
}
