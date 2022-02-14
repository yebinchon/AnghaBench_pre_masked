
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
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int *,int **,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int *) ;
 scalar_t__ FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsdisp_t *VAR_8;
    DWORD VAR_9, VAR_10, VAR_11;
    jsval_t VAR_12, VAR_13;
    HRESULT VAR_14, VAR_15;

    FUNC_1("\n");

    VAR_14 = FUNC_2(VAR_2, VAR_3, &VAR_8, &VAR_9);
    if(FUNC_0(VAR_14))
        return VAR_14;

    for(VAR_10=0; VAR_10<VAR_9/2; VAR_10++) {
        VAR_11 = VAR_9-VAR_10-1;

        VAR_14 = FUNC_5(VAR_8, VAR_10, &VAR_12);
        if(FUNC_0(VAR_14) && VAR_14!=VAR_0)
            return VAR_14;

        VAR_15 = FUNC_5(VAR_8, VAR_11, &VAR_13);
        if(FUNC_0(VAR_15) && VAR_15!=VAR_0) {
            FUNC_8(VAR_12);
            return VAR_15;
        }

        if(VAR_14 == VAR_0)
            VAR_14 = FUNC_4(VAR_8, VAR_11);
        else
            VAR_14 = FUNC_6(VAR_8, VAR_11, VAR_12);

        if(FUNC_0(VAR_14)) {
            FUNC_8(VAR_12);
            FUNC_8(VAR_13);
            return VAR_14;
        }

        if(VAR_15 == VAR_0)
            VAR_15 = FUNC_4(VAR_8, VAR_10);
        else
            VAR_15 = FUNC_6(VAR_8, VAR_10, VAR_13);

        if(FUNC_0(VAR_15)) {
            FUNC_8(VAR_13);
            return VAR_15;
        }
    }

    if(VAR_7)
        *VAR_7 = FUNC_7(FUNC_3(VAR_8));
    return VAR_1;
}
