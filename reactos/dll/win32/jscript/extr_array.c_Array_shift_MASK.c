
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
 scalar_t__ FUNC_3 (int *,int *,int **,int*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int *) ;
 scalar_t__ FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsdisp_t *VAR_8;
    DWORD VAR_9 = 0, VAR_10;
    jsval_t VAR_11, VAR_12;
    HRESULT VAR_13;

    FUNC_2("\n");

    VAR_13 = FUNC_3(VAR_2, VAR_3, &VAR_8, &VAR_9);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(!VAR_9) {
        VAR_13 = FUNC_9(VAR_8, 0);
        if(FUNC_0(VAR_13))
            return VAR_13;

        if(VAR_7)
            *VAR_7 = FUNC_8();
        return VAR_1;
    }

    VAR_13 = FUNC_5(VAR_8, 0, &VAR_12);
    if(VAR_13 == VAR_0) {
        VAR_12 = FUNC_8();
        VAR_13 = VAR_1;
    }

    for(VAR_10=1; FUNC_1(VAR_13) && VAR_10<VAR_9; VAR_10++) {
        VAR_13 = FUNC_5(VAR_8, VAR_10, &VAR_11);
        if(VAR_13 == VAR_0)
            VAR_13 = FUNC_4(VAR_8, VAR_10-1);
        else if(FUNC_1(VAR_13))
            VAR_13 = FUNC_6(VAR_8, VAR_10-1, VAR_11);
    }

    if(FUNC_1(VAR_13)) {
        VAR_13 = FUNC_4(VAR_8, VAR_9-1);
        if(FUNC_1(VAR_13))
            VAR_13 = FUNC_9(VAR_8, VAR_9-1);
    }

    if(FUNC_0(VAR_13))
        return VAR_13;

    if(VAR_7)
        *VAR_7 = VAR_12;
    else
        FUNC_7(VAR_12);
    return VAR_13;
}
