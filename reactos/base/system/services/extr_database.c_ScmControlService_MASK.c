
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_13__ {scalar_t__ hEvent; int member_0; } ;
struct TYPE_12__ {int dwServiceNameOffset; scalar_t__ dwArgumentsOffset; scalar_t__ dwArgumentsCount; int hServiceStatus; scalar_t__ dwControl; scalar_t__ dwSize; } ;
struct TYPE_11__ {scalar_t__ dwError; } ;
typedef int SERVICE_STATUS_HANDLE ;
typedef TYPE_1__ SCM_REPLY_PACKET ;
typedef int SCM_CONTROL_PACKET ;
typedef scalar_t__ PWSTR ;
typedef TYPE_2__* PSCM_CONTROL_PACKET ;
typedef scalar_t__ PBYTE ;
typedef TYPE_3__ OVERLAPPED ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_3__*,scalar_t__*,int ) ;
 int FUNC_6 () ;
 int VAR_6 ;
 TYPE_2__* FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (scalar_t__,TYPE_1__*,int,scalar_t__*,TYPE_3__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,TYPE_2__*,scalar_t__,scalar_t__*,TYPE_3__*) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;

DWORD
FUNC_15(HANDLE VAR_11,
                  PWSTR VAR_12,
                  SERVICE_STATUS_HANDLE VAR_13,
                  DWORD VAR_14)
{
    PSCM_CONTROL_PACKET VAR_15;
    SCM_REPLY_PACKET VAR_16;

    DWORD VAR_17 = 0;
    DWORD VAR_18 = 0;
    DWORD VAR_19;
    PWSTR VAR_20;
    DWORD VAR_21 = VAR_4;
    BOOL VAR_22;
    OVERLAPPED VAR_23 = {0};

    FUNC_1("ScmControlService() called\n");


    FUNC_3(&VAR_0);


    VAR_19 = sizeof(SCM_CONTROL_PACKET);
    VAR_19 += (DWORD)((FUNC_14(VAR_12) + 1) * sizeof(WCHAR));

    VAR_15 = FUNC_7(FUNC_6(),
                              VAR_6,
                              VAR_19);
    if (VAR_15 == ((void*)0))
    {
        FUNC_9(&VAR_0);
        return VAR_2;
    }

    VAR_15->dwSize = VAR_19;
    VAR_15->dwControl = VAR_14;
    VAR_15->hServiceStatus = VAR_13;

    VAR_15->dwServiceNameOffset = sizeof(SCM_CONTROL_PACKET);

    VAR_20 = (PWSTR)((PBYTE)VAR_15 + VAR_15->dwServiceNameOffset);
    FUNC_13(VAR_20, VAR_12);

    VAR_15->dwArgumentsCount = 0;
    VAR_15->dwArgumentsOffset = 0;

    VAR_22 = FUNC_12(VAR_11,
                        VAR_15,
                        VAR_19,
                        &VAR_17,
                        &VAR_23);
    if (VAR_22 == VAR_5)
    {
        FUNC_1("WriteFile() returned FALSE\n");

        VAR_21 = FUNC_4();
        if (VAR_21 == VAR_1)
        {
            FUNC_1("dwError: ERROR_IO_PENDING\n");

            VAR_21 = FUNC_11(VAR_11,
                                          VAR_7);
            FUNC_1("WaitForSingleObject() returned %lu\n", VAR_21);

            if (VAR_21 == VAR_10)
            {
                VAR_22 = FUNC_0(VAR_11);
                if (VAR_22 == VAR_5)
                {
                    FUNC_2("CancelIo() failed (Error: %lu)\n", FUNC_4());
                }

                VAR_21 = VAR_3;
                goto Done;
            }
            else if (VAR_21 == VAR_9)
            {
                VAR_22 = FUNC_5(VAR_11,
                                              &VAR_23,
                                              &VAR_17,
                                              VAR_8);
                if (VAR_22 == VAR_5)
                {
                    VAR_21 = FUNC_4();
                    FUNC_2("GetOverlappedResult() failed (Error %lu)\n", VAR_21);

                    goto Done;
                }
            }
        }
        else
        {
            FUNC_2("WriteFile() failed (Error %lu)\n", VAR_21);
            goto Done;
        }
    }


    VAR_23.hEvent = (HANDLE) ((void*)0);

    VAR_22 = FUNC_10(VAR_11,
                       &VAR_16,
                       sizeof(SCM_REPLY_PACKET),
                       &VAR_18,
                       &VAR_23);
    if (VAR_22 == VAR_5)
    {
        FUNC_1("ReadFile() returned FALSE\n");

        VAR_21 = FUNC_4();
        if (VAR_21 == VAR_1)
        {
            FUNC_1("dwError: ERROR_IO_PENDING\n");

            VAR_21 = FUNC_11(VAR_11,
                                          VAR_7);
            FUNC_1("WaitForSingleObject() returned %lu\n", VAR_21);

            if (VAR_21 == VAR_10)
            {
                VAR_22 = FUNC_0(VAR_11);
                if (VAR_22 == VAR_5)
                {
                    FUNC_2("CancelIo() failed (Error: %lu)\n", FUNC_4());
                }

                VAR_21 = VAR_3;
                goto Done;
            }
            else if (VAR_21 == VAR_9)
            {
                VAR_22 = FUNC_5(VAR_11,
                                              &VAR_23,
                                              &VAR_18,
                                              VAR_8);
                if (VAR_22 == VAR_5)
                {
                    VAR_21 = FUNC_4();
                    FUNC_2("GetOverlappedResult() failed (Error %lu)\n", VAR_21);

                    goto Done;
                }
            }
        }
        else
        {
            FUNC_2("ReadFile() failed (Error %lu)\n", VAR_21);
            goto Done;
        }
    }

Done:

    FUNC_8(FUNC_6(),
             0,
             VAR_15);

    if (VAR_18 == sizeof(SCM_REPLY_PACKET))
    {
        VAR_21 = VAR_16.dwError;
    }

    FUNC_9(&VAR_0);

    FUNC_1("ScmControlService() done\n");

    return VAR_21;
}
