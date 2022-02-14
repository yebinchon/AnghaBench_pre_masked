
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WCHAR ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int *,int const*,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int **) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *,int ,int **,int const**) ;

__attribute__((used)) static HRESULT FUNC_13(script_ctx_t *VAR_2)
{
    jsstr_t *VAR_3;
    const WCHAR *VAR_4;
    jsval_t VAR_5, VAR_6;
    IDispatch *VAR_7;
    DISPID VAR_8;
    HRESULT VAR_9;

    FUNC_3("\n");

    VAR_6 = FUNC_9(VAR_2);

    VAR_9 = FUNC_10(VAR_2, &VAR_7);
    if(FUNC_0(VAR_9)) {
        FUNC_7(VAR_6);
        return VAR_9;
    }

    VAR_9 = FUNC_12(VAR_2, VAR_6, &VAR_3, &VAR_4);
    FUNC_7(VAR_6);
    if(FUNC_0(VAR_9)) {
        FUNC_1(VAR_7);
        return VAR_9;
    }

    VAR_9 = FUNC_4(VAR_2, VAR_7, VAR_4, ((void*)0), 0, &VAR_8);
    FUNC_6(VAR_3);
    if(FUNC_2(VAR_9)) {
        VAR_9 = FUNC_5(VAR_2, VAR_7, VAR_8, &VAR_5);
    }else if(VAR_9 == VAR_0) {
        VAR_5 = FUNC_8();
        VAR_9 = VAR_1;
    }
    FUNC_1(VAR_7);
    if(FUNC_0(VAR_9))
        return VAR_9;

    return FUNC_11(VAR_2, VAR_5);
}
