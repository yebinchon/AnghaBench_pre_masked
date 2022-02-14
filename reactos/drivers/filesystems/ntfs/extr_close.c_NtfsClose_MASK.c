
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* DeviceObject; } ;
struct TYPE_14__ {int DirResource; } ;
struct TYPE_13__ {TYPE_5__* DeviceExtension; } ;
struct TYPE_12__ {TYPE_2__* Irp; int Flags; int FileObject; TYPE_4__* DeviceObject; } ;
struct TYPE_10__ {scalar_t__ Information; } ;
struct TYPE_11__ {TYPE_1__ IoStatus; } ;
typedef TYPE_3__* PNTFS_IRP_CONTEXT ;
typedef int PFILE_OBJECT ;
typedef TYPE_4__* PDEVICE_OBJECT ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;
 TYPE_7__* VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

NTSTATUS
FUNC_6(PNTFS_IRP_CONTEXT VAR_4)
{
    PDEVICE_EXTENSION VAR_5;
    PFILE_OBJECT VAR_6;
    NTSTATUS VAR_7;
    PDEVICE_OBJECT VAR_8;

    FUNC_1("NtfsClose() called\n");

    VAR_8 = VAR_4->DeviceObject;
    if (VAR_8 == VAR_1->DeviceObject)
    {
        FUNC_1("Closing file system\n");
        VAR_4->Irp->IoStatus.Information = 0;
        return VAR_3;
    }

    VAR_6 = VAR_4->FileObject;
    VAR_5 = VAR_8->DeviceExtension;

    if (!FUNC_2(&VAR_5->DirResource,
                                        FUNC_0(VAR_4->Flags, VAR_0)))
    {
        return FUNC_5(VAR_4);
    }

    VAR_7 = FUNC_4(VAR_5, VAR_6);

    FUNC_3(&VAR_5->DirResource);

    if (VAR_7 == VAR_2)
    {
        return FUNC_5(VAR_4);
    }

    VAR_4->Irp->IoStatus.Information = 0;
    return VAR_7;
}
