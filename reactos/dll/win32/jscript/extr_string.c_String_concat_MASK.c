
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int **) ;
 int ** FUNC_4 (unsigned int const) ;
 int FUNC_5 (int **) ;
 int * FUNC_6 (unsigned int,int **) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 unsigned int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_13(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    jsstr_t *VAR_9 = ((void*)0), *VAR_10;
    HRESULT VAR_11;

    FUNC_2("\n");

    VAR_11 = FUNC_3(VAR_3, VAR_4, &VAR_10);
    if(FUNC_0(VAR_11))
        return VAR_11;

    switch(VAR_6) {
    case 0:
        VAR_9 = VAR_10;
        break;
    case 1: {
        jsstr_t *VAR_12;

        VAR_11 = FUNC_12(VAR_3, VAR_7[0], &VAR_12);
        if(FUNC_0(VAR_11)) {
            FUNC_10(VAR_10);
            return VAR_11;
        }

        VAR_9 = FUNC_7(VAR_10, VAR_12);
        FUNC_10(VAR_10);
        if(!VAR_9)
            return VAR_0;
        break;
    }
    default: {
        const unsigned VAR_13 = VAR_6+1;
        unsigned VAR_14 = 0, VAR_15;
        jsstr_t **VAR_16;
        WCHAR *VAR_17;

        VAR_16 = FUNC_4(VAR_13 * sizeof(*VAR_16));
        if(!VAR_16) {
            FUNC_10(VAR_10);
            return VAR_0;
        }

        VAR_16[0] = VAR_10;
        for(VAR_15=0; VAR_15 < VAR_6; VAR_15++) {
            VAR_11 = FUNC_12(VAR_3, VAR_7[VAR_15], VAR_16+VAR_15+1);
            if(FUNC_0(VAR_11))
                break;
        }

        if(FUNC_1(VAR_11)) {
            for(VAR_15=0; VAR_15 < VAR_13; VAR_15++) {
                VAR_14 += FUNC_9(VAR_16[VAR_15]);
                if(VAR_14 > VAR_1) {
                    VAR_11 = VAR_0;
                    break;
                }
            }

            if(FUNC_1(VAR_11)) {
                VAR_9 = FUNC_6(VAR_14, &VAR_17);
                if(VAR_9) {
                    for(VAR_15=0; VAR_15 < VAR_13; VAR_15++)
                        VAR_17 += FUNC_8(VAR_16[VAR_15], VAR_17);
                }else {
                    VAR_11 = VAR_0;
                }
            }
        }

        while(VAR_15--)
            FUNC_10(VAR_16[VAR_15]);
        FUNC_5(VAR_16);
        if(FUNC_0(VAR_11))
            return VAR_11;
    }
    }

    if(VAR_8)
        *VAR_8 = FUNC_11(VAR_9);
    else
        FUNC_10(VAR_9);
    return VAR_2;
}
