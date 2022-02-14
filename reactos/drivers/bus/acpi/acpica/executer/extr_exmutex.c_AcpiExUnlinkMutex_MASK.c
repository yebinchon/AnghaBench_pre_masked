
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* Next; int OriginalSyncLevel; TYPE_3__* Prev; TYPE_6__* OwnerThread; } ;
struct TYPE_15__ {TYPE_5__ Mutex; } ;
struct TYPE_14__ {TYPE_4__* AcquiredMutexList; } ;
struct TYPE_9__ {TYPE_3__* Prev; } ;
struct TYPE_12__ {TYPE_1__ Mutex; } ;
struct TYPE_10__ {int OriginalSyncLevel; TYPE_4__* Next; } ;
struct TYPE_11__ {TYPE_2__ Mutex; } ;
typedef TYPE_6__ ACPI_THREAD_STATE ;
typedef TYPE_7__ ACPI_OPERAND_OBJECT ;



void
FUNC_0 (
    ACPI_OPERAND_OBJECT *VAR_0)
{
    ACPI_THREAD_STATE *VAR_1 = VAR_0->Mutex.OwnerThread;


    if (!VAR_1)
    {
        return;
    }



    if (VAR_0->Mutex.Next)
    {
        (VAR_0->Mutex.Next)->Mutex.Prev = VAR_0->Mutex.Prev;
    }

    if (VAR_0->Mutex.Prev)
    {
        (VAR_0->Mutex.Prev)->Mutex.Next = VAR_0->Mutex.Next;







        (VAR_0->Mutex.Prev)->Mutex.OriginalSyncLevel =
            VAR_0->Mutex.OriginalSyncLevel;
    }
    else
    {
        VAR_1->AcquiredMutexList = VAR_0->Mutex.Next;
    }
}
