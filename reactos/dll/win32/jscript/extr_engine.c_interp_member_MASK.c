
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int *,int const,int const,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int **) ;
 scalar_t__ FUNC_9 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_2)
{
    const BSTR VAR_3 = FUNC_6(VAR_2, 0);
    IDispatch *VAR_4;
    jsval_t VAR_5;
    DISPID VAR_6;
    HRESULT VAR_7;

    FUNC_3("\n");

    VAR_7 = FUNC_8(VAR_2, &VAR_4);
    if(FUNC_0(VAR_7))
        return VAR_7;

    VAR_7 = FUNC_4(VAR_2, VAR_4, VAR_3, VAR_3, 0, &VAR_6);
    if(FUNC_2(VAR_7)) {
        VAR_7 = FUNC_5(VAR_2, VAR_4, VAR_6, &VAR_5);
    }else if(VAR_7 == VAR_0) {
        VAR_5 = FUNC_7();
        VAR_7 = VAR_1;
    }
    FUNC_1(VAR_4);
    if(FUNC_0(VAR_7))
        return VAR_7;

    return FUNC_9(VAR_2, VAR_5);
}
