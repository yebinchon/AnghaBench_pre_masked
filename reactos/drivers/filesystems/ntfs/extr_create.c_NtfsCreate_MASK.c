
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_4__* DeviceObject; } ;
struct TYPE_15__ {int DirResource; } ;
struct TYPE_14__ {TYPE_5__* DeviceExtension; } ;
struct TYPE_13__ {int Flags; TYPE_2__* Irp; TYPE_4__* DeviceObject; } ;
struct TYPE_11__ {int Information; } ;
struct TYPE_12__ {TYPE_1__ IoStatus; } ;
typedef TYPE_3__* PNTFS_IRP_CONTEXT ;
typedef TYPE_4__* PDEVICE_OBJECT ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;

NTSTATUS
FUNC_5(PNTFS_IRP_CONTEXT VAR_5)
{
    PDEVICE_EXTENSION VAR_6;
    NTSTATUS VAR_7;
    PDEVICE_OBJECT VAR_8;

    VAR_8 = VAR_5->DeviceObject;
    if (VAR_8 == VAR_2->DeviceObject)
    {

        FUNC_0("Opening file system\n");
        VAR_5->Irp->IoStatus.Information = VAR_0;
        return VAR_3;
    }

    VAR_6 = VAR_8->DeviceExtension;

    if (!(VAR_5->Flags & VAR_1))
    {
        return FUNC_4(VAR_5);
    }

    FUNC_1(&VAR_6->DirResource,
                                   VAR_4);
    VAR_7 = FUNC_3(VAR_8,
                            VAR_5);
    FUNC_2(&VAR_6->DirResource);

    return VAR_7;
}
