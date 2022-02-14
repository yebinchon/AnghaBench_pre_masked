
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int dispex_prop_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef int DISPID ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ,unsigned int,int *,int *,int *) ;
 int FUNC_2 (int *) ;

HRESULT FUNC_3(jsdisp_t *VAR_1, DISPID VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5, jsval_t *VAR_6)
{
    dispex_prop_t *VAR_7;

    VAR_7 = FUNC_0(VAR_1, VAR_2);
    if(!VAR_7)
        return VAR_0;

    return FUNC_1(VAR_1, FUNC_2(VAR_1), VAR_7, VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0));
}
