
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {int Flags; int * ProcessHandle; } ;
struct TYPE_21__ {char* ConsoleTitle; char* AppName; char* Desktop; TYPE_2__* ConsoleStartInfo; } ;
struct TYPE_20__ {TYPE_7__* Process; int ConsoleLink; int * ConsoleHandle; int ConsoleApp; } ;
struct TYPE_17__ {int ActiveEvent; } ;
struct TYPE_19__ {int ReferenceCount; int HasFocus; int ProcessList; TYPE_1__ InputBuffer; int * InitEvents; } ;
struct TYPE_18__ {int * ConsoleHandle; int * InitEvents; int InputWaitHandle; } ;
typedef int PHANDLE ;
typedef TYPE_3__* PCONSRV_CONSOLE ;
typedef TYPE_4__* PCONSOLE_PROCESS_DATA ;
typedef TYPE_5__* PCONSOLE_INIT_INFO ;
typedef int NTSTATUS ;
typedef int * HANDLE ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int **,TYPE_3__**,TYPE_5__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int ,int *,int *,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *) ;

NTSTATUS
FUNC_13(PCONSOLE_PROCESS_DATA VAR_7,
                      PHANDLE VAR_8,
                      PHANDLE VAR_9,
                      PHANDLE VAR_10,
                      PCONSOLE_INIT_INFO VAR_11)
{
    NTSTATUS VAR_12 = VAR_5;
    HANDLE VAR_13;
    PCONSRV_CONSOLE VAR_14;
    FUNC_1(VAR_7);


    FUNC_5("Initialization of console '%S' for process '%S' on desktop '%S'\n",
           VAR_11->ConsoleTitle ? VAR_11->ConsoleTitle : L"n/a",
           VAR_11->AppName ? VAR_11->AppName : L"n/a",
           VAR_11->Desktop ? VAR_11->Desktop : L"n/a");
    VAR_12 = FUNC_2(&VAR_13,
                               &VAR_14,
                               VAR_11,
                               VAR_7->Process);
    if (!FUNC_8(VAR_12))
    {
        FUNC_6("Console initialization failed\n");
        return VAR_12;
    }


    VAR_7->ConsoleHandle = VAR_13;


    VAR_12 = FUNC_3(VAR_7,
                                    VAR_14,
                                    VAR_8,
                                    VAR_9,
                                    VAR_10);
    if (!FUNC_8(VAR_12))
    {
        FUNC_6("Failed to initialize the handles table\n");
        FUNC_0(VAR_14);
        VAR_7->ConsoleHandle = ((void*)0);
        return VAR_12;
    }


    VAR_12 = FUNC_10(FUNC_9(),
                               VAR_14->InitEvents[VAR_4],
                               VAR_7->Process->ProcessHandle,
                               &VAR_11->ConsoleStartInfo->InitEvents[VAR_4],
                               VAR_2, 0, 0);
    if (!FUNC_8(VAR_12))
    {
        FUNC_6("NtDuplicateObject(InitEvents[INIT_SUCCESS]) failed: %lu\n", VAR_12);
        FUNC_1(VAR_7);
        FUNC_0(VAR_14);
        VAR_7->ConsoleHandle = ((void*)0);
        return VAR_12;
    }

    VAR_12 = FUNC_10(FUNC_9(),
                               VAR_14->InitEvents[VAR_3],
                               VAR_7->Process->ProcessHandle,
                               &VAR_11->ConsoleStartInfo->InitEvents[VAR_3],
                               VAR_2, 0, 0);
    if (!FUNC_8(VAR_12))
    {
        FUNC_6("NtDuplicateObject(InitEvents[INIT_FAILURE]) failed: %lu\n", VAR_12);
        FUNC_10(VAR_7->Process->ProcessHandle,
                          VAR_11->ConsoleStartInfo->InitEvents[VAR_4],
                          ((void*)0), ((void*)0), 0, 0, VAR_1);
        FUNC_1(VAR_7);
        FUNC_0(VAR_14);
        VAR_7->ConsoleHandle = ((void*)0);
        return VAR_12;
    }


    VAR_12 = FUNC_10(FUNC_9(),
                               VAR_14->InputBuffer.ActiveEvent,
                               VAR_7->Process->ProcessHandle,
                               &VAR_11->ConsoleStartInfo->InputWaitHandle,
                               VAR_2, 0, 0);
    if (!FUNC_8(VAR_12))
    {
        FUNC_6("NtDuplicateObject(InputWaitHandle) failed: %lu\n", VAR_12);
        FUNC_10(VAR_7->Process->ProcessHandle,
                          VAR_11->ConsoleStartInfo->InitEvents[VAR_3],
                          ((void*)0), ((void*)0), 0, 0, VAR_1);
        FUNC_10(VAR_7->Process->ProcessHandle,
                          VAR_11->ConsoleStartInfo->InitEvents[VAR_4],
                          ((void*)0), ((void*)0), 0, 0, VAR_1);
        FUNC_1(VAR_7);
        FUNC_0(VAR_14);
        VAR_7->ConsoleHandle = ((void*)0);
        return VAR_12;
    }


    VAR_7->ConsoleApp = VAR_6;
    VAR_7->Process->Flags |= VAR_0;


    VAR_11->ConsoleStartInfo->ConsoleHandle = VAR_7->ConsoleHandle;





    FUNC_7(&VAR_14->ProcessList, &VAR_7->ConsoleLink);
    FUNC_4(VAR_7->Process, VAR_14->HasFocus);


    FUNC_12(&VAR_14->ReferenceCount);


    FUNC_11(VAR_14);

    return VAR_5;
}
