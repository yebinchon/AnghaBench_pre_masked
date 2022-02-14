
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;


struct TYPE_25__ {TYPE_1__* item; } ;
typedef TYPE_3__ traverse_ptr ;
struct TYPE_24__ {TYPE_17__* opts; } ;
struct TYPE_26__ {int tree_lock; int root_root; TYPE_2__ balance; } ;
typedef TYPE_4__ device_extension ;
struct TYPE_28__ {int system; int flags; int metadata; int data; } ;
struct TYPE_27__ {scalar_t__ offset; int obj_type; int obj_id; } ;
struct TYPE_23__ {int key; } ;
struct TYPE_22__ {int flags; } ;
typedef int NTSTATUS ;
typedef TYPE_5__ KEY ;
typedef TYPE_6__ BALANCE_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 TYPE_6__* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_6__*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (TYPE_17__*,int *) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_4__*,int ,TYPE_3__*,TYPE_5__*,int,int *) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int ,int ,int ,int ,TYPE_6__*,int,int *,int *) ;
 int FUNC_13 (int ,TYPE_5__) ;

__attribute__((used)) static NTSTATUS FUNC_14(device_extension* VAR_13) {
    KEY VAR_14;
    traverse_ptr VAR_15;
    NTSTATUS VAR_16;
    BALANCE_ITEM* VAR_17;

    VAR_14.obj_id = VAR_4;
    VAR_14.obj_type = VAR_12;
    VAR_14.offset = 0;

    FUNC_1(&VAR_13->tree_lock, 1);

    VAR_16 = FUNC_10(VAR_13, VAR_13->root_root, &VAR_15, &VAR_14, 0, ((void*)0));
    if (!FUNC_5(VAR_16)) {
        FUNC_0("find_item returned %08x\n", VAR_16);
        goto end;
    }

    if (!FUNC_13(VAR_15.item->key, VAR_14)) {
        VAR_16 = FUNC_8(VAR_13, &VAR_15);
        if (!FUNC_5(VAR_16)) {
            FUNC_0("delete_tree_item returned %08x\n", VAR_16);
            goto end;
        }
    }

    VAR_17 = FUNC_2(VAR_9, sizeof(BALANCE_ITEM), VAR_0);
    if (!VAR_17) {
        FUNC_0("out of memory\n");
        VAR_16 = VAR_10;
        goto end;
    }

    FUNC_6(VAR_17, sizeof(BALANCE_ITEM));

    if (VAR_13->balance.opts[VAR_5].flags & VAR_8) {
        VAR_17->flags |= VAR_1;
        FUNC_7(&VAR_13->balance.opts[VAR_5], &VAR_17->data);
    }

    if (VAR_13->balance.opts[VAR_6].flags & VAR_8) {
        VAR_17->flags |= VAR_2;
        FUNC_7(&VAR_13->balance.opts[VAR_6], &VAR_17->metadata);
    }

    if (VAR_13->balance.opts[VAR_7].flags & VAR_8) {
        VAR_17->flags |= VAR_3;
        FUNC_7(&VAR_13->balance.opts[VAR_7], &VAR_17->system);
    }

    VAR_16 = FUNC_12(VAR_13, VAR_13->root_root, VAR_4, VAR_12, 0, VAR_17, sizeof(BALANCE_ITEM), ((void*)0), ((void*)0));
    if (!FUNC_5(VAR_16)) {
        FUNC_0("insert_tree_item returned %08x\n", VAR_16);
        FUNC_3(VAR_17);
        goto end;
    }

    VAR_16 = VAR_11;

end:
    if (FUNC_5(VAR_16)) {
        VAR_16 = FUNC_9(VAR_13, ((void*)0));
        if (!FUNC_5(VAR_16))
            FUNC_0("do_write returned %08x\n", VAR_16);
    }

    FUNC_11(VAR_13);

    FUNC_4(&VAR_13->tree_lock);

    return VAR_16;
}
