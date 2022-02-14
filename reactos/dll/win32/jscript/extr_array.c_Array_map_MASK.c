
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int **) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int ,int,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int **,scalar_t__*) ;
 int * FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_12 (int *,scalar_t__,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;

__attribute__((used)) static HRESULT FUNC_18(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8, jsval_t *VAR_9)
{
    IDispatch *VAR_10 = ((void*)0), *VAR_11;
    jsval_t VAR_12[3], VAR_13;
    jsdisp_t *VAR_14, *VAR_15;
    DWORD VAR_16, VAR_17;
    HRESULT VAR_18;

    FUNC_3("\n");

    VAR_18 = FUNC_7(VAR_4, VAR_5, &VAR_14, &VAR_16);
    if(FUNC_0(VAR_18)) {
        FUNC_1("Could not get length\n");
        return VAR_18;
    }


    if(!VAR_7 || !FUNC_9(VAR_8[0]) || !FUNC_8(VAR_8[0])) {
        FUNC_1("Invalid arg %s\n", FUNC_5(VAR_7 ? VAR_8[0] : FUNC_17()));
        return VAR_2;
    }
    VAR_11 = FUNC_8(VAR_8[0]);

    if(VAR_7 > 1) {
        if(FUNC_9(VAR_8[1]) && FUNC_8(VAR_8[1])) {
            VAR_10 = FUNC_8(VAR_8[1]);
        }else if(!FUNC_10(VAR_8[1])) {
            FUNC_1("Unsupported context this %s\n", FUNC_5(VAR_8[1]));
            return VAR_3;
        }
    }

    VAR_18 = FUNC_4(VAR_4, VAR_16, &VAR_15);
    if(FUNC_0(VAR_18))
        return VAR_18;

    for(VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
        VAR_18 = FUNC_11(VAR_14, VAR_17, &VAR_12[0]);
        if(VAR_18 == VAR_1)
            continue;
        if(FUNC_0(VAR_18))
            break;

        VAR_12[1] = FUNC_14(VAR_17);
        VAR_12[2] = FUNC_15(VAR_14);
        VAR_18 = FUNC_6(VAR_4, VAR_11, VAR_10, VAR_0, 3, VAR_12, &VAR_13);
        FUNC_16(VAR_12[0]);
        if(FUNC_0(VAR_18))
            break;

        VAR_18 = FUNC_12(VAR_15, VAR_17, VAR_13);
        if(FUNC_0(VAR_18))
            break;
    }

    if(FUNC_2(VAR_18) && VAR_9)
        *VAR_9 = FUNC_15(VAR_15);
    else
        FUNC_13(VAR_15);
    return VAR_18;
}
