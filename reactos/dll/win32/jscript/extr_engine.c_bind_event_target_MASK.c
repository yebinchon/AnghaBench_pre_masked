
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
struct TYPE_5__ {int IDispatchEx_iface; } ;
typedef TYPE_1__ jsdisp_t ;
struct TYPE_6__ {int name; int event_target; } ;
typedef TYPE_2__ function_code_t ;
typedef int exprval_t ;
typedef int IDispatch ;
typedef int IBindEventHandler ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_1, function_code_t *VAR_2, jsdisp_t *VAR_3)
{
    IBindEventHandler *VAR_4;
    exprval_t VAR_5;
    IDispatch *VAR_6;
    jsval_t VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_11(VAR_1, VAR_2->event_target, &VAR_5);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_8 = FUNC_9(VAR_1, &VAR_5, &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    if(!FUNC_12(VAR_7)) {
        FUNC_1("Can't bind to %s\n", FUNC_8(VAR_7));
        FUNC_13(VAR_7);
    }

    VAR_6 = FUNC_10(VAR_7);
    VAR_8 = FUNC_4(VAR_6, &VAR_0, (void**)&VAR_4);
    if(FUNC_6(VAR_8)) {
        VAR_8 = FUNC_2(VAR_4, VAR_2->name, (IDispatch*)&VAR_3->IDispatchEx_iface);
        FUNC_3(VAR_4);
        if(FUNC_0(VAR_8))
            FUNC_7("BindEvent failed: %08x\n", VAR_8);
    }else {
        FUNC_1("No IBindEventHandler, not yet supported binding\n");
    }

    FUNC_5(VAR_6);
    return VAR_8;
}
