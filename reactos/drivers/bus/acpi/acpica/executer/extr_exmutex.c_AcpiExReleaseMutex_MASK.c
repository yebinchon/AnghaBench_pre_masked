
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_15__ {scalar_t__ SyncLevel; int AcquisitionDepth; int Node; TYPE_6__* OwnerThread; } ;
struct TYPE_18__ {TYPE_4__ Mutex; } ;
struct TYPE_17__ {scalar_t__ ThreadId; scalar_t__ CurrentSyncLevel; TYPE_2__* AcquiredMutexList; } ;
struct TYPE_16__ {TYPE_3__* Thread; } ;
struct TYPE_14__ {scalar_t__ ThreadId; int CurrentSyncLevel; } ;
struct TYPE_12__ {scalar_t__ OriginalSyncLevel; } ;
struct TYPE_13__ {TYPE_1__ Mutex; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef TYPE_6__ ACPI_THREAD_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_7__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_7__*) ;
 TYPE_7__* VAR_8 ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_OPERAND_OBJECT *VAR_10,
    ACPI_WALK_STATE *VAR_11)
{
    UINT8 VAR_12;
    ACPI_THREAD_STATE *VAR_13;
    ACPI_STATUS VAR_14 = VAR_7;


    FUNC_3 (VAR_9);


    if (!VAR_10)
    {
        FUNC_6 (VAR_5);
    }

    VAR_13 = VAR_10->Mutex.OwnerThread;



    if (!VAR_13)
    {
        FUNC_1 ((VAR_6,
            "Cannot release Mutex [%4.4s], not acquired",
            FUNC_5 (VAR_10->Mutex.Node)));
        FUNC_6 (VAR_2);
    }



    if (!VAR_11->Thread)
    {
        FUNC_1 ((VAR_6,
            "Cannot release Mutex [%4.4s], null thread info",
            FUNC_5 (VAR_10->Mutex.Node)));
        FUNC_6 (VAR_1);
    }





    if ((VAR_13->ThreadId != VAR_11->Thread->ThreadId) &&
        (VAR_10 != VAR_8))
    {
        FUNC_1 ((VAR_6,
            "Thread %u cannot release Mutex [%4.4s] acquired by thread %u",
            (UINT32) VAR_11->Thread->ThreadId,
            FUNC_5 (VAR_10->Mutex.Node),
            (UINT32) VAR_13->ThreadId));
        FUNC_6 (VAR_4);
    }
    if (VAR_10->Mutex.SyncLevel != VAR_13->CurrentSyncLevel)
    {
        FUNC_1 ((VAR_6,
            "Cannot release Mutex [%4.4s], SyncLevel mismatch: "
            "mutex %u current %u",
            FUNC_5 (VAR_10->Mutex.Node),
            VAR_10->Mutex.SyncLevel, VAR_11->Thread->CurrentSyncLevel));
        FUNC_6 (VAR_3);
    }






    VAR_12 =
        VAR_13->AcquiredMutexList->Mutex.OriginalSyncLevel;

    FUNC_0 ((VAR_0,
        "Releasing: Object SyncLevel %u, Thread SyncLevel %u, "
        "Prev SyncLevel %u, Depth %u TID %p\n",
        VAR_10->Mutex.SyncLevel, VAR_11->Thread->CurrentSyncLevel,
        VAR_12, VAR_10->Mutex.AcquisitionDepth,
        VAR_11->Thread));

    VAR_14 = FUNC_4 (VAR_10);
    if (FUNC_2 (VAR_14))
    {
        FUNC_6 (VAR_14);
    }

    if (VAR_10->Mutex.AcquisitionDepth == 0)
    {


        VAR_13->CurrentSyncLevel = VAR_12;
    }

    FUNC_0 ((VAR_0,
        "Released: Object SyncLevel %u, Thread SyncLevel, %u, "
        "Prev SyncLevel %u, Depth %u\n",
        VAR_10->Mutex.SyncLevel, VAR_11->Thread->CurrentSyncLevel,
        VAR_12, VAR_10->Mutex.AcquisitionDepth));

    FUNC_6 (VAR_14);
}
