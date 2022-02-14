
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef scalar_t__ INT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int **) ;
 scalar_t__ FUNC_3 (double) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,double) ;
 int FUNC_9 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    INT VAR_7=0, VAR_8, VAR_9;
    jsstr_t *VAR_10;
    double VAR_11;
    HRESULT VAR_12;

    FUNC_1("\n");

    VAR_12 = FUNC_2(VAR_1, VAR_2, &VAR_10);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_9 = FUNC_4(VAR_10);
    if(VAR_4 >= 1) {
        VAR_12 = FUNC_9(VAR_1, VAR_5[0], &VAR_11);
        if(FUNC_0(VAR_12)) {
            FUNC_5(VAR_10);
            return VAR_12;
        }

        if(VAR_11 >= 0)
            VAR_7 = FUNC_3(VAR_11) ? FUNC_8(VAR_9, VAR_11) : VAR_9;
    }

    if(VAR_4 >= 2) {
        VAR_12 = FUNC_9(VAR_1, VAR_5[1], &VAR_11);
        if(FUNC_0(VAR_12)) {
            FUNC_5(VAR_10);
            return VAR_12;
        }

        if(VAR_11 >= 0)
            VAR_8 = FUNC_3(VAR_11) ? FUNC_8(VAR_9, VAR_11) : VAR_9;
        else
            VAR_8 = 0;
    }else {
        VAR_8 = VAR_9;
    }

    if(VAR_7 > VAR_8) {
        INT VAR_13 = VAR_7;
        VAR_7 = VAR_8;
        VAR_8 = VAR_13;
    }

    if(VAR_6) {
        jsstr_t *VAR_14 = FUNC_6(VAR_10, VAR_7, VAR_8-VAR_7);
        if(VAR_14)
            *VAR_6 = FUNC_7(VAR_14);
        else
            VAR_12 = VAR_0;
    }
    FUNC_5(VAR_10);
    return VAR_12;
}
