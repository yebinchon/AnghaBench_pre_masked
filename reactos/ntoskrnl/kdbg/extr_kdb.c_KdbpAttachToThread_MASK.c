
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_13__ {int Pcb; } ;
struct TYPE_11__ {int KernelStack; } ;
struct TYPE_12__ {TYPE_1__ Tcb; TYPE_3__* ThreadsProcess; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_2__* PETHREAD ;
typedef TYPE_3__* PEPROCESS ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int * VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (scalar_t__,TYPE_2__**) ;
 int VAR_9 ;

BOOLEAN
FUNC_10(
    PVOID VAR_10)
{
    PETHREAD VAR_11 = ((void*)0);
    PEPROCESS VAR_12;


    if (!FUNC_6(FUNC_9(VAR_10, &VAR_11)))
    {
        FUNC_2("Invalid thread id: 0x%08x\n", (ULONG_PTR)VAR_10);
        return VAR_0;
    }
    VAR_12 = VAR_11->ThreadsProcess;

    if (FUNC_3() && VAR_12 != VAR_2)
    {
        FUNC_2("Cannot attach to thread within another process while executing a DPC.\n");
        FUNC_7(VAR_11);
        return VAR_0;
    }


    if (VAR_3 != VAR_6)
    {
        FUNC_0(VAR_4 == &VAR_7);

    }
    else
    {
        FUNC_0(VAR_4 == &VAR_8);
    }


    if (VAR_11 != VAR_6)
    {





        FUNC_1(VAR_11->Tcb.KernelStack,
                                        &VAR_7);
        VAR_4 = &VAR_7;
    }
    else
    {
        VAR_4 = &VAR_8;
    }
    VAR_3 = VAR_11;


    FUNC_0(VAR_2 == FUNC_8());
    if (VAR_2 != VAR_12)
    {
        if (VAR_2 != VAR_5)
        {
            FUNC_5(&VAR_1);
        }

        if (VAR_5 != VAR_12)
        {
            FUNC_4(&VAR_12->Pcb, &VAR_1);
        }

        VAR_2 = VAR_12;
    }

    FUNC_7(VAR_11);
    return VAR_9;
}
