
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;


typedef int uint8_t ;
typedef void* uint64_t ;
struct TYPE_26__ {int level; } ;
struct TYPE_28__ {TYPE_2__ header; } ;
typedef TYPE_4__ tree ;
struct TYPE_29__ {TYPE_3__* item; } ;
typedef TYPE_5__ traverse_ptr ;
struct TYPE_25__ {int incompat_flags; } ;
struct TYPE_30__ {int extent_root; TYPE_1__ superblock; } ;
typedef TYPE_6__ device_extension ;
struct TYPE_32__ {int level; } ;
struct TYPE_31__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_24__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_27__ {int size; TYPE_12__ key; int data; } ;
typedef int PIRP ;
typedef void* NTSTATUS ;
typedef TYPE_7__ KEY ;
typedef TYPE_8__ EXTENT_ITEM_TREE ;
typedef TYPE_8__ EXTENT_ITEM_SKINNY_METADATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 TYPE_8__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_8__*,int ,int) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 void* FUNC_6 (TYPE_6__*,int ,TYPE_5__*,TYPE_7__*,int,int ) ;
 void* FUNC_7 (TYPE_6__*,int ,void*,scalar_t__,int ,TYPE_8__*,int,int *,int ) ;
 int FUNC_8 (TYPE_12__,TYPE_7__) ;

__attribute__((used)) static NTSTATUS FUNC_9(device_extension* VAR_8, uint64_t VAR_9, tree* VAR_10, uint8_t VAR_11, PIRP VAR_12) {
    KEY VAR_13;
    traverse_ptr VAR_14;
    NTSTATUS VAR_15;

    if (VAR_8->superblock.incompat_flags & VAR_1) {
        VAR_13.obj_id = VAR_9;
        VAR_13.obj_type = VAR_7;
        VAR_13.offset = VAR_10->header.level;

        VAR_15 = FUNC_6(VAR_8, VAR_8->extent_root, &VAR_14, &VAR_13, 0, VAR_12);
        if (!FUNC_3(VAR_15)) {
            FUNC_0("error - find_item returned %08x\n", VAR_15);
            return VAR_15;
        }

        if (!FUNC_8(VAR_14.item->key, VAR_13)) {
            EXTENT_ITEM_SKINNY_METADATA* VAR_16;

            if (VAR_14.item->size > 0) {
                VAR_16 = FUNC_1(VAR_2, VAR_14.item->size, VAR_0);

                if (!VAR_16) {
                    FUNC_0("out of memory\n");
                    return VAR_3;
                }

                FUNC_4(VAR_16, VAR_14.item->data, VAR_14.item->size);
            } else
                VAR_16 = ((void*)0);

            VAR_15 = FUNC_5(VAR_8, &VAR_14);
            if (!FUNC_3(VAR_15)) {
                FUNC_0("delete_tree_item returned %08x\n", VAR_15);
                if (VAR_16) FUNC_2(VAR_16);
                return VAR_15;
            }

            VAR_15 = FUNC_7(VAR_8, VAR_8->extent_root, VAR_9, VAR_7, VAR_11, VAR_16, VAR_14.item->size, ((void*)0), VAR_12);
            if (!FUNC_3(VAR_15)) {
                FUNC_0("insert_tree_item returned %08x\n", VAR_15);
                if (VAR_16) FUNC_2(VAR_16);
                return VAR_15;
            }

            return VAR_5;
        }
    }

    VAR_13.obj_id = VAR_9;
    VAR_13.obj_type = VAR_6;
    VAR_13.offset = 0xffffffffffffffff;

    VAR_15 = FUNC_6(VAR_8, VAR_8->extent_root, &VAR_14, &VAR_13, 0, VAR_12);
    if (!FUNC_3(VAR_15)) {
        FUNC_0("error - find_item returned %08x\n", VAR_15);
        return VAR_15;
    }

    if (VAR_14.item->key.obj_id == VAR_13.obj_id && VAR_14.item->key.obj_type == VAR_13.obj_type) {
        EXTENT_ITEM_TREE* VAR_17;

        if (VAR_14.item->size < sizeof(EXTENT_ITEM_TREE)) {
            FUNC_0("(%I64x,%x,%I64x) was %u bytes, expected at least %u\n", VAR_14.item->key.obj_id, VAR_14.item->key.obj_type, VAR_14.item->key.offset, VAR_14.item->size, sizeof(EXTENT_ITEM_TREE));
            return VAR_4;
        }

        VAR_17 = FUNC_1(VAR_2, VAR_14.item->size, VAR_0);

        if (!VAR_17) {
            FUNC_0("out of memory\n");
            return VAR_3;
        }

        FUNC_4(VAR_17, VAR_14.item->data, VAR_14.item->size);

        VAR_15 = FUNC_5(VAR_8, &VAR_14);
        if (!FUNC_3(VAR_15)) {
            FUNC_0("delete_tree_item returned %08x\n", VAR_15);
            FUNC_2(VAR_17);
            return VAR_15;
        }

        VAR_17->level = VAR_11;

        VAR_15 = FUNC_7(VAR_8, VAR_8->extent_root, VAR_14.item->key.obj_id, VAR_14.item->key.obj_type, VAR_14.item->key.offset, VAR_17, VAR_14.item->size, ((void*)0), VAR_12);
        if (!FUNC_3(VAR_15)) {
            FUNC_0("insert_tree_item returned %08x\n", VAR_15);
            FUNC_2(VAR_17);
            return VAR_15;
        }

        return VAR_5;
    }

    FUNC_0("could not find EXTENT_ITEM for address %I64x\n", VAR_9);

    return VAR_4;
}
