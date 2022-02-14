
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 double FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int *,int ,double*) ;

HRESULT FUNC_4(script_ctx_t *VAR_1, jsval_t VAR_2, double *VAR_3)
{
    double VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    if(FUNC_2(VAR_4))
        *VAR_3 = 0;
    else
        *VAR_3 = VAR_4 >= 0.0 ? FUNC_1(VAR_4) : -FUNC_1(-VAR_4);
    return VAR_0;
}
