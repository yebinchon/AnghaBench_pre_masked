
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsstr_t ;
struct TYPE_5__ {int hres; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ exprval_t ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DISPID ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int *,int const) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int *,int,TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_29(script_ctx_t *VAR_5)
{
    const HRESULT VAR_6 = FUNC_14(VAR_5, 0);
    IDispatch *VAR_7 = ((void*)0);
    IDispatchEx *VAR_8;
    exprval_t VAR_9;
    DISPID VAR_10;
    BSTR VAR_11 = ((void*)0);
    HRESULT VAR_12;

    FUNC_9("\n");

    FUNC_10(FUNC_15(FUNC_26(VAR_5)));
    VAR_10 = FUNC_12(FUNC_26(VAR_5));

    if(!FUNC_28(VAR_5, 1, &VAR_9)) {
        FUNC_1("invalid ref: %08x\n", VAR_9.u.hres);
        return VAR_0;
    }

    if(FUNC_16(FUNC_27(VAR_5, 3)))
        VAR_7 = FUNC_13(FUNC_27(VAR_5, 3));

    if(VAR_7) {
        VAR_12 = FUNC_5(VAR_7, &VAR_2, (void**)&VAR_8);
        if(FUNC_6(VAR_12)) {
            VAR_12 = FUNC_3(VAR_8, VAR_4, VAR_10, &VAR_10);
            if(VAR_12 == VAR_3)
                VAR_12 = FUNC_2(VAR_8, VAR_10, &VAR_11);
            FUNC_4(VAR_8);
            if(FUNC_0(VAR_12))
                return VAR_12;
        }else {
            FUNC_9("No IDispatchEx\n");
        }
    }

    if(VAR_11) {
        jsstr_t *VAR_13;

        VAR_13 = FUNC_19(VAR_11, FUNC_8(VAR_11));
        FUNC_7(VAR_11);
        if(!VAR_13)
            return VAR_1;

        FUNC_23(VAR_5);
        FUNC_25(VAR_5, FUNC_21(VAR_10));

        VAR_12 = FUNC_11(VAR_5, &VAR_9, FUNC_22(VAR_13));
        FUNC_20(VAR_13);
        if(FUNC_0(VAR_12))
            return VAR_12;

        FUNC_18(VAR_5);
    }else {
        FUNC_24(VAR_5, 4);
        FUNC_17(VAR_5, VAR_6);
    }
    return VAR_3;
}
