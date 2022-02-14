
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int styleid_t ;
typedef int nsIDOMCSSStyleDeclaration ;
typedef int WCHAR ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int const*,int ) ;
 int FUNC_2 (int *,int *,int ,int const**) ;

HRESULT FUNC_3(nsIDOMCSSStyleDeclaration *VAR_0, styleid_t VAR_1, VARIANT *VAR_2, DWORD VAR_3)
{
    const WCHAR *VAR_4;
    WCHAR VAR_5[14];
    HRESULT VAR_6;

    VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_3, &VAR_4);
    if(FUNC_0(VAR_6))
        return VAR_6;

    return FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3);
}
