
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ page_file_count; int removing; int tree_lock; TYPE_2__* vde; int open_files; int readonly; scalar_t__ need_write; int locked; int root_file; scalar_t__ disallow_dismount; TYPE_1__* Vpb; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_11__ {int * mounted_device; } ;
struct TYPE_10__ {int Flags; } ;
typedef int PIRP ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

NTSTATUS FUNC_12(device_extension* VAR_4, bool VAR_5, PIRP VAR_6) {
    NTSTATUS VAR_7;
    bool VAR_8;

    FUNC_5("FSCTL_DISMOUNT_VOLUME\n");

    if (!(VAR_4->Vpb->Flags & VAR_3))
        return VAR_2;

    if (!VAR_5) {
        if (VAR_4->disallow_dismount || VAR_4->page_file_count != 0) {
            FUNC_6("attempting to dismount boot volume or one containing a pagefile\n");
            return VAR_1;
        }

        VAR_7 = FUNC_3(VAR_4->root_file, VAR_0);
        if (!FUNC_4(VAR_7)) {
            FUNC_6("FsRtlNotifyVolumeEvent returned %08x\n", VAR_7);
        }
    }

    FUNC_1(&VAR_4->tree_lock, 1);

    if (!VAR_4->locked) {
        FUNC_8(VAR_4);

        if (VAR_4->need_write && !VAR_4->readonly) {
            VAR_7 = FUNC_7(VAR_4, VAR_6);

            if (!FUNC_4(VAR_7))
                FUNC_0("do_write returned %08x\n", VAR_7);
        }
    }

    FUNC_9(VAR_4);

    VAR_4->removing = 1;

    VAR_8 = VAR_4->open_files > 0;

    if (VAR_4->vde) {
        FUNC_11(VAR_4);
        VAR_4->vde->mounted_device = ((void*)0);
    }

    FUNC_2(&VAR_4->tree_lock);

    if (!VAR_8)
        FUNC_10(VAR_4);

    return VAR_2;
}
