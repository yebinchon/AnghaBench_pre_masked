
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
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (double) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,double*) ;
 int FUNC_9 (int *,int ,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_2, jsval_t VAR_3, jsval_t VAR_4, BOOL VAR_5, BOOL *VAR_6)
{
    double VAR_7, VAR_8;
    jsval_t VAR_9, VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_9(VAR_2, VAR_3, &VAR_9, VAR_0);
    if(FUNC_0(VAR_11))
        return VAR_11;

    VAR_11 = FUNC_9(VAR_2, VAR_4, &VAR_10, VAR_0);
    if(FUNC_0(VAR_11)) {
        FUNC_7(VAR_9);
        return VAR_11;
    }

    if(FUNC_3(VAR_9) && FUNC_3(VAR_10)) {
        *VAR_6 = (FUNC_5(FUNC_2(VAR_9), FUNC_2(VAR_10)) < 0) ^ VAR_5;
        FUNC_6(FUNC_2(VAR_9));
        FUNC_6(FUNC_2(VAR_10));
        return VAR_1;
    }

    VAR_11 = FUNC_8(VAR_2, VAR_9, &VAR_7);
    FUNC_7(VAR_9);
    if(FUNC_1(VAR_11))
        VAR_11 = FUNC_8(VAR_2, VAR_10, &VAR_8);
    FUNC_7(VAR_10);
    if(FUNC_0(VAR_11))
        return VAR_11;

    *VAR_6 = !FUNC_4(VAR_7) && !FUNC_4(VAR_8) && ((VAR_7 < VAR_8) ^ VAR_5);
    return VAR_1;
}
