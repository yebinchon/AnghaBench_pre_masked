
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int dispex_prop_t ;
typedef int HRESULT ;
typedef int DISPID ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int *) ;

HRESULT FUNC_2(jsdisp_t *VAR_1, DISPID VAR_2, jsval_t *VAR_3)
{
    dispex_prop_t *VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_2);
    if(!VAR_4)
        return VAR_0;

    return FUNC_1(VAR_1, VAR_4, VAR_3);
}
