
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_9__ {int dispex; } ;
struct TYPE_11__ {TYPE_1__ function; int scope_chain; int func_code; int code; } ;
typedef TYPE_3__ InterpretedFunction ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int FunctionInstance ;
typedef int DWORD ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_3__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,int *,int *,int **) ;
 int FUNC_5 (TYPE_2__*,int *,int **) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,int ,int *,int *,int *,unsigned int,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_7, FunctionInstance *VAR_8, IDispatch *VAR_9, unsigned VAR_10,
         unsigned VAR_11, jsval_t *VAR_12, jsval_t *VAR_13)
{
    InterpretedFunction *VAR_14 = (InterpretedFunction*)VAR_8;
    jsdisp_t *VAR_15, *VAR_16 = ((void*)0);
    DWORD VAR_17 = 0;
    HRESULT VAR_18;

    FUNC_2("%p\n", VAR_14);

    if(VAR_7->state == VAR_6 || VAR_7->state == VAR_5) {
        FUNC_3("Script engine state does not allow running code.\n");
        return VAR_4;
    }

    if(VAR_10 & VAR_0) {
        VAR_18 = FUNC_5(VAR_7, &VAR_14->function.dispex, &VAR_16);
        if(FUNC_0(VAR_18))
            return VAR_18;
        VAR_9 = FUNC_8(VAR_16);
    }

    if(VAR_10 & VAR_1)
        VAR_17 |= VAR_3;
    if(VAR_10 & VAR_0)
        VAR_17 |= VAR_2;

    VAR_18 = FUNC_4(VAR_7, ((void*)0), ((void*)0), &VAR_15);
    if(FUNC_1(VAR_18))
        VAR_18 = FUNC_6(VAR_7, VAR_17, VAR_14->code, VAR_14->func_code, VAR_14->scope_chain, VAR_9,
                           &VAR_14->function.dispex, VAR_15, VAR_11, VAR_12, VAR_13);
    if(VAR_16)
        FUNC_7(VAR_16);

    FUNC_7(VAR_15);
    return VAR_18;
}
