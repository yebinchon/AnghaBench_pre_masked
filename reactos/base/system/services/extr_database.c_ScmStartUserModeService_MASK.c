
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int dwImageRunCount; int dwProcessId; int hProcess; int pszImagePath; int * hToken; } ;
struct TYPE_15__ {int dwServiceType; } ;
struct TYPE_17__ {TYPE_9__* lpImage; int lpServiceName; TYPE_1__ Status; } ;
struct TYPE_16__ {int cb; char* lpDesktop; int hThread; int dwProcessId; int hProcess; int dwThreadId; int dwFlags; } ;
typedef int StartupInfo ;
typedef TYPE_2__ STARTUPINFOW ;
typedef int ProcessInformation ;
typedef TYPE_3__* PSERVICE ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int LPWSTR ;
typedef int * LPVOID ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *,int *,scalar_t__,int,int *,int *,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *,scalar_t__,int,int *,int *,TYPE_2__*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (char*,TYPE_3__*,...) ;
 int FUNC_5 (char*,scalar_t__,...) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (TYPE_9__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,scalar_t__,int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (TYPE_2__*,int) ;

__attribute__((used)) static DWORD
FUNC_15(PSERVICE VAR_9,
                        DWORD VAR_10,
                        LPWSTR* VAR_11)
{
    PROCESS_INFORMATION VAR_12;
    STARTUPINFOW VAR_13;
    LPVOID VAR_14;
    BOOL VAR_15;
    DWORD VAR_16 = VAR_3;

    FUNC_4("ScmStartUserModeService(%p)\n", VAR_9);


    if (VAR_9->lpImage->dwImageRunCount > 1)
    {

        return FUNC_12(VAR_9, VAR_10, VAR_11);
    }


    FUNC_14(&VAR_13, sizeof(VAR_13));
    VAR_13.cb = sizeof(VAR_13);
    FUNC_14(&VAR_12, sizeof(VAR_12));

    if (VAR_9->lpImage->hToken)
    {


        if (!FUNC_1(&VAR_14, VAR_9->lpImage->hToken, VAR_4))
        {

            FUNC_5("CreateEnvironmentBlock() failed with error %d; service '%S' will run with the current environment.\n",
                    FUNC_7(), VAR_9->lpServiceName);
            VAR_14 = ((void*)0);
        }


        VAR_15 = FUNC_8(VAR_9->lpImage->hToken);
        if (VAR_15)
        {

            VAR_15 = FUNC_2(VAR_9->lpImage->hToken,
                                          ((void*)0),
                                          VAR_9->lpImage->pszImagePath,
                                          ((void*)0),
                                          ((void*)0),
                                          VAR_4,
                                          VAR_1 | VAR_2 | VAR_0,
                                          VAR_14,
                                          ((void*)0),
                                          &VAR_13,
                                          &VAR_12);
            if (!VAR_15)
                VAR_16 = FUNC_7();


            FUNC_10();
        }
        else
        {
            VAR_16 = FUNC_7();
            FUNC_5("ImpersonateLoggedOnUser() failed with error %d\n", VAR_16);
        }
    }
    else
    {


        if (!FUNC_1(&VAR_14, ((void*)0), VAR_8))
        {

            FUNC_5("CreateEnvironmentBlock() failed with error %d; service '%S' will run with the current environment.\n",
                    FUNC_7(), VAR_9->lpServiceName);
            VAR_14 = ((void*)0);
        }


        if ((VAR_5 == 0) &&
            (VAR_9->Status.dwServiceType & VAR_6))
        {
            VAR_13.dwFlags |= VAR_7;
            VAR_13.lpDesktop = L"WinSta0\\Default";
        }

        if (!FUNC_11(VAR_9->lpImage))
        {
            VAR_15 = FUNC_3(((void*)0),
                                    VAR_9->lpImage->pszImagePath,
                                    ((void*)0),
                                    ((void*)0),
                                    VAR_4,
                                    VAR_1 | VAR_2 | VAR_0,
                                    VAR_14,
                                    ((void*)0),
                                    &VAR_13,
                                    &VAR_12);
            if (!VAR_15)
                VAR_16 = FUNC_7();
        }
        else
        {
            VAR_15 = VAR_8;
            VAR_16 = VAR_3;
        }
    }

    if (VAR_14)
        FUNC_6(VAR_14);

    if (!VAR_15)
    {
        FUNC_5("Starting '%S' failed with error %d\n",
                VAR_9->lpServiceName, VAR_16);
        return VAR_16;
    }

    FUNC_4("Process Id: %lu  Handle %p\n",
           VAR_12.dwProcessId,
           VAR_12.hProcess);
    FUNC_4("Thread Id: %lu  Handle %p\n",
           VAR_12.dwThreadId,
           VAR_12.hThread);


    VAR_9->lpImage->hProcess = VAR_12.hProcess;
    VAR_9->lpImage->dwProcessId = VAR_12.dwProcessId;


    FUNC_9(VAR_12.hThread);
    FUNC_0(VAR_12.hThread);


    VAR_16 = FUNC_13(VAR_9);
    if (VAR_16 != VAR_3)
    {
        FUNC_5("Connecting control pipe failed! (Error %lu)\n", VAR_16);
        VAR_9->lpImage->dwProcessId = 0;
        return VAR_16;
    }


    return FUNC_12(VAR_9, VAR_10, VAR_11);
}
