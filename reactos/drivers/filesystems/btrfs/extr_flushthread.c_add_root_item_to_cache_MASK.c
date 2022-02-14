
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_17__ {TYPE_3__* tree; TYPE_2__* item; } ;
typedef TYPE_4__ traverse_ptr ;
struct TYPE_18__ {int root_root; } ;
typedef TYPE_5__ device_extension ;
struct TYPE_19__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_16__ {int write; } ;
struct TYPE_14__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_15__ {int size; TYPE_1__ key; int data; } ;
typedef int ROOT_ITEM ;
typedef int PIRP ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_6__ KEY ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int ,TYPE_4__*,TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ,scalar_t__,scalar_t__,int ,int *,int,int *,int ) ;

__attribute__((used)) static NTSTATUS FUNC_9(device_extension* VAR_6, uint64_t VAR_7, PIRP VAR_8) {
    KEY VAR_9;
    traverse_ptr VAR_10;
    NTSTATUS VAR_11;

    VAR_9.obj_id = VAR_7;
    VAR_9.obj_type = VAR_5;
    VAR_9.offset = 0xffffffffffffffff;

    VAR_11 = FUNC_7(VAR_6, VAR_6->root_root, &VAR_10, &VAR_9, 0, VAR_8);
    if (!FUNC_3(VAR_11)) {
        FUNC_0("error - find_item returned %08x\n", VAR_11);
        return VAR_11;
    }

    if (VAR_10.item->key.obj_id != VAR_9.obj_id || VAR_10.item->key.obj_type != VAR_9.obj_type) {
        FUNC_0("could not find ROOT_ITEM for tree %I64x\n", VAR_9.obj_id);
        return VAR_3;
    }

    if (VAR_10.item->size < sizeof(ROOT_ITEM)) {
        ROOT_ITEM* VAR_12 = FUNC_1(VAR_1, sizeof(ROOT_ITEM), VAR_0);
        if (!VAR_12) {
            FUNC_0("out of memory\n");
            return VAR_2;
        }

        if (VAR_10.item->size > 0)
            FUNC_4(VAR_12, VAR_10.item->data, VAR_10.item->size);

        FUNC_5(((uint8_t*)VAR_12) + VAR_10.item->size, sizeof(ROOT_ITEM) - VAR_10.item->size);

        VAR_11 = FUNC_6(VAR_6, &VAR_10);
        if (!FUNC_3(VAR_11)) {
            FUNC_0("delete_tree_item returned %08x\n", VAR_11);
            FUNC_2(VAR_12);
            return VAR_11;
        }

        VAR_11 = FUNC_8(VAR_6, VAR_6->root_root, VAR_9.obj_id, VAR_9.obj_type, VAR_10.item->key.offset, VAR_12, sizeof(ROOT_ITEM), ((void*)0), VAR_8);
        if (!FUNC_3(VAR_11)) {
            FUNC_0("insert_tree_item returned %08x\n", VAR_11);
            FUNC_2(VAR_12);
            return VAR_11;
        }
    } else {
        VAR_10.tree->write = 1;
    }

    return VAR_4;
}
