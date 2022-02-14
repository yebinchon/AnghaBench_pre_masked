
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
typedef size_t DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const) ;
 int * FUNC_3 (size_t,char**) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int **,char const**) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsstr_t *VAR_8, *VAR_9;
    const WCHAR *VAR_10, *VAR_11;
    DWORD VAR_12 = 0;
    WCHAR *VAR_13;
    HRESULT VAR_14;

    FUNC_1("\n");

    if(!VAR_5) {
        if(VAR_7)
            *VAR_7 = FUNC_6(FUNC_5());
        return VAR_1;
    }

    VAR_14 = FUNC_7(VAR_2, VAR_6[0], &VAR_9, &VAR_11);
    if(FUNC_0(VAR_14))
        return VAR_14;

    for(VAR_10 = VAR_11; *VAR_10; VAR_10++) {
        if(*VAR_10 == '%') {
            if(FUNC_2(*(VAR_10+1))!=-1 && FUNC_2(*(VAR_10+2))!=-1)
                VAR_10 += 2;
            else if(*(VAR_10+1)=='u' && FUNC_2(*(VAR_10+2))!=-1 && FUNC_2(*(VAR_10+3))!=-1
                    && FUNC_2(*(VAR_10+4))!=-1 && FUNC_2(*(VAR_10+5))!=-1)
                VAR_10 += 5;
        }

        VAR_12++;
    }

    VAR_8 = FUNC_3(VAR_12, &VAR_13);
    if(!VAR_8) {
        FUNC_4(VAR_9);
        return VAR_0;
    }

    VAR_12 = 0;
    for(VAR_10 = VAR_11; *VAR_10; VAR_10++) {
        if(*VAR_10 == '%') {
            if(FUNC_2(*(VAR_10+1))!=-1 && FUNC_2(*(VAR_10+2))!=-1) {
                VAR_13[VAR_12] = (FUNC_2(*(VAR_10+1))<<4) + FUNC_2(*(VAR_10+2));
                VAR_10 += 2;
            }
            else if(*(VAR_10+1)=='u' && FUNC_2(*(VAR_10+2))!=-1 && FUNC_2(*(VAR_10+3))!=-1
                    && FUNC_2(*(VAR_10+4))!=-1 && FUNC_2(*(VAR_10+5))!=-1) {
                VAR_13[VAR_12] = (FUNC_2(*(VAR_10+2))<<12) + (FUNC_2(*(VAR_10+3))<<8)
                    + (FUNC_2(*(VAR_10+4))<<4) + FUNC_2(*(VAR_10+5));
                VAR_10 += 5;
            }
            else
                VAR_13[VAR_12] = *VAR_10;
        }
        else
            VAR_13[VAR_12] = *VAR_10;

        VAR_12++;
    }

    FUNC_4(VAR_9);

    if(VAR_7)
        *VAR_7 = FUNC_6(VAR_8);
    else
        FUNC_4(VAR_8);
    return VAR_1;
}
