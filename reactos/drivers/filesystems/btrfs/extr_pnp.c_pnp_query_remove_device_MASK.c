
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int removing; scalar_t__ open_files; int tree_lock; int readonly; scalar_t__ need_write; TYPE_6__* root_fileref; } ;
typedef TYPE_1__ device_extension ;
struct TYPE_11__ {scalar_t__ open_count; scalar_t__ fcb; } ;
struct TYPE_10__ {TYPE_1__* DeviceExtension; } ;
typedef int PIRP ;
typedef TYPE_2__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;

NTSTATUS FUNC_10(PDEVICE_OBJECT VAR_3, PIRP VAR_4) {
    device_extension* VAR_5 = VAR_3->DeviceExtension;
    NTSTATUS VAR_6;

    FUNC_1(&VAR_5->tree_lock, 1);

    if (VAR_5->root_fileref && VAR_5->root_fileref->fcb && (VAR_5->root_fileref->open_count > 0 || FUNC_7(VAR_5->root_fileref))) {
        FUNC_2(&VAR_5->tree_lock);
        return VAR_1;
    }

    VAR_6 = FUNC_8(VAR_5, VAR_0);
    if (!FUNC_3(VAR_6)) {
        FUNC_4("send_disks_pnp_message returned %08x\n", VAR_6);
        FUNC_2(&VAR_5->tree_lock);
        return VAR_6;
    }

    VAR_5->removing = 1;

    if (VAR_5->need_write && !VAR_5->readonly) {
        VAR_6 = FUNC_5(VAR_5, VAR_4);

        FUNC_6(VAR_5);

        if (!FUNC_3(VAR_6)) {
            FUNC_0("do_write returned %08x\n", VAR_6);
            FUNC_2(&VAR_5->tree_lock);
            return VAR_6;
        }
    }

    FUNC_2(&VAR_5->tree_lock);

    if (VAR_5->open_files == 0)
        FUNC_9(VAR_5);

    return VAR_2;
}
