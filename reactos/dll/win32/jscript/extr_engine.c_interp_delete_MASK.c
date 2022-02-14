
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int **) ;
 int FUNC_10 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_0)
{
    jsval_t VAR_1, VAR_2;
    IDispatch *VAR_3;
    jsstr_t *VAR_4;
    BOOL VAR_5;
    HRESULT VAR_6;

    FUNC_2("\n");

    VAR_2 = FUNC_7(VAR_0);
    VAR_1 = FUNC_7(VAR_0);

    VAR_6 = FUNC_9(VAR_0, VAR_1, &VAR_3);
    FUNC_6(VAR_1);
    if(FUNC_0(VAR_6)) {
        FUNC_6(VAR_2);
        return VAR_6;
    }

    VAR_6 = FUNC_10(VAR_0, VAR_2, &VAR_4);
    FUNC_6(VAR_2);
    if(FUNC_0(VAR_6)) {
        FUNC_1(VAR_3);
        return VAR_6;
    }

    VAR_6 = FUNC_3(VAR_0, VAR_3, VAR_4, &VAR_5);
    FUNC_1(VAR_3);
    FUNC_4(VAR_4);
    if(FUNC_0(VAR_6))
        return VAR_6;

    return FUNC_8(VAR_0, FUNC_5(VAR_5));
}
