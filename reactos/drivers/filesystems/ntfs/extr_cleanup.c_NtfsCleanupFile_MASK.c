
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int Flags; scalar_t__ FsContext; } ;
struct TYPE_7__ {int FileSize; } ;
struct TYPE_8__ {int Flags; scalar_t__ OpenHandleCount; int MainResource; TYPE_1__ RFCB; } ;
typedef TYPE_2__* PNTFS_FCB ;
typedef TYPE_3__* PFILE_OBJECT ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_3__*,int *,int *) ;
 int FUNC_1 (char*,int ,TYPE_3__*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS
FUNC_4(PDEVICE_EXTENSION VAR_4,
                PFILE_OBJECT VAR_5,
                BOOLEAN VAR_6)
{
    PNTFS_FCB VAR_7;

    FUNC_1("NtfsCleanupFile(DeviceExt %p, FileObject %p, CanWait %u)\n",
           VAR_4,
           VAR_5,
           VAR_6);

    VAR_7 = (PNTFS_FCB)(VAR_5->FsContext);
    if (!VAR_7)
        return VAR_3;

    if (VAR_7->Flags & VAR_0)
    {
        VAR_7->OpenHandleCount--;

        if (VAR_7->OpenHandleCount != 0)
        {

        }
    }
    else
    {
        if (!FUNC_2(&VAR_7->MainResource, VAR_6))
        {
            return VAR_2;
        }

        VAR_7->OpenHandleCount--;

        FUNC_0(VAR_5, &VAR_7->RFCB.FileSize, ((void*)0));

        if (VAR_7->OpenHandleCount != 0)
        {

        }

        VAR_5->Flags |= VAR_1;

        FUNC_3(&VAR_7->MainResource);
    }

    return VAR_3;
}
