
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int ReferenceCount; TYPE_2__* NotifiedLastCloseProcess; void* NotifyLastClose; } ;
struct TYPE_13__ {int ConsoleLink; int * ConsoleHandle; TYPE_1__* Process; void* ConsoleApp; } ;
struct TYPE_12__ {int Flags; } ;
typedef TYPE_2__* PCONSOLE_PROCESS_DATA ;
typedef TYPE_3__* PCONSOLE ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__**,int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (char*,...) ;
 void* VAR_3 ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_3__*) ;

NTSTATUS
FUNC_8(PCONSOLE_PROCESS_DATA VAR_7)
{
    PCONSOLE VAR_8;
    PCONSOLE_PROCESS_DATA VAR_9;

    FUNC_5("ConSrvRemoveConsole\n");


    VAR_7->ConsoleApp = VAR_3;
    VAR_7->Process->Flags &= ~VAR_2;


    if (!FUNC_4(&VAR_8,
                               VAR_7->ConsoleHandle,
                               VAR_0, VAR_6))
    {

        return VAR_5;
    }

    FUNC_5("ConSrvRemoveConsole - Locking OK\n");


    VAR_9 = FUNC_2(VAR_8);


    FUNC_1(VAR_7);


    VAR_7->ConsoleHandle = ((void*)0);


    FUNC_6(&VAR_7->ConsoleLink);


    if (VAR_8->NotifyLastClose)
    {

        if (VAR_7 == VAR_8->NotifiedLastCloseProcess)
        {

            VAR_8->NotifyLastClose = VAR_3;
            VAR_8->NotifiedLastCloseProcess = ((void*)0);
        }





        else if (VAR_7 == VAR_9)
        {




            VAR_8->NotifyLastClose = VAR_3;
            FUNC_0(VAR_1, VAR_8->NotifiedLastCloseProcess);


            VAR_8->NotifiedLastCloseProcess = ((void*)0);
        }
    }


    FUNC_7(VAR_8);


    FUNC_5("ConSrvRemoveConsole - Decrement Console->ReferenceCount = %lu\n", VAR_8->ReferenceCount);
    FUNC_3(VAR_8, VAR_6);

    return VAR_4;
}
