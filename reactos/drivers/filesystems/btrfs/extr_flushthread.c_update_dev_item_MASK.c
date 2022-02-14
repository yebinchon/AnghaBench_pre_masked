
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_18__ {TYPE_1__* item; } ;
typedef TYPE_2__ traverse_ptr ;
struct TYPE_19__ {int chunk_root; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_16__ {int dev_id; } ;
struct TYPE_20__ {TYPE_15__ devitem; } ;
typedef TYPE_4__ device ;
struct TYPE_21__ {int obj_id; int offset; int obj_type; } ;
struct TYPE_17__ {int key; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_5__ KEY ;
typedef int DEV_ITEM ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,TYPE_15__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_2__*,TYPE_5__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int,int ,int ,int *,int,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_5__) ;

NTSTATUS FUNC_9(device_extension* VAR_6, device* VAR_7, PIRP VAR_8) {
    KEY VAR_9;
    traverse_ptr VAR_10;
    DEV_ITEM* VAR_11;
    NTSTATUS VAR_12;

    VAR_9.obj_id = 1;
    VAR_9.obj_type = VAR_5;
    VAR_9.offset = VAR_7->devitem.dev_id;

    VAR_12 = FUNC_6(VAR_6, VAR_6->chunk_root, &VAR_10, &VAR_9, 0, VAR_8);
    if (!FUNC_3(VAR_12)) {
        FUNC_0("error - find_item returned %08x\n", VAR_12);
        return VAR_12;
    }

    if (FUNC_8(VAR_10.item->key, VAR_9)) {
        FUNC_0("error - could not find DEV_ITEM for device %I64x\n", VAR_7->devitem.dev_id);
        return VAR_3;
    }

    VAR_12 = FUNC_5(VAR_6, &VAR_10);
    if (!FUNC_3(VAR_12)) {
        FUNC_0("delete_tree_item returned %08x\n", VAR_12);
        return VAR_12;
    }

    VAR_11 = FUNC_1(VAR_1, sizeof(DEV_ITEM), VAR_0);
    if (!VAR_11) {
        FUNC_0("out of memory\n");
        return VAR_2;
    }

    FUNC_4(VAR_11, &VAR_7->devitem, sizeof(DEV_ITEM));

    VAR_12 = FUNC_7(VAR_6, VAR_6->chunk_root, 1, VAR_5, VAR_7->devitem.dev_id, VAR_11, sizeof(DEV_ITEM), ((void*)0), VAR_8);
    if (!FUNC_3(VAR_12)) {
        FUNC_0("insert_tree_item returned %08x\n", VAR_12);
        FUNC_2(VAR_11);
        return VAR_12;
    }

    return VAR_4;
}
