
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int INT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 double FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int ,int,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,double*) ;
 int FUNC_10 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_2, jsdisp_t *VAR_3, jsval_t VAR_4, jsval_t VAR_5, INT *VAR_6)
{
    HRESULT VAR_7;

    if(VAR_3) {
        jsval_t VAR_8[2];
        jsval_t VAR_9;
        double VAR_10;

        VAR_8[0] = VAR_4;
        VAR_8[1] = VAR_5;

        VAR_7 = FUNC_5(VAR_3, ((void*)0), VAR_0, 2, VAR_8, &VAR_9);
        if(FUNC_0(VAR_7))
            return VAR_7;

        VAR_7 = FUNC_9(VAR_2, VAR_9, &VAR_10);
        FUNC_8(VAR_9);
        if(FUNC_0(VAR_7))
            return VAR_7;

        if(VAR_10 == 0)
            *VAR_6 = 0;
        *VAR_6 = VAR_10 > 0.0 ? 1 : -1;
    }else if(FUNC_4(VAR_4)) {
        *VAR_6 = FUNC_4(VAR_5) ? 0 : 1;
    }else if(FUNC_4(VAR_5)) {
        *VAR_6 = -1;
    }else if(FUNC_3(VAR_4) && FUNC_3(VAR_5)) {
        double VAR_11 = FUNC_2(VAR_4)-FUNC_2(VAR_5);
        if(VAR_11 > 0.0)
            *VAR_6 = 1;
        else
            *VAR_6 = VAR_11 < -0.0 ? -1 : 0;
    }else {
        jsstr_t *VAR_12, *VAR_13;

        VAR_7 = FUNC_10(VAR_2, VAR_4, &VAR_12);
        if(FUNC_0(VAR_7))
            return VAR_7;

        VAR_7 = FUNC_10(VAR_2, VAR_5, &VAR_13);
        if(FUNC_1(VAR_7)) {
            *VAR_6 = FUNC_6(VAR_12, VAR_13);
            FUNC_7(VAR_13);
        }
        FUNC_7(VAR_12);
        if(FUNC_0(VAR_7))
            return VAR_7;
    }

    return VAR_1;
}
