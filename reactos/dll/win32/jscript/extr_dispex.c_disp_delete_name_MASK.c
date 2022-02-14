
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int dispex_prop_t ;
typedef int WCHAR ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;
typedef int BSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int *,int*) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int *,int ,int const*,int **) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int const*) ;

HRESULT FUNC_16(script_ctx_t *VAR_8, IDispatch *VAR_9, jsstr_t *VAR_10, BOOL *VAR_11)
{
    IDispatchEx *VAR_12;
    jsdisp_t *VAR_13;
    BSTR VAR_14;
    HRESULT VAR_15;

    VAR_13 = FUNC_9(VAR_9);
    if(VAR_13) {
        dispex_prop_t *VAR_16;
        const WCHAR *VAR_17;

        VAR_17 = FUNC_11(VAR_10);
        if(!VAR_17) {
            FUNC_10(VAR_13);
            return VAR_1;
        }

        VAR_15 = FUNC_8(VAR_13, FUNC_15(VAR_17), VAR_17, &VAR_16);
        if(VAR_16) {
            VAR_15 = FUNC_7(VAR_16, VAR_11);
        }else {
            *VAR_11 = VAR_6;
            VAR_15 = VAR_5;
        }

        FUNC_10(VAR_13);
        return VAR_15;
    }

    VAR_14 = FUNC_5(((void*)0), FUNC_13(VAR_10));
    if(!VAR_14)
        return VAR_1;
    FUNC_12(VAR_10, VAR_14);

    VAR_15 = FUNC_3(VAR_9, &VAR_3, (void**)&VAR_12);
    if(FUNC_4(VAR_15)) {
        VAR_15 = FUNC_0(VAR_12, VAR_14, FUNC_14(VAR_8, VAR_7));
        if(FUNC_4(VAR_15))
            *VAR_11 = VAR_15 == VAR_5;
        FUNC_1(VAR_12);
    }else {
        DISPID VAR_18;

        VAR_15 = FUNC_2(VAR_9, &VAR_4, &VAR_14, 1, 0, &VAR_18);
        if(FUNC_4(VAR_15)) {

            *VAR_11 = VAR_2;
        }else if(VAR_15 == VAR_0) {

            *VAR_11 = VAR_6;
            VAR_15 = VAR_5;
        }
    }

    FUNC_6(VAR_14);
    return VAR_15;
}
