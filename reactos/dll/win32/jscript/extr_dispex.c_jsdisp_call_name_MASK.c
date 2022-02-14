
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int dispex_prop_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int const*,int **) ;
 int FUNC_2 (int *,int ,int *,int ,unsigned int,int *,int *,int *) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;

HRESULT FUNC_5(jsdisp_t *VAR_0, const WCHAR *VAR_1, WORD VAR_2, unsigned VAR_3, jsval_t *VAR_4, jsval_t *VAR_5)
{
    dispex_prop_t *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_0, FUNC_3(VAR_1), VAR_1, &VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_7;

    return FUNC_2(VAR_0, FUNC_4(VAR_0), VAR_6, VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0));
}
