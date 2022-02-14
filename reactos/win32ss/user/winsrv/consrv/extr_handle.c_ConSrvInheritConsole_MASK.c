
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int Flags; int * ProcessHandle; } ;
struct TYPE_13__ {int ActiveEvent; } ;
struct TYPE_16__ {int Lock; int ReferenceCount; int HasFocus; int ProcessList; TYPE_1__ InputBuffer; int * InitEvents; } ;
struct TYPE_15__ {TYPE_7__* Process; int ConsoleLink; int * ConsoleHandle; int ConsoleApp; } ;
struct TYPE_14__ {int * ConsoleHandle; int * InitEvents; int InputWaitHandle; } ;
typedef int PHANDLE ;
typedef TYPE_2__* PCONSOLE_START_INFO ;
typedef TYPE_3__* PCONSOLE_PROCESS_DATA ;
typedef TYPE_4__* PCONSOLE ;
typedef int NTSTATUS ;
typedef int * HANDLE ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_4__**,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ,int *,int *,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *) ;

NTSTATUS
FUNC_12(PCONSOLE_PROCESS_DATA VAR_9,
                     HANDLE VAR_10,
                     BOOLEAN VAR_11,
                     PHANDLE VAR_12,
                     PHANDLE VAR_13,
                     PHANDLE VAR_14,
                     PCONSOLE_START_INFO VAR_15)
{
    NTSTATUS VAR_16 = VAR_6;
    PCONSOLE VAR_17;


    if (!FUNC_3(&VAR_17,
                               VAR_10,
                               VAR_0, VAR_8))
    {

        return VAR_7;
    }


    VAR_9->ConsoleHandle = VAR_10;

    if (VAR_11)
    {
        FUNC_0(VAR_9);


        VAR_16 = FUNC_1(VAR_9,
                                        VAR_17,
                                        VAR_12,
                                        VAR_13,
                                        VAR_14);
        if (!FUNC_7(VAR_16))
        {
            FUNC_4("Failed to initialize the handles table\n");
            VAR_9->ConsoleHandle = ((void*)0);
            goto Quit;
        }
    }


    VAR_16 = FUNC_9(FUNC_8(),
                               VAR_17->InitEvents[VAR_5],
                               VAR_9->Process->ProcessHandle,
                               &VAR_15->InitEvents[VAR_5],
                               VAR_3, 0, 0);
    if (!FUNC_7(VAR_16))
    {
        FUNC_4("NtDuplicateObject(InitEvents[INIT_SUCCESS]) failed: %lu\n", VAR_16);
        FUNC_0(VAR_9);
        VAR_9->ConsoleHandle = ((void*)0);
        goto Quit;
    }

    VAR_16 = FUNC_9(FUNC_8(),
                               VAR_17->InitEvents[VAR_4],
                               VAR_9->Process->ProcessHandle,
                               &VAR_15->InitEvents[VAR_4],
                               VAR_3, 0, 0);
    if (!FUNC_7(VAR_16))
    {
        FUNC_4("NtDuplicateObject(InitEvents[INIT_FAILURE]) failed: %lu\n", VAR_16);
        FUNC_9(VAR_9->Process->ProcessHandle,
                          VAR_15->InitEvents[VAR_5],
                          ((void*)0), ((void*)0), 0, 0, VAR_2);
        FUNC_0(VAR_9);
        VAR_9->ConsoleHandle = ((void*)0);
        goto Quit;
    }


    VAR_16 = FUNC_9(FUNC_8(),
                               VAR_17->InputBuffer.ActiveEvent,
                               VAR_9->Process->ProcessHandle,
                               &VAR_15->InputWaitHandle,
                               VAR_3, 0, 0);
    if (!FUNC_7(VAR_16))
    {
        FUNC_4("NtDuplicateObject(InputWaitHandle) failed: %lu\n", VAR_16);
        FUNC_9(VAR_9->Process->ProcessHandle,
                          VAR_15->InitEvents[VAR_4],
                          ((void*)0), ((void*)0), 0, 0, VAR_2);
        FUNC_9(VAR_9->Process->ProcessHandle,
                          VAR_15->InitEvents[VAR_5],
                          ((void*)0), ((void*)0), 0, 0, VAR_2);
        FUNC_0(VAR_9);
        VAR_9->ConsoleHandle = ((void*)0);
        goto Quit;
    }


    VAR_9->ConsoleApp = VAR_8;
    VAR_9->Process->Flags |= VAR_1;


    VAR_15->ConsoleHandle = VAR_9->ConsoleHandle;





    FUNC_5(&VAR_17->ProcessList, &VAR_9->ConsoleLink);
    FUNC_2(VAR_9->Process, VAR_17->HasFocus);


    FUNC_11(&VAR_17->ReferenceCount);


    FUNC_10(VAR_17);

    VAR_16 = VAR_6;

Quit:

    FUNC_6(&VAR_17->Lock);
    return VAR_16;
}
