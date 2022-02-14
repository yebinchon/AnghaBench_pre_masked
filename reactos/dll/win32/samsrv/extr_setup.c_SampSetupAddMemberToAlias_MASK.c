
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* ULONG ;
typedef scalar_t__ PSID ;
typedef char* LPWSTR ;
typedef int LPVOID ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,char**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (char*,char*,char*) ;

__attribute__((used)) static BOOL
FUNC_7(HKEY VAR_4,
                          ULONG VAR_5,
                          PSID VAR_6)
{
    DWORD VAR_7;
    LPWSTR VAR_8 = ((void*)0);
    WCHAR VAR_9[256];
    HKEY VAR_10;

    FUNC_0(VAR_6, &VAR_8);

    FUNC_6(VAR_9, L"Aliases\\%08lX\\Members", VAR_5);

    if (!FUNC_3(VAR_4,
                         VAR_9,
                         0,
                         ((void*)0),
                         VAR_2,
                         VAR_0,
                         ((void*)0),
                         &VAR_10,
                         &VAR_7))
    {
        FUNC_4(VAR_10,
                      VAR_8,
                      0,
                      VAR_1,
                      (LPVOID)VAR_6,
                      FUNC_5(VAR_6));

        FUNC_2(VAR_10);
    }

    FUNC_6(VAR_9, L"Aliases\\Members\\%s", VAR_8);

    if (!FUNC_3(VAR_4,
                         VAR_9,
                         0,
                         ((void*)0),
                         VAR_2,
                         VAR_0,
                         ((void*)0),
                         &VAR_10,
                         &VAR_7))
    {
        FUNC_6(VAR_9, L"%08lX", VAR_5);

        FUNC_4(VAR_10,
                      VAR_9,
                      0,
                      VAR_1,
                      (LPVOID)VAR_6,
                      FUNC_5(VAR_6));

        FUNC_2(VAR_10);
    }

    if (VAR_8 != ((void*)0))
        FUNC_1(VAR_8);

    return VAR_3;
}
