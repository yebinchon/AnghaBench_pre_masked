
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int **** jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef scalar_t__ INT ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *,int *,int **,int*) ;
 int FUNC_5 (int ****) ;
 int ******** FUNC_6 (int) ;
 int ******* FUNC_7 (int) ;
 int FUNC_8 (int ******) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ****) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int,int *****) ;
 scalar_t__ FUNC_14 (int *,int,int ****) ;
 int FUNC_15 (int *) ;
 int ****** FUNC_16 (int ) ;
 int FUNC_17 (int ****) ;
 int ****** FUNC_18 () ;
 int FUNC_19 (int ******,int ******,int) ;
 scalar_t__ FUNC_20 (int *,int *,int ****,int ****,scalar_t__*) ;

__attribute__((used)) static HRESULT FUNC_21(script_ctx_t *VAR_5, vdisp_t *VAR_6, WORD VAR_7, unsigned VAR_8, jsval_t *VAR_9,
        jsval_t *VAR_10)
{
    jsdisp_t *VAR_11, *VAR_12 = ((void*)0);
    jsval_t *VAR_13, **VAR_14 = ((void*)0);
    DWORD VAR_15;
    DWORD VAR_16;
    HRESULT VAR_17 = VAR_4;

    FUNC_2("\n");

    VAR_17 = FUNC_4(VAR_5, VAR_6, &VAR_11, &VAR_15);
    if(FUNC_0(VAR_17))
        return VAR_17;

    if(VAR_8 > 1) {
        FUNC_3("invalid arg_cnt %d\n", VAR_8);
        return VAR_1;
    }

    if(VAR_8 == 1) {
        if(!FUNC_11(VAR_9[0])) {
            FUNC_3("arg is not dispatch\n");
            return VAR_1;
        }

        VAR_12 = FUNC_9(FUNC_5(VAR_9[0]));
        if(!VAR_12 || !FUNC_10(VAR_12, VAR_3)) {
            FUNC_3("cmp_func is not a function\n");
            if(VAR_12)
                FUNC_15(VAR_12);
            return VAR_1;
        }
    }

    if(!VAR_15) {
        if(VAR_12)
            FUNC_15(VAR_12);
        if(VAR_10)
            *VAR_10 = FUNC_16(FUNC_12(VAR_11));
        return VAR_4;
    }

    VAR_13 = FUNC_7(VAR_15 * sizeof(*VAR_13));
    if(VAR_13) {
        for(VAR_16=0; VAR_16<VAR_15; VAR_16++) {
            VAR_17 = FUNC_13(VAR_11, VAR_16, VAR_13+VAR_16);
            if(VAR_17 == VAR_0) {
                VAR_13[VAR_16] = FUNC_18();
                VAR_17 = VAR_4;
            } else if(FUNC_0(VAR_17)) {
                FUNC_3("Could not get elem %d: %08x\n", VAR_16, VAR_17);
                break;
            }
        }
    }else {
        VAR_17 = VAR_2;
    }

    if(FUNC_1(VAR_17)) {
        VAR_14 = FUNC_6(VAR_15*2*sizeof(*VAR_14));
        if(!VAR_14)
            VAR_17 = VAR_2;
    }


    if(FUNC_1(VAR_17)) {
        jsval_t *VAR_18, **VAR_19;
        INT VAR_20;

        VAR_19 = VAR_14 + VAR_15;
        for(VAR_16=0; VAR_16 < VAR_15; VAR_16++)
            VAR_14[VAR_16] = VAR_13+VAR_16;

        for(VAR_16=0; VAR_16 < VAR_15/2; VAR_16++) {
            VAR_17 = FUNC_20(VAR_5, VAR_12, *VAR_14[2*VAR_16+1], *VAR_14[2*VAR_16], &VAR_20);
            if(FUNC_0(VAR_17))
                break;

            if(VAR_20 < 0) {
                VAR_18 = VAR_14[2*VAR_16];
                VAR_14[2*VAR_16] = VAR_14[2*VAR_16+1];
                VAR_14[2*VAR_16+1] = VAR_18;
            }
        }

        if(FUNC_1(VAR_17)) {
            DWORD VAR_21, VAR_22, VAR_23, VAR_24;

            for(VAR_21=2; VAR_21 < VAR_15; VAR_21 *= 2) {
                for(VAR_16=0; VAR_16+VAR_21 < VAR_15; VAR_16 += 2*VAR_21) {
                    VAR_22 = VAR_23 = 0;
                    if(VAR_16+2*VAR_21 <= VAR_15)
                        VAR_24 = VAR_21;
                    else
                        VAR_24 = VAR_15 - (VAR_16+VAR_21);

                    FUNC_19(VAR_19, VAR_14+VAR_16, VAR_21*sizeof(jsval_t*));

                    while(VAR_22 < VAR_21 && VAR_23 < VAR_24) {
                        VAR_17 = FUNC_20(VAR_5, VAR_12, *VAR_19[VAR_22], *VAR_14[VAR_16+VAR_21+VAR_23], &VAR_20);
                        if(FUNC_0(VAR_17))
                            break;

                        if(VAR_20 < 0) {
                            VAR_14[VAR_16+VAR_22+VAR_23] = VAR_19[VAR_22];
                            VAR_22++;
                        }else {
                            VAR_14[VAR_16+VAR_22+VAR_23] = VAR_14[VAR_16+VAR_21+VAR_23];
                            VAR_23++;
                        }
                    }

                    if(FUNC_0(VAR_17))
                        break;

                    if(VAR_22 < VAR_21)
                        FUNC_19(VAR_14+VAR_16+VAR_22+VAR_23, VAR_19+VAR_22, (VAR_21-VAR_22)*sizeof(jsval_t*));
                }

                if(FUNC_0(VAR_17))
                    break;
            }
        }

        for(VAR_16=0; FUNC_1(VAR_17) && VAR_16 < VAR_15; VAR_16++)
            VAR_17 = FUNC_14(VAR_11, VAR_16, *VAR_14[VAR_16]);
    }

    if(VAR_13) {
        for(VAR_16=0; VAR_16 < VAR_15; VAR_16++)
            FUNC_17(VAR_13[VAR_16]);
        FUNC_8(&VAR_13);
    }
    FUNC_8(VAR_14);
    if(VAR_12)
        FUNC_15(VAR_12);

    if(FUNC_0(VAR_17))
        return VAR_17;

    if(VAR_10)
        *VAR_10 = FUNC_16(FUNC_12(VAR_11));
    return VAR_4;
}
