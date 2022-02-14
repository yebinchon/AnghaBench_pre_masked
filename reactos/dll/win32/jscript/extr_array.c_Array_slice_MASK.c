
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int DOUBLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int **,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_13(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6, jsval_t *VAR_7)
{
    jsdisp_t *VAR_8, *VAR_9;
    DOUBLE VAR_10;
    DWORD VAR_11, VAR_12, VAR_13, VAR_14;
    HRESULT VAR_15;

    FUNC_2("\n");

    VAR_15 = FUNC_5(VAR_2, VAR_3, &VAR_9, &VAR_11);
    if(FUNC_0(VAR_15))
        return VAR_15;

    if(VAR_5) {
        VAR_15 = FUNC_12(VAR_2, VAR_6[0], &VAR_10);
        if(FUNC_0(VAR_15))
            return VAR_15;

        VAR_10 = FUNC_4(VAR_10);
        if(-VAR_10>VAR_11 || FUNC_6(VAR_10)) VAR_12 = 0;
        else if(VAR_10 < 0) VAR_12 = VAR_10+VAR_11;
        else if(VAR_10 <= VAR_11) VAR_12 = VAR_10;
        else VAR_12 = VAR_11;
    }
    else VAR_12 = 0;

    if(VAR_5 > 1) {
        VAR_15 = FUNC_12(VAR_2, VAR_6[1], &VAR_10);
        if(FUNC_0(VAR_15))
            return VAR_15;

        VAR_10 = FUNC_4(VAR_10);
        if(-VAR_10>VAR_11) VAR_13 = 0;
        else if(VAR_10 < 0) VAR_13 = VAR_10+VAR_11;
        else if(VAR_10 <= VAR_11) VAR_13 = VAR_10;
        else VAR_13 = VAR_11;
    }
    else VAR_13 = VAR_11;

    VAR_15 = FUNC_3(VAR_2, (VAR_13>VAR_12)?VAR_13-VAR_12:0, &VAR_8);
    if(FUNC_0(VAR_15))
        return VAR_15;

    for(VAR_14=VAR_12; VAR_14<VAR_13; VAR_14++) {
        jsval_t VAR_16;

        VAR_15 = FUNC_7(VAR_9, VAR_14, &VAR_16);
        if(VAR_15 == VAR_0)
            continue;

        if(FUNC_1(VAR_15)) {
            VAR_15 = FUNC_8(VAR_8, VAR_14-VAR_12, VAR_16);
            FUNC_11(VAR_16);
        }

        if(FUNC_0(VAR_15)) {
            FUNC_9(VAR_8);
            return VAR_15;
        }
    }

    if(VAR_7)
        *VAR_7 = FUNC_10(VAR_8);
    else
        FUNC_9(VAR_8);

    return VAR_1;
}
