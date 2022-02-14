
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* pszDriverAlias; } ;
typedef TYPE_1__ WINE_ACMDRIVERID ;
typedef char WCHAR ;
typedef int * LPWSTR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static LPWSTR FUNC_5(const WINE_ACMDRIVERID* VAR_1)
{
    static const WCHAR VAR_2[] = {'S','o','f','t','w','a','r','e','\\','M','i','c','r','o','s','o','f','t','\\',
                                     'A','u','d','i','o','C','o','m','p','r','e','s','s','i','o','n','M','a','n','a','g','e','r','\\',
                                     'D','r','i','v','e','r','C','a','c','h','e','\\','\0'};
    LPWSTR VAR_3;
    int VAR_4;

    if (!VAR_1->pszDriverAlias) {
 FUNC_1("No alias needed for registry entry\n");
 return ((void*)0);
    }
    VAR_4 = FUNC_4(VAR_2);
    VAR_3 = FUNC_2(VAR_0, 0, (VAR_4 + FUNC_4(VAR_1->pszDriverAlias) + 1) * sizeof(WCHAR));
    if (!VAR_3) return ((void*)0);

    FUNC_3(VAR_3, VAR_2);
    FUNC_3(VAR_3 + VAR_4, VAR_1->pszDriverAlias);
    FUNC_0(VAR_3 + VAR_4);
    return VAR_3;
}
