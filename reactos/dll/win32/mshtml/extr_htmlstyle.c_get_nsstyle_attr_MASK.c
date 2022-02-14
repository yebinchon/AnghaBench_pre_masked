
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t styleid_t ;
typedef int nsIDOMCSSStyleDeclaration ;
typedef int nsAString ;
struct TYPE_2__ {int name; } ;
typedef int PRUnichar ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BSTR ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,size_t,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int const*,int ,int *) ;
 TYPE_1__* VAR_0 ;

HRESULT FUNC_7(nsIDOMCSSStyleDeclaration *VAR_1, styleid_t VAR_2, BSTR *VAR_3, DWORD VAR_4)
{
    nsAString VAR_5;
    const PRUnichar *VAR_6;
    HRESULT VAR_7;

    FUNC_5(&VAR_5, ((void*)0));

    FUNC_2(VAR_1, VAR_2, &VAR_5);

    FUNC_4(&VAR_5, &VAR_6);
    VAR_7 = FUNC_6(VAR_6, VAR_4, VAR_3);
    FUNC_3(&VAR_5);

    FUNC_0("%s -> %s\n", FUNC_1(VAR_0[VAR_2].name), FUNC_1(*VAR_3));
    return VAR_7;
}
