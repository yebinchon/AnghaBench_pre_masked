
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VOID ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int *,int *,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,char*) ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_7)
{
    HKEY VAR_8;
    WCHAR VAR_9[8];
    DWORD VAR_10;

    if (FUNC_1(VAR_4,
                      L"SYSTEM\\CurrentControlSet\\Services\\W32Time\\Parameters",
                      0,
                      VAR_6,
                      &VAR_8) == VAR_3)
    {
        VAR_10 = 8 * sizeof(WCHAR);
        if (FUNC_2(VAR_8,
                             L"Type",
                             ((void*)0),
                             ((void*)0),
                             (LPBYTE)VAR_9,
                             &VAR_10) == VAR_3)
        {
            if (FUNC_4(VAR_9, L"NTP") == 0)
                FUNC_3(VAR_7, VAR_5, VAR_0, VAR_1, 0);
            else
                FUNC_3(VAR_7, VAR_5, VAR_0, VAR_2, 0);
        }

        FUNC_0(VAR_8);
    }
}
