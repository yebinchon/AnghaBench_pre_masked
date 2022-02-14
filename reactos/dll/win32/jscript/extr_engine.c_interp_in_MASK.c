
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WCHAR ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int ,int const*,int *,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *,int ,int *) ;
 scalar_t__ FUNC_13 (int *,int ,int **,int const**) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_4)
{
    const WCHAR *VAR_5;
    jsstr_t *VAR_6;
    jsval_t VAR_7, VAR_8;
    DISPID VAR_9 = 0;
    BOOL VAR_10;
    HRESULT VAR_11;

    FUNC_3("\n");

    VAR_7 = FUNC_10(VAR_4);
    if(!FUNC_6(VAR_7) || !FUNC_5(VAR_7)) {
        FUNC_9(VAR_7);
        return FUNC_12(VAR_4, VAR_2, ((void*)0));
    }

    VAR_8 = FUNC_10(VAR_4);
    VAR_11 = FUNC_13(VAR_4, VAR_8, &VAR_6, &VAR_5);
    FUNC_9(VAR_8);
    if(FUNC_0(VAR_11)) {
        FUNC_1(FUNC_5(VAR_7));
        return VAR_11;
    }

    VAR_11 = FUNC_4(VAR_4, FUNC_5(VAR_7), VAR_5, ((void*)0), 0, &VAR_9);
    FUNC_1(FUNC_5(VAR_7));
    FUNC_7(VAR_6);
    if(FUNC_2(VAR_11))
        VAR_10 = VAR_3;
    else if(VAR_11 == VAR_0)
        VAR_10 = VAR_1;
    else
        return VAR_11;

    return FUNC_11(VAR_4, FUNC_8(VAR_10));
}
