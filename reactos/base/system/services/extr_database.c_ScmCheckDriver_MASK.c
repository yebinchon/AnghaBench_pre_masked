
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_12__ {int Buffer; } ;
struct TYPE_14__ {TYPE_3__ Name; } ;
struct TYPE_10__ {scalar_t__ dwServiceType; scalar_t__ dwWaitHint; scalar_t__ dwCheckPoint; scalar_t__ dwServiceSpecificExitCode; int dwWin32ExitCode; int dwControlsAccepted; int dwCurrentState; } ;
struct TYPE_13__ {TYPE_2__* lpGroup; TYPE_1__ Status; int lpServiceName; } ;
struct TYPE_11__ {scalar_t__ ServicesRunning; } ;
typedef TYPE_4__* PSERVICE ;
typedef TYPE_5__* POBJECT_DIRECTORY_INFORMATION ;
typedef int OBJECT_DIRECTORY_INFORMATION ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int HANDLE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 TYPE_5__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;
 int FUNC_5 (int *,int *,int ,int *,int *) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int,int *) ;
 scalar_t__ FUNC_9 (int ,TYPE_5__*,int,scalar_t__,int ,int*,int*) ;
 int FUNC_10 (int *,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static NTSTATUS
FUNC_12(PSERVICE VAR_13)
{
    OBJECT_ATTRIBUTES VAR_14;
    UNICODE_STRING VAR_15;
    HANDLE VAR_16;
    NTSTATUS VAR_17;
    POBJECT_DIRECTORY_INFORMATION VAR_18;
    ULONG VAR_19;
    ULONG VAR_20;
    ULONG VAR_21;

    FUNC_1("ScmCheckDriver(%S) called\n", VAR_13->lpServiceName);

    if (VAR_13->Status.dwServiceType == VAR_8)
    {
        FUNC_10(&VAR_15, L"\\Driver");
    }
    else
    {
        FUNC_0(VAR_13->Status.dwServiceType == VAR_7);
        FUNC_10(&VAR_15, L"\\FileSystem");
    }

    FUNC_5(&VAR_14,
                               &VAR_15,
                               0,
                               ((void*)0),
                               ((void*)0));

    VAR_17 = FUNC_8(&VAR_16,
                                   VAR_0 | VAR_1,
                                   &VAR_14);
    if (!FUNC_6(VAR_17))
    {
        return VAR_17;
    }

    VAR_19 = sizeof(OBJECT_DIRECTORY_INFORMATION) +
                       2 * VAR_5 * sizeof(WCHAR);
    VAR_18 = FUNC_3(FUNC_2(),
                        VAR_4,
                        VAR_19);

    VAR_21 = 0;
    while (VAR_12)
    {
        VAR_17 = FUNC_9(VAR_16,
                                        VAR_18,
                                        VAR_19,
                                        VAR_12,
                                        VAR_3,
                                        &VAR_21,
                                        &VAR_20);
        if (VAR_17 == VAR_10)
        {

            FUNC_1("Service '%S' failed\n", VAR_13->lpServiceName);
            break;
        }

        if (!FUNC_6(VAR_17))
            break;

        FUNC_1("Comparing: '%S'  '%wZ'\n", VAR_13->lpServiceName, &VAR_18->Name);

        if (FUNC_11(VAR_13->lpServiceName, VAR_18->Name.Buffer) == 0)
        {
            FUNC_1("Found: '%S'  '%wZ'\n",
                   VAR_13->lpServiceName, &VAR_18->Name);


            VAR_13->Status.dwCurrentState = VAR_9;
            VAR_13->Status.dwControlsAccepted = VAR_6;
            VAR_13->Status.dwWin32ExitCode = VAR_2;
            VAR_13->Status.dwServiceSpecificExitCode = 0;
            VAR_13->Status.dwCheckPoint = 0;
            VAR_13->Status.dwWaitHint = 0;


            if (VAR_13->lpGroup != ((void*)0))
            {
                VAR_13->lpGroup->ServicesRunning = VAR_12;
            }

            break;
        }
    }

    FUNC_4(FUNC_2(),
             0,
             VAR_18);
    FUNC_7(VAR_16);

    return VAR_11;
}
