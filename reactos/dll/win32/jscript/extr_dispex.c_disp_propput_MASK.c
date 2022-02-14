
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ei; } ;
struct TYPE_11__ {TYPE_2__ ei; int lcid; TYPE_1__* jscaller; } ;
typedef TYPE_3__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int dispex_prop_t ;
typedef int VARIANT ;
typedef int ULONG ;
struct TYPE_12__ {int member_2; int member_3; int * member_1; int * member_0; } ;
struct TYPE_9__ {int IServiceProvider_iface; } ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_4__ DISPPARAMS ;
typedef int DISPID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_4__*,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ,int ,TYPE_4__*,int *,int *,int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int * FUNC_10 (int *,int ) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *,int *,int ) ;

HRESULT FUNC_15(script_ctx_t *VAR_7, IDispatch *VAR_8, DISPID VAR_9, jsval_t VAR_10)
{
    jsdisp_t *VAR_11;
    HRESULT VAR_12;

    VAR_11 = FUNC_11(VAR_8);
    if(VAR_11) {
        dispex_prop_t *VAR_13;

        VAR_13 = FUNC_10(VAR_11, VAR_9);
        if(VAR_13)
            VAR_12 = FUNC_14(VAR_11, VAR_13, VAR_10);
        else
            VAR_12 = VAR_3;

        FUNC_12(VAR_11);
    }else {
        DISPID VAR_14 = VAR_2;
        DWORD VAR_15 = VAR_0;
        VARIANT VAR_16;
        DISPPARAMS VAR_17 = {VAR_16, VAR_14, 1, 1};
        IDispatchEx *VAR_18;

        VAR_12 = FUNC_13(VAR_10, &VAR_16);
        if(FUNC_0(VAR_12))
            return VAR_12;

        if(FUNC_7(&VAR_16) == VAR_6)
            VAR_15 |= VAR_1;

        FUNC_9(VAR_7);
        VAR_12 = FUNC_4(VAR_8, &VAR_4, (void**)&VAR_18);
        if(FUNC_5(VAR_12)) {
            VAR_12 = FUNC_1(VAR_18, VAR_9, VAR_7->lcid, VAR_15, &VAR_17, ((void*)0), &VAR_7->ei.ei,
                    &VAR_7->jscaller->IServiceProvider_iface);
            FUNC_2(VAR_18);
        }else {
            ULONG VAR_19 = 0;

            FUNC_6("using IDispatch\n");
            VAR_12 = FUNC_3(VAR_8, VAR_9, &VAR_5, VAR_7->lcid, VAR_15, &VAR_17, ((void*)0), &VAR_7->ei.ei, &VAR_19);
        }

        FUNC_8(&VAR_16);
    }

    return VAR_12;
}
