
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ INT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 double FUNC_1 (double,double const) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int *,int ,double*) ;

HRESULT FUNC_4(script_ctx_t *VAR_1, jsval_t VAR_2, INT *VAR_3)
{
    double VAR_4;
    HRESULT VAR_5;

    const double VAR_6 = (double)0xffffffff + 1;

    VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    if(FUNC_2(VAR_4))
        VAR_4 = VAR_4 > 0 ? FUNC_1(VAR_4, VAR_6) : -FUNC_1(-VAR_4, VAR_6);
    else
        VAR_4 = 0;

    *VAR_3 = (UINT32)VAR_4;
    return VAR_0;
}
