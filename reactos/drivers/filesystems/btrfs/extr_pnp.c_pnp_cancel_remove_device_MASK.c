
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tree_lock; int fileref_lock; TYPE_5__* root_fileref; } ;
typedef TYPE_1__ device_extension ;
struct TYPE_8__ {scalar_t__ open_count; scalar_t__ fcb; } ;
struct TYPE_7__ {TYPE_1__* DeviceExtension; } ;
typedef TYPE_2__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static NTSTATUS FUNC_7(PDEVICE_OBJECT VAR_3) {
    device_extension* VAR_4 = VAR_3->DeviceExtension;
    NTSTATUS VAR_5;

    FUNC_1(&VAR_4->tree_lock, 1);

    FUNC_0(&VAR_4->fileref_lock, 1);

    if (VAR_4->root_fileref && VAR_4->root_fileref->fcb && (VAR_4->root_fileref->open_count > 0 || FUNC_5(VAR_4->root_fileref))) {
        VAR_5 = VAR_1;
        goto end;
    }

    VAR_5 = FUNC_6(VAR_4, VAR_0);
    if (!FUNC_3(VAR_5)) {
        FUNC_4("send_disks_pnp_message returned %08x\n", VAR_5);
        goto end;
    }

end:
    FUNC_2(&VAR_4->fileref_lock);
    FUNC_2(&VAR_4->tree_lock);

    return VAR_2;
}
