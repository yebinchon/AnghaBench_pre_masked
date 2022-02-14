
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,char*,int,char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const) ;
 int * FUNC_5 (scalar_t__,char**) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int **,char const**) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_5, vdisp_t *VAR_6, WORD VAR_7, unsigned VAR_8, jsval_t *VAR_9,
        jsval_t *VAR_10)
{
    const WCHAR *VAR_11, *VAR_12;
    jsstr_t *VAR_13, *VAR_14;
    WCHAR *VAR_15;
    DWORD VAR_16 = 0;
    HRESULT VAR_17;

    FUNC_3("\n");

    if(!VAR_8) {
        if(VAR_10)
            *VAR_10 = FUNC_8(FUNC_7());
        return VAR_4;
    }

    VAR_17 = FUNC_9(VAR_5, VAR_9[0], &VAR_13, &VAR_12);
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_11 = VAR_12;
    while(*VAR_11) {
        if(*VAR_11 == '%') {
            char VAR_18[4];
            unsigned char VAR_19 = 0x80;
            int VAR_20, VAR_21, VAR_22 = 0;
            if(FUNC_4(*(VAR_11+1)) < 0 || FUNC_4(*(VAR_11+2)) < 0) {
                FUNC_1("Throw URIError: Invalid hex sequence\n");
                FUNC_6(VAR_13);
                return VAR_1;
            }
            VAR_18[0] = (FUNC_4(*(VAR_11+1)) << 4) + FUNC_4(*(VAR_11+2));
            VAR_11 += 3;
            while(VAR_18[0] & VAR_19) {
                VAR_19 = VAR_19 >> 1;
                ++VAR_22;
            }
            if(VAR_22 == 1 || VAR_22 > 4) {
                FUNC_1("Throw URIError: Invalid initial UTF character\n");
                FUNC_6(VAR_13);
                return VAR_1;
            }
            for(VAR_20 = 1; VAR_20 < VAR_22; ++VAR_20) {
                if(*VAR_11 != '%'){
                    FUNC_1("Throw URIError: Incomplete UTF sequence\n");
                    FUNC_6(VAR_13);
                    return VAR_1;
                }
                if(FUNC_4(*(VAR_11+1)) < 0 || FUNC_4(*(VAR_11+2)) < 0) {
                    FUNC_1("Throw URIError: Invalid hex sequence\n");
                    FUNC_6(VAR_13);
                    return VAR_1;
                }
                VAR_18[VAR_20] = (FUNC_4(*(VAR_11+1)) << 4) + FUNC_4(*(VAR_11+2));
                VAR_11 += 3;
            }
            VAR_21 = FUNC_2(VAR_0, VAR_3, VAR_18,
                    VAR_22 ? VAR_22 : 1, ((void*)0), 0);
            if(VAR_21 == 0) {
                FUNC_1("Throw URIError: Invalid UTF sequence\n");
                FUNC_6(VAR_13);
                return VAR_1;
            }
            VAR_16 += VAR_21;
        }else {
            ++VAR_11;
            ++VAR_16;
        }
    }

    VAR_14 = FUNC_5(VAR_16, &VAR_15);
    if(!VAR_14) {
        FUNC_6(VAR_13);
        return VAR_2;
    }

    VAR_11 = VAR_12;
    while(*VAR_11) {
        if(*VAR_11 == '%') {
            char VAR_23[4];
            unsigned char VAR_24 = 0x80;
            int VAR_25, VAR_26, VAR_27 = 0;
            VAR_23[0] = (FUNC_4(*(VAR_11+1)) << 4) + FUNC_4(*(VAR_11+2));
            VAR_11 += 3;
            while(VAR_23[0] & VAR_24) {
                VAR_24 = VAR_24 >> 1;
                ++VAR_27;
            }
            for(VAR_25 = 1; VAR_25 < VAR_27; ++VAR_25) {
                VAR_23[VAR_25] = (FUNC_4(*(VAR_11+1)) << 4) + FUNC_4(*(VAR_11+2));
                VAR_11 += 3;
            }
            VAR_26 = FUNC_2(VAR_0, VAR_3, VAR_23,
                    VAR_27 ? VAR_27 : 1, VAR_15, VAR_16);
            VAR_16 -= VAR_26;
            VAR_15 += VAR_26;
        }else {
            *VAR_15++ = *VAR_11++;
            --VAR_16;
        }
    }

    FUNC_6(VAR_13);

    if(VAR_10)
        *VAR_10 = FUNC_8(VAR_14);
    else
        FUNC_6(VAR_14);
    return VAR_4;
}
