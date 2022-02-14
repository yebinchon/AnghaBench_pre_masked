
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int styleid_t ;
typedef int nsIDOMCSSStyleDeclaration ;
typedef int WCHAR ;
typedef int HTMLElement ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int const*,int ) ;

HRESULT FUNC_4(HTMLElement *VAR_0, styleid_t VAR_1, const WCHAR *VAR_2)
{
    nsIDOMCSSStyleDeclaration *VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_1(VAR_0, &VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_4;

    VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_2, 0);
    FUNC_2(VAR_3);
    return VAR_4;
}
