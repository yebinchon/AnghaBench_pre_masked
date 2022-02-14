
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int OpenHandleCount; } ;
struct TYPE_9__ {scalar_t__ Buffer; } ;
struct TYPE_11__ {TYPE_1__ FileName; int * SectionObjectPointer; int * FsContext; int * FsContext2; } ;
struct TYPE_10__ {struct TYPE_10__* DirectorySearchPattern; } ;
typedef scalar_t__ PNTFS_FCB ;
typedef TYPE_2__* PNTFS_CCB ;
typedef TYPE_3__* PFILE_OBJECT ;
typedef TYPE_4__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int VAR_0 ;

NTSTATUS
FUNC_3(PDEVICE_EXTENSION VAR_1,
              PFILE_OBJECT VAR_2)
{
    PNTFS_CCB VAR_3;
    PNTFS_FCB VAR_4;

    FUNC_0("NtfsCloseFile(DeviceExt %p, FileObject %p)\n",
           VAR_1,
           VAR_2);

    VAR_3 = (PNTFS_CCB)(VAR_2->FsContext2);
    VAR_4 = (PNTFS_FCB)(VAR_2->FsContext);

    FUNC_0("Ccb %p\n", VAR_3);
    if (VAR_3 == ((void*)0))
    {
        return VAR_0;
    }

    VAR_2->FsContext2 = ((void*)0);
    VAR_2->FsContext = ((void*)0);
    VAR_2->SectionObjectPointer = ((void*)0);
    VAR_1->OpenHandleCount--;

    if (VAR_2->FileName.Buffer)
    {



        FUNC_2(VAR_1, VAR_4);
    }

    if (VAR_3->DirectorySearchPattern)
    {
        FUNC_1(VAR_3->DirectorySearchPattern);
    }

    FUNC_1(VAR_3);

    return VAR_0;
}
