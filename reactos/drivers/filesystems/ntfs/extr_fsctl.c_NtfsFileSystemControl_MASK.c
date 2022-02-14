
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Information; } ;
struct TYPE_10__ {TYPE_1__ IoStatus; } ;
struct TYPE_9__ {int MinorFunction; TYPE_3__* Irp; int DeviceObject; } ;
typedef TYPE_2__* PNTFS_IRP_CONTEXT ;
typedef TYPE_3__* PIRP ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;




 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int VAR_0 ;

NTSTATUS
FUNC_5(PNTFS_IRP_CONTEXT VAR_1)
{
    NTSTATUS VAR_2;
    PIRP VAR_3;
    PDEVICE_OBJECT VAR_4;

    FUNC_0("NtfsFileSystemControl() called\n");

    VAR_4 = VAR_1->DeviceObject;
    VAR_3 = VAR_1->Irp;
    VAR_3->IoStatus.Information = 0;

    switch (VAR_1->MinorFunction)
    {
        case 131:
            FUNC_1("NTFS: IRP_MN_USER_FS_REQUEST\n");
            VAR_2 = VAR_0;
            break;

        case 129:
            VAR_2 = FUNC_3(VAR_4, VAR_3);
            break;

        case 130:
            FUNC_0("NTFS: IRP_MN_MOUNT_VOLUME\n");
            VAR_2 = FUNC_2(VAR_4, VAR_3);
            break;

        case 128:
            FUNC_1("NTFS: IRP_MN_VERIFY_VOLUME\n");
            VAR_2 = FUNC_4(VAR_4, VAR_3);
            break;

        default:
            FUNC_1("NTFS FSC: MinorFunction %d\n", VAR_1->MinorFunction);
            VAR_2 = VAR_0;
            break;
    }

    return VAR_2;
}
