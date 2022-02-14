
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ DISPID ;
typedef scalar_t__ BSTR ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__*,int,int ,scalar_t__*) ;
 int FUNC_3 (int *,int *,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 int VAR_3 ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int const*,int,scalar_t__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_4, IDispatch *VAR_5, const WCHAR *VAR_6, BSTR VAR_7, DWORD VAR_8, DISPID *VAR_9)
{
    IDispatchEx *VAR_10;
    jsdisp_t *VAR_11;
    BSTR VAR_12;
    HRESULT VAR_13;

    VAR_11 = FUNC_8(VAR_5);
    if(VAR_11) {
        VAR_13 = FUNC_9(VAR_11, VAR_6, VAR_8, VAR_9);
        FUNC_10(VAR_11);
        return VAR_13;
    }

    if(VAR_7) {
        VAR_12 = VAR_7;
    }else {
        VAR_12 = FUNC_5(VAR_6);
        if(!VAR_12)
            return VAR_0;
    }

    *VAR_9 = 0;
    VAR_13 = FUNC_3(VAR_5, &VAR_1, (void**)&VAR_10);
    if(FUNC_4(VAR_13)) {
        VAR_13 = FUNC_0(VAR_10, VAR_12, FUNC_11(VAR_4, VAR_8|VAR_3), VAR_9);
        FUNC_1(VAR_10);
    }else {
        FUNC_7("using IDispatch\n");
        VAR_13 = FUNC_2(VAR_5, &VAR_2, &VAR_12, 1, 0, VAR_9);
    }

    if(VAR_7 != VAR_12)
        FUNC_6(VAR_12);
    return VAR_13;
}
