
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwSize; } ;
struct TYPE_5__ {int GrantedAccess; int * pwszObject; } ;
typedef int * PWSTR ;
typedef TYPE_1__* PLOCALMON_XCV ;
typedef scalar_t__* PDWORD ;
typedef scalar_t__ PBYTE ;
typedef TYPE_2__* LPCOMMCONFIG ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static DWORD
FUNC_7(PLOCALMON_XCV VAR_4, PBYTE VAR_5, PDWORD VAR_6)
{
    DWORD VAR_7;
    HANDLE VAR_8 = ((void*)0);
    LPCOMMCONFIG VAR_9;
    PWSTR VAR_10 = ((void*)0);



    if (!VAR_4 || !VAR_4->pwszObject || !VAR_4->pwszObject[0] || !VAR_4->pwszObject[1] || !VAR_5 || !VAR_6)
    {
        VAR_7 = VAR_1;
        goto Cleanup;
    }

    *VAR_6 = 0;


    if (!(VAR_4->GrantedAccess & VAR_3))
    {
        VAR_7 = VAR_0;
        goto Cleanup;
    }


    VAR_7 = FUNC_3(VAR_4->pwszObject, &VAR_10);
    if (VAR_7 != VAR_2)
        goto Cleanup;


    VAR_8 = FUNC_5();
    if (!VAR_8)
    {
        VAR_7 = FUNC_2();
        FUNC_1("RevertToPrinterSelf failed with error %lu!\n", VAR_7);
        goto Cleanup;
    }


    VAR_9 = (LPCOMMCONFIG)VAR_5;
    if (!FUNC_6(VAR_10, VAR_9, VAR_9->dwSize))
    {
        VAR_7 = FUNC_2();
        FUNC_1("SetDefaultCommConfigW failed with error %lu!\n", VAR_7);
        goto Cleanup;
    }

    VAR_7 = VAR_2;

Cleanup:
    if (VAR_8)
        FUNC_4(VAR_8);

    if (VAR_10)
        FUNC_0(VAR_10);

    return VAR_7;
}
