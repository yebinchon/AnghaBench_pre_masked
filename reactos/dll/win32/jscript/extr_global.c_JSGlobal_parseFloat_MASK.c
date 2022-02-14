
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
typedef int LONGLONG ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *,int ,int **,char const**) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_7, vdisp_t *VAR_8, WORD VAR_9, unsigned VAR_10, jsval_t *VAR_11,
        jsval_t *VAR_12)
{
    LONGLONG VAR_13 = 0, VAR_14;
    jsstr_t *VAR_15;
    int VAR_16 = 0;
    const WCHAR *VAR_17;
    BOOL VAR_18 = VAR_6, VAR_19 = VAR_6;
    HRESULT VAR_20;

    if(!VAR_10) {
        if(VAR_12)
            *VAR_12 = FUNC_4(VAR_4);
        return VAR_5;
    }

    VAR_20 = FUNC_6(VAR_7, VAR_11[0], &VAR_15, &VAR_17);
    if(FUNC_0(VAR_20))
        return VAR_20;

    while(FUNC_2(*VAR_17)) VAR_17++;

    if(*VAR_17 == '+')
        VAR_17++;
    else if(*VAR_17 == '-') {
        VAR_19 = VAR_0;
        VAR_17++;
    }

    if(FUNC_1(*VAR_17))
        VAR_18 = VAR_0;

    while(FUNC_1(*VAR_17)) {
        VAR_14 = VAR_13*10 + *(VAR_17++) - '0';
        if(VAR_13>VAR_3/10 || VAR_14<0) {
            VAR_16++;
            break;
        }
        else
            VAR_13 = VAR_14;
    }
    while(FUNC_1(*VAR_17)) {
        VAR_16++;
        VAR_17++;
    }

    if(*VAR_17 == '.') VAR_17++;

    if(FUNC_1(*VAR_17))
        VAR_18 = VAR_0;

    while(FUNC_1(*VAR_17)) {
        VAR_14 = VAR_13*10 + *(VAR_17++) - '0';
        if(VAR_13>VAR_3/10 || VAR_14<0)
            break;

        VAR_13 = VAR_14;
        VAR_16--;
    }
    while(FUNC_1(*VAR_17))
        VAR_17++;

    if(*VAR_17 && !VAR_18 && (*VAR_17=='e' || *VAR_17=='E')) {
        int VAR_21 = 1, VAR_22 = 0;

        VAR_17++;
        if(*VAR_17 == '+')
            VAR_17++;
        else if(*VAR_17 == '-') {
            VAR_21 = -1;
            VAR_17++;
        }

        while(FUNC_1(*VAR_17)) {
            if(VAR_22>VAR_1/10 || (VAR_22 = VAR_22*10 + *VAR_17++ - '0')<0)
                VAR_22 = VAR_1;
        }
        VAR_22 *= VAR_21;

        if(VAR_16<0 && VAR_22<0 && VAR_16+VAR_22>0) VAR_16 = VAR_2;
        else if(VAR_16>0 && VAR_22>0 && VAR_16+VAR_22<0) VAR_16 = VAR_1;
        else VAR_16 += VAR_22;
    }

    FUNC_3(VAR_15);

    if(VAR_18) {
        if(VAR_12)
            *VAR_12 = FUNC_4(VAR_4);
        return VAR_5;
    }

    if(!VAR_19)
        VAR_13 = -VAR_13;
    if(VAR_12)
        *VAR_12 = FUNC_4(VAR_16>0 ? VAR_13*FUNC_5(10, VAR_16) : VAR_13/FUNC_5(10, -VAR_16));
    return VAR_5;
}
