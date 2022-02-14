
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
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int *,int **,int*) ;
 scalar_t__ FUNC_5 (double) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,int *) ;
 scalar_t__ FUNC_8 (int *,int,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_2 ;
 int FUNC_14 (int,int) ;
 scalar_t__ FUNC_15 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_16(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    DWORD VAR_9, VAR_10=0, VAR_11=0, VAR_12, VAR_13 = 0;
    jsdisp_t *VAR_14 = ((void*)0), *VAR_15;
    jsval_t VAR_16;
    double VAR_17;
    int VAR_18;
    HRESULT VAR_19 = VAR_1;

    FUNC_2("\n");

    VAR_19 = FUNC_4(VAR_3, VAR_4, &VAR_15, &VAR_9);
    if(FUNC_0(VAR_19))
        return VAR_19;

    if(VAR_6) {
        VAR_19 = FUNC_15(VAR_3, VAR_7[0], &VAR_17);
        if(FUNC_0(VAR_19))
            return VAR_19;

        if(FUNC_5(VAR_17)) {
            if((VAR_18 = VAR_17) >= 0)
                VAR_10 = FUNC_14(VAR_18, VAR_9);
            else
                VAR_10 = -VAR_18 > VAR_9 ? 0 : VAR_9 + VAR_18;
        }else {
            VAR_10 = VAR_17 < 0.0 ? 0 : VAR_9;
        }
    }

    if(VAR_6 >= 2) {
        VAR_19 = FUNC_15(VAR_3, VAR_7[1], &VAR_17);
        if(FUNC_0(VAR_19))
            return VAR_19;

        if(FUNC_5(VAR_17)) {
            if((VAR_18 = VAR_17) > 0)
                VAR_11 = FUNC_14(VAR_18, VAR_9-VAR_10);
        }else if(VAR_17 > 0.0) {
            VAR_11 = VAR_9-VAR_10;
        }

        VAR_13 = VAR_6-2;
    }

    if(VAR_8) {
        VAR_19 = FUNC_3(VAR_3, 0, &VAR_14);
        if(FUNC_0(VAR_19))
            return VAR_19;

        for(VAR_12=0; FUNC_1(VAR_19) && VAR_12 < VAR_11; VAR_12++) {
            VAR_19 = FUNC_7(VAR_15, VAR_10+VAR_12, &VAR_16);
            if(VAR_19 == VAR_0) {
                VAR_19 = VAR_1;
            }else if(FUNC_1(VAR_19)) {
                VAR_19 = FUNC_8(VAR_14, VAR_12, VAR_16);
                FUNC_13(VAR_16);
            }
        }

        if(FUNC_1(VAR_19))
            VAR_19 = FUNC_9(VAR_14, VAR_2, FUNC_11(VAR_11));
    }

    if(VAR_13 < VAR_11) {
        for(VAR_12 = VAR_10; FUNC_1(VAR_19) && VAR_12 < VAR_9-VAR_11; VAR_12++) {
            VAR_19 = FUNC_7(VAR_15, VAR_12+VAR_11, &VAR_16);
            if(VAR_19 == VAR_0) {
                VAR_19 = FUNC_6(VAR_15, VAR_12+VAR_13);
            }else if(FUNC_1(VAR_19)) {
                VAR_19 = FUNC_8(VAR_15, VAR_12+VAR_13, VAR_16);
                FUNC_13(VAR_16);
            }
        }

        for(VAR_12=VAR_9; FUNC_1(VAR_19) && VAR_12 != VAR_9-VAR_11+VAR_13; VAR_12--)
            VAR_19 = FUNC_6(VAR_15, VAR_12-1);
    }else if(VAR_13 > VAR_11) {
        for(VAR_12=VAR_9-VAR_11; FUNC_1(VAR_19) && VAR_12 != VAR_10; VAR_12--) {
            VAR_19 = FUNC_7(VAR_15, VAR_12+VAR_11-1, &VAR_16);
            if(VAR_19 == VAR_0) {
                VAR_19 = FUNC_6(VAR_15, VAR_12+VAR_13-1);
            }else if(FUNC_1(VAR_19)) {
                VAR_19 = FUNC_8(VAR_15, VAR_12+VAR_13-1, VAR_16);
                FUNC_13(VAR_16);
            }
        }
    }

    for(VAR_12=0; FUNC_1(VAR_19) && VAR_12 < VAR_13; VAR_12++)
        VAR_19 = FUNC_8(VAR_15, VAR_10+VAR_12, VAR_7[VAR_12+2]);

    if(FUNC_1(VAR_19))
        VAR_19 = FUNC_9(VAR_15, VAR_2, FUNC_11(VAR_9-VAR_11+VAR_13));

    if(FUNC_0(VAR_19)) {
        if(VAR_14)
            FUNC_10(VAR_14);
        return VAR_19;
    }

    if(VAR_8)
        *VAR_8 = FUNC_12(VAR_14);
    return VAR_1;
}
