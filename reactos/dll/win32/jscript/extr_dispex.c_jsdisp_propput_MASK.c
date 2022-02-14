
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int dispex_prop_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,int ,int **) ;
 int FUNC_2 (int *,int *,int ) ;

HRESULT FUNC_3(jsdisp_t *VAR_0, const WCHAR *VAR_1, DWORD VAR_2, jsval_t VAR_3)
{
    dispex_prop_t *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    return FUNC_2(VAR_0, VAR_4, VAR_3);
}
