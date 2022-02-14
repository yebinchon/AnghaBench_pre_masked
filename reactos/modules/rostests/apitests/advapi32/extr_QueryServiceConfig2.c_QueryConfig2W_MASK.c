
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int keyName ;
typedef int WCHAR ;
struct TYPE_14__ {int Delay; int Type; } ;
struct TYPE_13__ {int lpDescription; } ;
struct TYPE_12__ {scalar_t__ cActions; int lpCommand; int lpRebootMsg; TYPE_4__* lpsaActions; int dwResetPeriod; } ;
typedef int SC_HANDLE ;
typedef TYPE_1__* LPWSTR ;
typedef TYPE_1__* LPSERVICE_FAILURE_ACTIONSW ;
typedef TYPE_3__* LPSERVICE_DESCRIPTIONW ;
typedef TYPE_4__* LPSC_ACTION ;
typedef int LPCWSTR ;
typedef TYPE_1__* LPBYTE ;
typedef scalar_t__ LONG ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (int ,scalar_t__,TYPE_1__*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int ,int **) ;
 scalar_t__ FUNC_7 (int *,char*,int *,scalar_t__*,TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int *,char*,TYPE_1__**) ;


 int FUNC_9 (int) ;
 int FUNC_10 (int *,int,char*,int ) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (char*,scalar_t__,...) ;
 int FUNC_13 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(SC_HANDLE VAR_7, LPCWSTR VAR_8, DWORD VAR_9)
{
    int VAR_10 = 0;
    LONG VAR_11 = 0;
    DWORD VAR_12 = 0;
    BOOL VAR_13 = VAR_2;
    DWORD VAR_14 = 0;
    LPBYTE VAR_15 = ((void*)0);

    WCHAR VAR_16[256];
    HKEY VAR_17 = ((void*)0);
    DWORD VAR_18 = 0;


    FUNC_9(0xdeadbeef);
    VAR_13 = FUNC_4(VAR_7,
                                  VAR_9,
                                  ((void*)0),
                                  0,
                                  &VAR_14);
    FUNC_11(VAR_13 == VAR_2 && FUNC_0() == VAR_0, "(bError, GetLastError()) = (%u, 0x%08lx), expected (FALSE, 0x%08lx)\n", VAR_13, FUNC_0(), (DWORD)VAR_0);
    FUNC_11(VAR_14 != 0, "dwRequiredSize is zero, expected non-zero\n");
    if (VAR_14 == 0)
    {
        FUNC_12("Required size is null; cannot proceed with QueryConfig2W --> %lu test\n", VAR_9);
        return 1;
    }


    VAR_15 = FUNC_2(FUNC_1(), VAR_3, VAR_14);
    if (VAR_15 == ((void*)0))
    {
        FUNC_12("Cannot allocate %lu bytes of memory\n", VAR_14);
        return 2;
    }


    FUNC_9(0xdeadbeef);
    VAR_13 = FUNC_4(VAR_7,
                                  VAR_9,
                                  VAR_15,
                                  VAR_14,
                                  &VAR_14);
    FUNC_11(VAR_13, "bError = %u, expected TRUE\n", VAR_13);
    if (VAR_13 == VAR_2)
    {
        FUNC_12("QueryServiceConfig2W returned an error; cannot proceed with QueryConfig2W --> %lu test\n", VAR_9);
        FUNC_3(FUNC_1(), 0, VAR_15);
        return 3;
    }


    FUNC_10(VAR_16, sizeof(VAR_16), L"System\\CurrentControlSet\\Services\\%s", VAR_8);
    FUNC_9(0xdeadbeef);
    VAR_11 = FUNC_6(VAR_4, VAR_16, 0, VAR_5, &VAR_17);
    FUNC_11(VAR_11 == VAR_1, "RegOpenKeyExW failed with 0x%08lx\n", VAR_11);
    if (VAR_11 != VAR_1)
    {
        FUNC_12("No regkey; cannot proceed with QueryConfig2W --> %lu test\n", VAR_9);
        FUNC_3(FUNC_1(), 0, VAR_15);
        return 4;
    }

    switch (VAR_9)
    {
        case 129:
        {
            LPSERVICE_DESCRIPTIONW VAR_19 = (LPSERVICE_DESCRIPTIONW)VAR_15;
            LPWSTR VAR_20 = ((void*)0);


            VAR_12 = FUNC_8(VAR_17, L"Description", &VAR_20);
            FUNC_11(VAR_12 == VAR_1, "RegReadStringW returned 0x%08lx\n", VAR_12);
            FUNC_11(VAR_20 != ((void*)0), "lpszDescription is null, expected non-null\n");


            if (VAR_20)
                VAR_10 = FUNC_13(VAR_19->lpDescription, VAR_20);
            else
                VAR_10 = 0;

            FUNC_11(VAR_10 == 0, "Retrieved descriptions are different !\n");



            FUNC_3(FUNC_1(), 0, VAR_20);

            break;
        }

        case 128:
        {
            LPSERVICE_FAILURE_ACTIONSW VAR_21 = (LPSERVICE_FAILURE_ACTIONSW)VAR_15;
            LPSERVICE_FAILURE_ACTIONSW VAR_22 = ((void*)0);
            LPWSTR VAR_23 = ((void*)0);
            LPWSTR VAR_24 = ((void*)0);
            DWORD VAR_25 = 0;


            VAR_11 = FUNC_7(VAR_17,
                                    L"FailureActions",
                                    ((void*)0),
                                    &VAR_18,
                                    ((void*)0),
                                    &VAR_14);
            FUNC_11(VAR_11 == VAR_1, "RegQueryValueExW returned 0x%08lx\n", VAR_11);
            FUNC_11(VAR_18 == VAR_6, "dwType = %lu, expected REG_BINARY\n", VAR_18);
            FUNC_11(VAR_14 != 0, "dwRequiredSize is zero, expected non-zero\n");

            VAR_22 = FUNC_2(FUNC_1(), VAR_3, VAR_14);
            if (VAR_22 == ((void*)0))
            {
                FUNC_12("Cannot allocate %lu bytes of memory\n", VAR_14);
                break;
            }

            VAR_11 = FUNC_7(VAR_17,
                                    L"FailureActions",
                                    ((void*)0),
                                    ((void*)0),
                                    (LPBYTE)VAR_22,
                                    &VAR_14);
            FUNC_11(VAR_11 == VAR_1, "RegQueryValueExW returned 0x%08lx\n", VAR_11);
            FUNC_11(VAR_14 != 0, "dwRequiredSize is zero, expected non-zero\n");


            FUNC_8(VAR_17, L"FailureCommand", &VAR_24);
            FUNC_8(VAR_17, L"RebootMessage" , &VAR_23 );


            FUNC_11(VAR_21->dwResetPeriod == VAR_22->dwResetPeriod, "lpFailureActions1->dwResetPeriod != lpFailureActions2->dwResetPeriod\n");
            FUNC_11(VAR_21->cActions == VAR_22->cActions, "lpFailureActions1->cActions != lpFailureActions2->cActions\n");


            if (VAR_21->cActions == VAR_22->cActions)
            {
                VAR_22->lpsaActions = (VAR_22->cActions > 0 ? (LPSC_ACTION)(VAR_22 + 1) : ((void*)0));

                if (VAR_21->cActions > 0 &&
                    VAR_21->lpsaActions != ((void*)0))
                {
                    for (VAR_25 = 0; VAR_25 < VAR_21->cActions; ++VAR_25)
                    {
                        FUNC_11(VAR_21->lpsaActions[VAR_25].Type == VAR_22->lpsaActions[VAR_25].Type , "lpFailureActions1->lpsaActions[%lu].Type  != lpFailureActions2->lpsaActions[%lu].Type\n" , VAR_25, VAR_25);
                        FUNC_11(VAR_21->lpsaActions[VAR_25].Delay == VAR_22->lpsaActions[VAR_25].Delay, "lpFailureActions1->lpsaActions[%lu].Delay != lpFailureActions2->lpsaActions[%lu].Delay\n", VAR_25, VAR_25);
                    }
                }
            }




            if (VAR_21->lpRebootMsg && VAR_23)
                VAR_10 = FUNC_13(VAR_21->lpRebootMsg, VAR_23);
            else
                VAR_10 = 0;

            FUNC_11(VAR_10 == 0, "Retrieved reboot messages are different !\n");


            if (VAR_21->lpCommand && VAR_24)
                VAR_10 = FUNC_13(VAR_21->lpCommand, VAR_24);
            else
                VAR_10 = 0;

            FUNC_11(VAR_10 == 0, "Retrieved commands are different !\n");



            if (VAR_23)
                FUNC_3(FUNC_1(), 0, VAR_23);

            if (VAR_24)
                FUNC_3(FUNC_1(), 0, VAR_24);

            FUNC_3(FUNC_1(), 0, VAR_22);

            break;
        }

        default:
            FUNC_12("Unknown dwInfoLevel %lu, cannot proceed with QueryConfig2W --> %lu test\n", VAR_9, VAR_9);
            break;
    }

    FUNC_5(VAR_17);

    FUNC_3(FUNC_1(), 0, VAR_15);

    return 0;
}
