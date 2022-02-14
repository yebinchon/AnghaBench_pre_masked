
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_21__ {TYPE_2__* item; } ;
typedef TYPE_3__ traverse_ptr ;
struct TYPE_22__ {int extent_root; } ;
typedef TYPE_4__ device_extension ;
struct TYPE_24__ {int count; int root; } ;
struct TYPE_23__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_19__ {scalar_t__ obj_id; scalar_t__ obj_type; scalar_t__ offset; } ;
struct TYPE_20__ {int size; TYPE_1__ key; scalar_t__ data; } ;
typedef int PIRP ;
typedef scalar_t__ NTSTATUS ;
typedef int LIST_ENTRY ;
typedef TYPE_5__ KEY ;
typedef TYPE_6__ EXTENT_REF_V0 ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,scalar_t__,scalar_t__,int,int *,TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ,TYPE_3__*,TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static NTSTATUS FUNC_11(device_extension* VAR_6, uint64_t VAR_7, bool VAR_8, KEY* VAR_9, uint8_t VAR_10, PIRP VAR_11) {
    NTSTATUS VAR_12;
    KEY VAR_13;
    traverse_ptr VAR_14, VAR_15;
    LIST_ENTRY VAR_16;
    uint64_t VAR_17;

    FUNC_1(&VAR_16);

    VAR_13.obj_id = VAR_7;
    VAR_13.obj_type = VAR_4;
    VAR_13.offset = 0xffffffffffffffff;

    VAR_12 = FUNC_8(VAR_6, VAR_6->extent_root, &VAR_14, &VAR_13, 0, VAR_11);
    if (!FUNC_2(VAR_12)) {
        FUNC_0("find_item returned %08x\n", VAR_12);
        return VAR_12;
    }

    if (VAR_14.item->key.obj_id != VAR_13.obj_id || VAR_14.item->key.obj_type != VAR_13.obj_type) {
        FUNC_0("old-style extent %I64x not found\n", VAR_7);
        return VAR_3;
    }

    VAR_17 = VAR_14.item->key.offset;

    VAR_12 = FUNC_7(VAR_6, &VAR_14);
    if (!FUNC_2(VAR_12)) {
        FUNC_0("delete_tree_item returned %08x\n", VAR_12);
        return VAR_12;
    }

    while (FUNC_9(VAR_6, &VAR_14, &VAR_15, 0, VAR_11)) {
        VAR_14 = VAR_15;

        if (VAR_14.item->key.obj_id == VAR_7 && VAR_14.item->key.obj_type == VAR_5 && VAR_14.item->size >= sizeof(EXTENT_REF_V0)) {
            EXTENT_REF_V0* VAR_18 = (EXTENT_REF_V0*)VAR_14.item->data;

            if (VAR_8) {
                if (VAR_14.item->key.offset == VAR_14.item->key.obj_id) {
                    VAR_12 = FUNC_5(&VAR_16, VAR_18->root);
                    if (!FUNC_2(VAR_12)) {
                        FUNC_0("add_tree_block_extent_ref returned %08x\n", VAR_12);
                        goto end;
                    }
                } else {
                    VAR_12 = FUNC_3(&VAR_16, VAR_14.item->key.offset);
                    if (!FUNC_2(VAR_12)) {
                        FUNC_0("add_shared_block_extent_ref returned %08x\n", VAR_12);
                        goto end;
                    }
                }
            } else {
                VAR_12 = FUNC_4(&VAR_16, VAR_14.item->key.offset, VAR_18->count);
                if (!FUNC_2(VAR_12)) {
                    FUNC_0("add_shared_data_extent_ref returned %08x\n", VAR_12);
                    goto end;
                }
            }

            VAR_12 = FUNC_7(VAR_6, &VAR_14);
            if (!FUNC_2(VAR_12)) {
                FUNC_0("delete_tree_item returned %08x\n", VAR_12);
                goto end;
            }
        }

        if (VAR_14.item->key.obj_id > VAR_7 || VAR_14.item->key.obj_type > VAR_5)
            break;
    }

    VAR_12 = FUNC_6(VAR_6, VAR_7, VAR_17, VAR_8 ? (VAR_2 | VAR_1) : VAR_0,
                                   &VAR_16, VAR_9, VAR_10, VAR_11);
    if (!FUNC_2(VAR_12))
        FUNC_0("construct_extent_item returned %08x\n", VAR_12);

end:
    FUNC_10(&VAR_16);

    return VAR_12;
}
