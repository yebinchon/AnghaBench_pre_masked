
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,double*) ;
 int FUNC_15 (int *,int ,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_16(script_ctx_t *VAR_4, jsval_t VAR_5, jsval_t VAR_6, BOOL *VAR_7)
{
    if(FUNC_13(VAR_5) == FUNC_13(VAR_6) || (FUNC_5(VAR_5) && FUNC_5(VAR_6)))
       return FUNC_12(VAR_5, VAR_6, VAR_7);


    if(FUNC_6(VAR_5) && !FUNC_2(VAR_5))
        return FUNC_16(VAR_4, FUNC_9(), VAR_6, VAR_7);
    if(FUNC_6(VAR_6) && !FUNC_2(VAR_6))
        return FUNC_16(VAR_4, VAR_5, FUNC_9(), VAR_7);

    if((FUNC_4(VAR_5) && FUNC_8(VAR_6)) || (FUNC_8(VAR_5) && FUNC_4(VAR_6))) {
        *VAR_7 = VAR_3;
        return VAR_2;
    }

    if(FUNC_7(VAR_5) && FUNC_5(VAR_6)) {
        double VAR_8;
        HRESULT VAR_9;

        VAR_9 = FUNC_14(VAR_4, VAR_5, &VAR_8);
        if(FUNC_0(VAR_9))
            return VAR_9;


        return FUNC_16(VAR_4, FUNC_10(VAR_8), VAR_6, VAR_7);
    }

    if(FUNC_7(VAR_6) && FUNC_5(VAR_5)) {
        double VAR_10;
        HRESULT VAR_11;

        VAR_11 = FUNC_14(VAR_4, VAR_6, &VAR_10);
        if(FUNC_0(VAR_11))
            return VAR_11;


        return FUNC_16(VAR_4, VAR_5, FUNC_10(VAR_10), VAR_7);
    }

    if(FUNC_3(VAR_6))
        return FUNC_16(VAR_4, VAR_5, FUNC_10(FUNC_1(VAR_6) ? 1 : 0), VAR_7);

    if(FUNC_3(VAR_5))
        return FUNC_16(VAR_4, FUNC_10(FUNC_1(VAR_5) ? 1 : 0), VAR_6, VAR_7);


    if(FUNC_6(VAR_6) && (FUNC_7(VAR_5) || FUNC_5(VAR_5))) {
        jsval_t VAR_12;
        HRESULT VAR_13;

        VAR_13 = FUNC_15(VAR_4, VAR_6, &VAR_12, VAR_1);
        if(FUNC_0(VAR_13))
            return VAR_13;

        VAR_13 = FUNC_16(VAR_4, VAR_5, VAR_12, VAR_7);
        FUNC_11(VAR_12);
        return VAR_13;
    }


    if(FUNC_6(VAR_5) && (FUNC_7(VAR_6) || FUNC_5(VAR_6))) {
        jsval_t VAR_14;
        HRESULT VAR_15;

        VAR_15 = FUNC_15(VAR_4, VAR_5, &VAR_14, VAR_1);
        if(FUNC_0(VAR_15))
            return VAR_15;

        VAR_15 = FUNC_16(VAR_4, VAR_14, VAR_6, VAR_7);
        FUNC_11(VAR_14);
        return VAR_15;
    }


    *VAR_7 = VAR_0;
    return VAR_2;
}
