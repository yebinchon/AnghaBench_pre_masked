
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int removing; scalar_t__ open_files; int tree_lock; TYPE_2__* vde; int root_file; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_11__ {TYPE_1__* Vpb; TYPE_3__* DeviceExtension; } ;
struct TYPE_9__ {int * mounted_device; } ;
struct TYPE_8__ {int Flags; } ;
typedef TYPE_4__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static NTSTATUS FUNC_8(PDEVICE_OBJECT VAR_4) {
    device_extension* VAR_5 = VAR_4->DeviceExtension;
    NTSTATUS VAR_6;

    FUNC_1(&VAR_5->tree_lock, 1);

    VAR_6 = FUNC_6(VAR_5, VAR_1);

    if (!FUNC_4(VAR_6))
        FUNC_5("send_disks_pnp_message returned %08x\n", VAR_6);

    FUNC_2(&VAR_5->tree_lock);

    if (VAR_4->Vpb->Flags & VAR_3) {
        VAR_6 = FUNC_3(VAR_5->root_file, VAR_0);
        if (!FUNC_4(VAR_6)) {
            FUNC_5("FsRtlNotifyVolumeEvent returned %08x\n", VAR_6);
        }

        if (VAR_5->vde)
            VAR_5->vde->mounted_device = ((void*)0);

        FUNC_0(&VAR_5->tree_lock, 1);
        VAR_5->removing = 1;
        FUNC_2(&VAR_5->tree_lock);

        if (VAR_5->open_files == 0)
            FUNC_7(VAR_5);
    }

    return VAR_2;
}
