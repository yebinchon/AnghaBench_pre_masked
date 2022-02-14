
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (double) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,double*) ;
 int FUNC_9 (int *,int ,int *,int ) ;
 int FUNC_10 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_2, jsval_t VAR_3, jsval_t VAR_4, jsval_t *VAR_5)
{
    jsval_t VAR_6, VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_9(VAR_2, VAR_3, &VAR_7, VAR_1);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_8 = FUNC_9(VAR_2, VAR_4, &VAR_6, VAR_1);
    if(FUNC_0(VAR_8)) {
        FUNC_6(VAR_7);
        return VAR_8;
    }

    if(FUNC_2(VAR_7) || FUNC_2(VAR_6)) {
        jsstr_t *VAR_9, *VAR_10 = ((void*)0);

        VAR_8 = FUNC_10(VAR_2, VAR_7, &VAR_9);
        if(FUNC_1(VAR_8))
            VAR_8 = FUNC_10(VAR_2, VAR_6, &VAR_10);

        if(FUNC_1(VAR_8)) {
            jsstr_t *VAR_11;

            VAR_11 = FUNC_3(VAR_9, VAR_10);
            if(VAR_11)
                *VAR_5 = FUNC_7(VAR_11);
            else
                VAR_8 = VAR_0;
        }

        FUNC_4(VAR_9);
        if(VAR_10)
            FUNC_4(VAR_10);
    }else {
        double VAR_12, VAR_13;

        VAR_8 = FUNC_8(VAR_2, VAR_7, &VAR_12);
        if(FUNC_1(VAR_8)) {
            VAR_8 = FUNC_8(VAR_2, VAR_6, &VAR_13);
            if(FUNC_1(VAR_8))
                *VAR_5 = FUNC_5(VAR_12+VAR_13);
        }
    }

    FUNC_6(VAR_6);
    FUNC_6(VAR_7);
    return VAR_8;
}
