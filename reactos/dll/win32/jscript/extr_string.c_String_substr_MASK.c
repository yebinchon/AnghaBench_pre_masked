
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int **) ;
 scalar_t__ FUNC_3 (double) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,double) ;
 int FUNC_9 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    int VAR_8=0, VAR_9, VAR_10;
    jsstr_t *VAR_11;
    double VAR_12;
    HRESULT VAR_13;

    FUNC_1("\n");

    VAR_13 = FUNC_2(VAR_2, VAR_3, &VAR_11);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_10 = FUNC_4(VAR_11);
    if(VAR_5 >= 1) {
        VAR_13 = FUNC_9(VAR_2, VAR_6[0], &VAR_12);
        if(FUNC_0(VAR_13)) {
            FUNC_5(VAR_11);
            return VAR_13;
        }

        if(VAR_12 >= 0)
            VAR_8 = FUNC_3(VAR_12) ? FUNC_8(VAR_10, VAR_12) : VAR_10;
    }

    if(VAR_5 >= 2) {
        VAR_13 = FUNC_9(VAR_2, VAR_6[1], &VAR_12);
        if(FUNC_0(VAR_13)) {
            FUNC_5(VAR_11);
            return VAR_13;
        }

        if(VAR_12 >= 0.0)
            VAR_9 = FUNC_3(VAR_12) ? FUNC_8(VAR_10-VAR_8, VAR_12) : VAR_10-VAR_8;
        else
            VAR_9 = 0;
    }else {
        VAR_9 = VAR_10-VAR_8;
    }

    VAR_13 = VAR_1;
    if(VAR_7) {
        jsstr_t *VAR_14 = FUNC_6(VAR_11, VAR_8, VAR_9);
        if(VAR_14)
            *VAR_7 = FUNC_7(VAR_14);
        else
            VAR_13 = VAR_0;
    }

    FUNC_5(VAR_11);
    return VAR_13;
}
