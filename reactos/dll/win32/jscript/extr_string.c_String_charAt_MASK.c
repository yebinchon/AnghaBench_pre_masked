
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
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int **) ;
 scalar_t__ FUNC_3 (double) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,scalar_t__,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsstr_t *VAR_8, *VAR_9;
    INT VAR_10 = 0;
    HRESULT VAR_11;

    FUNC_1("\n");

    VAR_11 = FUNC_2(VAR_2, VAR_3, &VAR_8);
    if(FUNC_0(VAR_11))
        return VAR_11;

    if(VAR_5) {
        double VAR_12;

        VAR_11 = FUNC_9(VAR_2, VAR_6[0], &VAR_12);
        if(FUNC_0(VAR_11)) {
            FUNC_6(VAR_8);
            return VAR_11;
        }
        VAR_10 = FUNC_3(VAR_12) ? VAR_12 : -1;
    }

    if(!VAR_7) {
        FUNC_6(VAR_8);
        return VAR_1;
    }

    if(0 <= VAR_10 && VAR_10 < FUNC_5(VAR_8)) {
        VAR_9 = FUNC_7(VAR_8, VAR_10, 1);
        if(!VAR_9)
            return VAR_0;
    }else {
        VAR_9 = FUNC_4();
    }

    *VAR_7 = FUNC_8(VAR_9);
    return VAR_1;
}
