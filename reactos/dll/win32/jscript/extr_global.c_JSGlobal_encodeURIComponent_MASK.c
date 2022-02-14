
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int buf ;
typedef int WORD ;
typedef scalar_t__ WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,scalar_t__ const*,int,char*,int,int *,int *) ;
 void* FUNC_3 (char) ;
 scalar_t__ FUNC_4 (scalar_t__ const) ;
 int * FUNC_5 (int,scalar_t__**) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int ,int **,scalar_t__ const**) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    jsstr_t *VAR_10, *VAR_11;
    char VAR_12[4];
    const WCHAR *VAR_13, *VAR_14;
    DWORD VAR_15 = 0, VAR_16, VAR_17;
    WCHAR *VAR_18;
    HRESULT VAR_19;

    FUNC_1("\n");

    if(!VAR_7) {
        if(VAR_9)
            *VAR_9 = FUNC_8(FUNC_7());
        return VAR_3;
    }

    VAR_19 = FUNC_10(VAR_4, VAR_8[0], &VAR_10, &VAR_14);
    if(FUNC_0(VAR_19))
        return VAR_19;

    for(VAR_13 = VAR_14; *VAR_13; VAR_13++) {
        if(FUNC_4(*VAR_13))
            VAR_15++;
        else {
            VAR_16 = FUNC_2(VAR_0, 0, VAR_13, 1, ((void*)0), 0, ((void*)0), ((void*)0));
            if(!VAR_16) {
                FUNC_6(VAR_10);
                return FUNC_9(VAR_4, VAR_2, ((void*)0));
            }
            VAR_15 += VAR_16*3;
        }
    }

    VAR_11 = FUNC_5(VAR_15, &VAR_18);
    if(!VAR_11) {
        FUNC_6(VAR_10);
        return VAR_1;
    }

    for(VAR_13 = VAR_14; *VAR_13; VAR_13++) {
        if(FUNC_4(*VAR_13)) {
            *VAR_18++ = *VAR_13;
        }else {
            VAR_16 = FUNC_2(VAR_0, 0, VAR_13, 1, VAR_12, sizeof(VAR_12), ((void*)0), ((void*)0));
            for(VAR_17=0; VAR_17<VAR_16; VAR_17++) {
                *VAR_18++ = '%';
                *VAR_18++ = FUNC_3((BYTE)VAR_12[VAR_17] >> 4);
                *VAR_18++ = FUNC_3(VAR_12[VAR_17] & 0x0f);
            }
        }
    }

    FUNC_6(VAR_10);

    if(VAR_9)
        *VAR_9 = FUNC_8(VAR_11);
    else
        FUNC_6(VAR_11);
    return VAR_3;
}
