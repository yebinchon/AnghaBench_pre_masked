
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_16__ {scalar_t__ CurrentSyncLevel; int ThreadId; } ;
struct TYPE_13__ {scalar_t__ SyncLevel; int AcquisitionDepth; scalar_t__ OriginalSyncLevel; TYPE_6__* OwnerThread; int Node; } ;
struct TYPE_12__ {scalar_t__ Value; } ;
struct TYPE_15__ {TYPE_2__ Mutex; TYPE_1__ Integer; } ;
struct TYPE_14__ {TYPE_6__* Thread; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

ACPI_STATUS
FUNC_8 (
    ACPI_OPERAND_OBJECT *VAR_6,
    ACPI_OPERAND_OBJECT *VAR_7,
    ACPI_WALK_STATE *VAR_8)
{
    ACPI_STATUS VAR_9;


    FUNC_2 (VAR_5, VAR_7);


    if (!VAR_7)
    {
        FUNC_7 (VAR_3);
    }



    if (!VAR_8->Thread)
    {
        FUNC_1 ((VAR_4,
            "Cannot acquire Mutex [%4.4s], null thread info",
            FUNC_6 (VAR_7->Mutex.Node)));
        FUNC_7 (VAR_1);
    }





    if (VAR_8->Thread->CurrentSyncLevel > VAR_7->Mutex.SyncLevel)
    {
        FUNC_1 ((VAR_4,
            "Cannot acquire Mutex [%4.4s], "
            "current SyncLevel is too large (%u)",
            FUNC_6 (VAR_7->Mutex.Node),
            VAR_8->Thread->CurrentSyncLevel));
        FUNC_7 (VAR_2);
    }

    FUNC_0 ((VAR_0,
        "Acquiring: Mutex SyncLevel %u, Thread SyncLevel %u, "
        "Depth %u TID %p\n",
        VAR_7->Mutex.SyncLevel, VAR_8->Thread->CurrentSyncLevel,
        VAR_7->Mutex.AcquisitionDepth, VAR_8->Thread));

    VAR_9 = FUNC_4 ((UINT16) VAR_6->Integer.Value,
        VAR_7, VAR_8->Thread->ThreadId);

    if (FUNC_3 (VAR_9) && VAR_7->Mutex.AcquisitionDepth == 1)
    {


        VAR_7->Mutex.OwnerThread = VAR_8->Thread;
        VAR_7->Mutex.OriginalSyncLevel =
            VAR_8->Thread->CurrentSyncLevel;
        VAR_8->Thread->CurrentSyncLevel =
            VAR_7->Mutex.SyncLevel;



        FUNC_5 (VAR_7, VAR_8->Thread);
    }

    FUNC_0 ((VAR_0,
        "Acquired: Mutex SyncLevel %u, Thread SyncLevel %u, Depth %u\n",
        VAR_7->Mutex.SyncLevel, VAR_8->Thread->CurrentSyncLevel,
        VAR_7->Mutex.AcquisitionDepth));

    FUNC_7 (VAR_9);
}
