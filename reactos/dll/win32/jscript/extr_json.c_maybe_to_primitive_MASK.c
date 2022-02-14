
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (double) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,double*) ;
 int FUNC_13 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_4, jsval_t VAR_5, jsval_t *VAR_6)
{
    jsdisp_t *VAR_7;
    HRESULT VAR_8;

    if(!FUNC_5(VAR_5) || !FUNC_2(VAR_5) || !(VAR_7 = FUNC_3(FUNC_2(VAR_5))))
        return FUNC_8(VAR_5, VAR_6);

    if(FUNC_4(VAR_7, VAR_1)) {
        double VAR_9;
        VAR_8 = FUNC_12(VAR_4, VAR_5, &VAR_9);
        FUNC_6(VAR_7);
        if(FUNC_0(VAR_8))
            *VAR_6 = FUNC_9(VAR_9);
        return VAR_8;
    }

    if(FUNC_4(VAR_7, VAR_2)) {
        jsstr_t *VAR_10;
        VAR_8 = FUNC_13(VAR_4, VAR_5, &VAR_10);
        FUNC_6(VAR_7);
        if(FUNC_0(VAR_8))
            *VAR_6 = FUNC_11(VAR_10);
        return VAR_8;
    }

    if(FUNC_4(VAR_7, VAR_0)) {
        *VAR_6 = FUNC_7(FUNC_1(VAR_7));
        FUNC_6(VAR_7);
        return VAR_3;
    }

    *VAR_6 = FUNC_10(VAR_7);
    return VAR_3;
}
