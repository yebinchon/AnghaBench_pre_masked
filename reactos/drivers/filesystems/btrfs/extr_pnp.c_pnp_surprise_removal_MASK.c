
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int removing; scalar_t__ open_files; int tree_lock; TYPE_2__* vde; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_11__ {TYPE_1__* Vpb; TYPE_3__* DeviceExtension; } ;
struct TYPE_9__ {int * mounted_device; } ;
struct TYPE_8__ {int Flags; } ;
typedef int PIRP ;
typedef TYPE_4__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,TYPE_4__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;

NTSTATUS FUNC_4(PDEVICE_OBJECT VAR_2, PIRP VAR_3) {
    device_extension* VAR_4 = VAR_2->DeviceExtension;

    FUNC_2("(%p, %p)\n", VAR_2, VAR_3);

    if (VAR_2->Vpb->Flags & VAR_1) {
        FUNC_0(&VAR_4->tree_lock, 1);

        if (VAR_4->vde)
            VAR_4->vde->mounted_device = ((void*)0);

        VAR_4->removing = 1;

        FUNC_1(&VAR_4->tree_lock);

        if (VAR_4->open_files == 0)
            FUNC_3(VAR_4);
    }

    return VAR_0;
}
