
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int exprval_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int const) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (double) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_13(script_ctx_t *VAR_1)
{
    const int VAR_2 = FUNC_6(VAR_1, 0);
    exprval_t VAR_3;
    double VAR_4;
    jsval_t VAR_5;
    HRESULT VAR_6;

    FUNC_2("%d\n", VAR_2);

    if(!FUNC_9(VAR_1, &VAR_3))
        return FUNC_11(VAR_1, VAR_0, ((void*)0));

    VAR_6 = FUNC_3(VAR_1, &VAR_3, &VAR_5);
    if(FUNC_1(VAR_6)) {
        double VAR_7;

        VAR_6 = FUNC_12(VAR_1, VAR_5, &VAR_7);
        FUNC_8(VAR_5);
        if(FUNC_1(VAR_6)) {
            VAR_4 = VAR_7+(double)VAR_2;
            VAR_6 = FUNC_4(VAR_1, &VAR_3, FUNC_7(VAR_4));
        }
    }
    FUNC_5(&VAR_3);
    if(FUNC_0(VAR_6))
        return VAR_6;

    return FUNC_10(VAR_1, FUNC_7(VAR_4));
}
