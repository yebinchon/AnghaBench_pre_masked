
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t styleid_t ;
typedef int nsresult ;
typedef int nsIDOMCSSStyleDeclaration ;
typedef int nsAString ;
typedef int WCHAR ;
struct TYPE_2__ {int const* name; } ;
typedef int const* LPWSTR ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int const* VAR_3 ;
 int * FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 TYPE_1__* VAR_4 ;

HRESULT FUNC_8(nsIDOMCSSStyleDeclaration *VAR_5, styleid_t VAR_6, const WCHAR *VAR_7, DWORD VAR_8)
{
    nsAString VAR_9, VAR_10, VAR_11;
    LPWSTR VAR_12 = ((void*)0);
    nsresult VAR_13;

    if(VAR_7) {
        if(VAR_8 & VAR_0)
            VAR_12 = FUNC_2(VAR_7);
        else if(VAR_8 & VAR_1)
            VAR_12 = FUNC_3(VAR_7);
    }

    FUNC_6(&VAR_9, VAR_4[VAR_6].name);
    FUNC_6(&VAR_10, VAR_12 ? VAR_12 : VAR_7);
    FUNC_6(&VAR_11, VAR_3);

    VAR_13 = FUNC_7(VAR_5, &VAR_9, &VAR_10, &VAR_11);
    if(FUNC_1(VAR_13))
        FUNC_0("SetProperty failed: %08x\n", VAR_13);

    FUNC_5(&VAR_9);
    FUNC_5(&VAR_10);
    FUNC_5(&VAR_11);
    FUNC_4(VAR_12);

    return VAR_2;
}
