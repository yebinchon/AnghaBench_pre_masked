
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int GrantedAccess; } ;
typedef int PWSTR ;
typedef TYPE_1__* PLOCALMON_XCV ;
typedef scalar_t__* PDWORD ;
typedef scalar_t__ PBYTE ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int **) ;
 scalar_t__ FUNC_5 (int *,char*,int ,int ,scalar_t__,scalar_t__) ;
 int * FUNC_6 () ;
 int VAR_6 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static DWORD
FUNC_8(PLOCALMON_XCV VAR_7, PBYTE VAR_8, PDWORD VAR_9)
{
    DWORD VAR_10;
    DWORD VAR_11;
    HKEY VAR_12 = ((void*)0);
    HKEY VAR_13 = ((void*)0);


    if (!VAR_7 || !VAR_8 || !VAR_9)
    {
        VAR_11 = VAR_1;
        goto Cleanup;
    }

    *VAR_9 = 0;


    if (!(VAR_7->GrantedAccess & VAR_6))
    {
        VAR_11 = VAR_0;
        goto Cleanup;
    }


    VAR_13 = FUNC_6();
    if (!VAR_13)
    {
        VAR_11 = FUNC_1();
        FUNC_0("RevertToPrinterSelf failed with error %lu!\n", VAR_11);
        goto Cleanup;
    }


    VAR_11 = (DWORD)FUNC_4(VAR_3, L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, VAR_4, &VAR_12);
    if (VAR_11 != VAR_2)
    {
        FUNC_0("RegOpenKeyExW failed with status %lu!\n", VAR_11);
        goto Cleanup;
    }


    VAR_10 = (FUNC_7((PWSTR)VAR_8) + 1) * sizeof(WCHAR);


    VAR_11 = (DWORD)FUNC_5(VAR_12, L"TransmissionRetryTimeout", 0, VAR_5, VAR_8, VAR_10);
    if (VAR_11 != VAR_2)
    {
        FUNC_0("RegSetValueExW failed with status %lu!\n", VAR_11);
        goto Cleanup;
    }

Cleanup:
    if (VAR_12)
        FUNC_3(VAR_12);

    if (VAR_13)
        FUNC_2(VAR_13);

    return VAR_11;
}
