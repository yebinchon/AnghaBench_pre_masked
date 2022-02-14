
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int *,int **,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsdisp_t *VAR_8;
    jsval_t VAR_9;
    DWORD VAR_10;
    HRESULT VAR_11;

    FUNC_2("\n");

    VAR_11 = FUNC_3(VAR_2, VAR_3, &VAR_8, &VAR_10);
    if(FUNC_0(VAR_11))
        return VAR_11;

    if(!VAR_10) {
        VAR_11 = FUNC_8(VAR_8, 0);
        if(FUNC_0(VAR_11))
            return VAR_11;

        if(VAR_7)
            *VAR_7 = FUNC_7();
        return VAR_1;
    }

    VAR_10--;
    VAR_11 = FUNC_5(VAR_8, VAR_10, &VAR_9);
    if(FUNC_1(VAR_11))
        VAR_11 = FUNC_4(VAR_8, VAR_10);
    else if(VAR_11 == VAR_0) {
        VAR_9 = FUNC_7();
        VAR_11 = VAR_1;
    }else
        return VAR_11;

    if(FUNC_1(VAR_11))
        VAR_11 = FUNC_8(VAR_8, VAR_10);

    if(FUNC_0(VAR_11)) {
        FUNC_6(VAR_9);
        return VAR_11;
    }

    if(VAR_7)
        *VAR_7 = VAR_9;
    else
        FUNC_6(VAR_9);
    return VAR_11;
}
