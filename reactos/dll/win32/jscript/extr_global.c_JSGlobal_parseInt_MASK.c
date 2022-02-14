
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
typedef int INT ;
typedef int HRESULT ;
typedef int DOUBLE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int **,int const**) ;
 int FUNC_7 (int *,int ,int*) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    BOOL VAR_10 = VAR_0, VAR_11 = VAR_3;
    const WCHAR *VAR_12;
    DOUBLE VAR_13 = 0.0;
    INT VAR_14=0, VAR_15;
    jsstr_t *VAR_16;
    HRESULT VAR_17;

    if(!VAR_7) {
        if(VAR_9)
            *VAR_9 = FUNC_5(VAR_1);
        return VAR_2;
    }

    if(VAR_7 >= 2) {
        VAR_17 = FUNC_7(VAR_4, VAR_8[1], &VAR_14);
        if(FUNC_0(VAR_17))
            return VAR_17;

        if(VAR_14 && (VAR_14 < 2 || VAR_14 > 36)) {
            FUNC_1("radix %d out of range\n", VAR_14);
            if(VAR_9)
                *VAR_9 = FUNC_5(VAR_1);
            return VAR_2;
        }
    }

    VAR_17 = FUNC_6(VAR_4, VAR_8[0], &VAR_16, &VAR_12);
    if(FUNC_0(VAR_17))
        return VAR_17;

    while(FUNC_3(*VAR_12))
        VAR_12++;

    switch(*VAR_12) {
    case '+':
        VAR_12++;
        break;
    case '-':
        VAR_10 = VAR_3;
        VAR_12++;
        break;
    }

    if(!VAR_14) {
        if(*VAR_12 == '0') {
            if(VAR_12[1] == 'x' || VAR_12[1] == 'X') {
                VAR_14 = 16;
                VAR_12 += 2;
            }else {
                VAR_14 = 8;
                VAR_12++;
                VAR_11 = VAR_0;
            }
        }else {
            VAR_14 = 10;
        }
    }else if(VAR_14 == 16 && *VAR_12 == '0' && (VAR_12[1] == 'x' || VAR_12[1] == 'X')) {
        VAR_12 += 2;
    }

    VAR_15 = FUNC_2(*VAR_12++);
    if(VAR_15 < VAR_14) {
        do {
            VAR_13 = VAR_13*VAR_14 + VAR_15;
            VAR_15 = FUNC_2(*VAR_12++);
        }while(VAR_15 < VAR_14);
    }else if(VAR_11) {
        VAR_13 = VAR_1;
    }

    FUNC_4(VAR_16);

    if(VAR_10)
        VAR_13 = -VAR_13;

    if(VAR_9)
        *VAR_9 = FUNC_5(VAR_13);
    return VAR_2;
}
