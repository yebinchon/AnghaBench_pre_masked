
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int dwFlags; int* pszServerName; int* pszObjectName; int* pszPageTitle; int hInstance; } ;
typedef TYPE_1__ SI_OBJECT_INFO ;
typedef int PCRegKeySecurity ;
typedef int* LPWSTR ;
typedef int* LPCWSTR ;
typedef int HWND ;
typedef int HKEY ;
typedef int BOOL ;


 int FUNC_0 (int*,int ,TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 int VAR_16 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int*,...) ;
 int FUNC_9 (int*) ;

BOOL
FUNC_10(HWND VAR_17,
                      HKEY VAR_18,
                      LPCWSTR VAR_19,
                      LPCWSTR VAR_20)
{
    BOOL VAR_21 = VAR_1;
    LPCWSTR VAR_22 = ((void*)0);
    LPWSTR VAR_23 = ((void*)0);
    PCRegKeySecurity VAR_24;
    SI_OBJECT_INFO VAR_25;
    size_t VAR_26 = 0, VAR_27 = 0;

    if (&FUNC_7 == ((void*)0))
    {
        return VAR_1;
    }

    if (VAR_19 != ((void*)0))
        VAR_26 = FUNC_9(VAR_19);
    if (VAR_20 != ((void*)0))
        VAR_27 = FUNC_9(VAR_20);


    if (VAR_19 != ((void*)0) &&
        (VAR_19[0] == L'\0' ||
         (VAR_19[0] == L'.' && VAR_19[1] == L'.')))
    {
        VAR_26 = 0;
    }

    if (VAR_18 == VAR_2)
        VAR_22 = L"CLASSES_ROOT";
    else if (VAR_18 == VAR_4)
        VAR_22 = L"CURRENT_USER";
    else if (VAR_18 == VAR_5)
        VAR_22 = L"MACHINE";
    else if (VAR_18 == VAR_6)
        VAR_22 = L"USERS";
    else if (VAR_18 == VAR_3)
        VAR_22 = L"CONFIG";
    else
    goto Cleanup;

    VAR_23 = FUNC_3(FUNC_2(),
                          0,
                          (2 + VAR_26 + 1 + FUNC_9(VAR_22) + 1 + VAR_27) * sizeof(WCHAR));
    if (VAR_23 == ((void*)0))
    {
        FUNC_5(VAR_0);
        goto Cleanup;
    }
    VAR_23[0] = L'\0';

    if (VAR_26 != 0)
    {
        FUNC_8(VAR_23,
               L"\\\\");
        FUNC_8(VAR_23,
               VAR_19);
        FUNC_8(VAR_23,
               L"\\");
    }

    FUNC_8(VAR_23,
           VAR_22);
    if (VAR_20 != ((void*)0) && VAR_20[0] != L'\0')
    {
        if (VAR_20[0] != L'\\')
        {
            FUNC_8(VAR_23,
                    L"\\");
        }

        FUNC_8(VAR_23,
               VAR_20);
    }

    VAR_25.dwFlags = VAR_10 | VAR_8 | VAR_9 | VAR_11 | VAR_12 |
                             VAR_13 | VAR_14 | VAR_15;
    VAR_25.hInstance = VAR_16;
    VAR_25.pszServerName = (LPWSTR)VAR_19;
    VAR_25.pszObjectName = (LPWSTR)VAR_20;
    VAR_25.pszPageTitle = (LPWSTR)VAR_20;

    if (!(VAR_24 = FUNC_0(VAR_23,
                                                         VAR_18,
                                                         &VAR_25,
                                                         &VAR_21)))
    {
        goto Cleanup;
    }


    FUNC_7(VAR_17,
                    FUNC_6(VAR_24,
                                      VAR_7));


    FUNC_1(VAR_24);

Cleanup:
    if (VAR_23 != ((void*)0))
    {
        FUNC_4(FUNC_2(),
                 0,
                 VAR_23);
    }

    return VAR_21;
}
