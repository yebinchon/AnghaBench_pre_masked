
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {scalar_t__ dwProcessId; int hControlPipe; } ;
struct TYPE_9__ {void* hEvent; int member_0; } ;
struct TYPE_8__ {scalar_t__ lpDisplayName; TYPE_4__* lpImage; } ;
typedef TYPE_1__* PSERVICE ;
typedef TYPE_2__ OVERLAPPED ;
typedef int LPVOID ;
typedef int * LPCWSTR ;
typedef void* HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,scalar_t__*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 (int ,int ,int,scalar_t__*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int ,int,int **) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (scalar_t__,int *,int) ;

__attribute__((used)) static DWORD
FUNC_11(PSERVICE VAR_14)
{
    DWORD VAR_15 = 0;
    DWORD VAR_16 = 0;
    DWORD VAR_17 = VAR_3;
    BOOL VAR_18;
    OVERLAPPED VAR_19 = {0};






    FUNC_2("ScmWaitForServiceConnect()\n");

    VAR_19.hEvent = (HANDLE)((void*)0);

    VAR_18 = FUNC_1(VAR_14->lpImage->hControlPipe,
                               &VAR_19);
    if (VAR_18 == VAR_9)
    {
        FUNC_2("ConnectNamedPipe() returned FALSE\n");

        VAR_17 = FUNC_4();
        if (VAR_17 == VAR_0)
        {
            FUNC_2("dwError: ERROR_IO_PENDING\n");

            VAR_17 = FUNC_9(VAR_14->lpImage->hControlPipe,
                                          VAR_10);
            FUNC_2("WaitForSingleObject() returned %lu\n", VAR_17);

            if (VAR_17 == VAR_13)
            {
                FUNC_2("WaitForSingleObject() returned WAIT_TIMEOUT\n");

                VAR_18 = FUNC_0(VAR_14->lpImage->hControlPipe);
                if (VAR_18 == VAR_9)
                {
                    FUNC_3("CancelIo() failed (Error: %lu)\n", FUNC_4());
                }
                FUNC_3("Log EVENT_CONNECTION_TIMEOUT by %S\n", VAR_14->lpDisplayName);

                return VAR_2;
            }
            else if (VAR_17 == VAR_12)
            {
                VAR_18 = FUNC_5(VAR_14->lpImage->hControlPipe,
                                              &VAR_19,
                                              &VAR_15,
                                              VAR_11);
                if (VAR_18 == VAR_9)
                {
                    VAR_17 = FUNC_4();
                    FUNC_3("GetOverlappedResult failed (Error %lu)\n", VAR_17);

                    return VAR_17;
                }
            }
        }
        else if (VAR_17 != VAR_1)
        {
            FUNC_3("ConnectNamedPipe failed (Error %lu)\n", VAR_17);
            return VAR_17;
        }
    }

    FUNC_2("Control pipe connected!\n");

    VAR_19.hEvent = (HANDLE) ((void*)0);


    VAR_18 = FUNC_6(VAR_14->lpImage->hControlPipe,
                       (LPVOID)&VAR_16,
                       sizeof(DWORD),
                       &VAR_15,
                       &VAR_19);
    if (VAR_18 == VAR_9)
    {
        FUNC_2("ReadFile() returned FALSE\n");

        VAR_17 = FUNC_4();
        if (VAR_17 == VAR_0)
        {
            FUNC_2("dwError: ERROR_IO_PENDING\n");

            VAR_17 = FUNC_9(VAR_14->lpImage->hControlPipe,
                                          VAR_10);
            if (VAR_17 == VAR_13)
            {
                FUNC_2("WaitForSingleObject() returned WAIT_TIMEOUT\n");

                VAR_18 = FUNC_0(VAR_14->lpImage->hControlPipe);
                if (VAR_18 == VAR_9)
                {
                    FUNC_3("CancelIo() failed (Error: %lu)\n", FUNC_4());
                }
                FUNC_3("Log EVENT_READFILE_TIMEOUT by %S\n", VAR_14->lpDisplayName);

                return VAR_2;
            }
            else if (VAR_17 == VAR_12)
            {
                FUNC_2("WaitForSingleObject() returned WAIT_OBJECT_0\n");

                FUNC_2("Process Id: %lu\n", VAR_16);

                VAR_18 = FUNC_5(VAR_14->lpImage->hControlPipe,
                                              &VAR_19,
                                              &VAR_15,
                                              VAR_11);
                if (VAR_18 == VAR_9)
                {
                    VAR_17 = FUNC_4();
                    FUNC_3("GetOverlappedResult() failed (Error %lu)\n", VAR_17);

                    return VAR_17;
                }
            }
            else
            {
                FUNC_3("WaitForSingleObject() returned %lu\n", VAR_17);
            }
        }
        else
        {
            FUNC_3("ReadFile() failed (Error %lu)\n", VAR_17);
            return VAR_17;
        }
    }

    if ((FUNC_7(VAR_14->lpImage) == VAR_9)&&
        (VAR_16 != VAR_14->lpImage->dwProcessId))
    {
        FUNC_3("Log EVENT_SERVICE_DIFFERENT_PID_CONNECTED by %S\n", VAR_14->lpDisplayName);
    }

    FUNC_2("ScmWaitForServiceConnect() done\n");

    return VAR_3;
}
