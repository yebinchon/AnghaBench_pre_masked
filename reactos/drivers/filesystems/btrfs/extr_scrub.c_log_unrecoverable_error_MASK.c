
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_30__ {TYPE_2__* item; } ;
typedef TYPE_4__ traverse_ptr ;
struct TYPE_27__ {scalar_t__ sector_size; scalar_t__ node_size; } ;
struct TYPE_31__ {TYPE_1__ superblock; int extent_root; } ;
typedef TYPE_5__ device_extension ;
typedef int ULONG ;
struct TYPE_35__ {scalar_t__ obj_type; int offset; scalar_t__ obj_id; } ;
struct TYPE_34__ {scalar_t__ offset; } ;
struct TYPE_33__ {scalar_t__ offset; scalar_t__ count; } ;
struct TYPE_32__ {scalar_t__ offset; } ;
struct TYPE_29__ {scalar_t__ obj_type; scalar_t__ obj_id; scalar_t__ offset; } ;
struct TYPE_28__ {int size; TYPE_3__ key; scalar_t__ data; } ;
struct TYPE_26__ {scalar_t__ offset; scalar_t__ count; int objid; int root; } ;
struct TYPE_25__ {int flags; scalar_t__ refcount; } ;
struct TYPE_24__ {scalar_t__ level; int firstitem; } ;
typedef TYPE_6__ TREE_BLOCK_REF ;
typedef TYPE_7__ SHARED_DATA_REF ;
typedef TYPE_8__ SHARED_BLOCK_REF ;
typedef int NTSTATUS ;
typedef TYPE_9__ KEY ;
typedef TYPE_10__ EXTENT_ITEM2 ;
typedef TYPE_11__ EXTENT_ITEM ;
typedef TYPE_12__ EXTENT_DATA_REF ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_5__*,int ,TYPE_4__*,TYPE_9__*,int,int *) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int,int *) ;
 int FUNC_4 (TYPE_5__*,scalar_t__,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (TYPE_5__*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(device_extension* VAR_7, uint64_t VAR_8, uint64_t VAR_9) {
    KEY VAR_10;
    traverse_ptr VAR_11;
    NTSTATUS VAR_12;
    EXTENT_ITEM* VAR_13;
    EXTENT_ITEM2* VAR_14 = ((void*)0);
    uint8_t* VAR_15;
    ULONG VAR_16;
    uint64_t VAR_17;



    VAR_10.obj_id = VAR_8;
    VAR_10.obj_type = VAR_3;
    VAR_10.offset = 0xffffffffffffffff;

    VAR_12 = FUNC_2(VAR_7, VAR_7->extent_root, &VAR_11, &VAR_10, 0, ((void*)0));
    if (!FUNC_1(VAR_12)) {
        FUNC_0("find_item returned %08x\n", VAR_12);
        return;
    }

    if ((VAR_11.item->key.obj_type != VAR_2 && VAR_11.item->key.obj_type != VAR_3) ||
        VAR_11.item->key.obj_id >= VAR_8 + VAR_7->superblock.sector_size ||
        (VAR_11.item->key.obj_type == VAR_2 && VAR_11.item->key.obj_id + VAR_11.item->key.offset <= VAR_8) ||
        (VAR_11.item->key.obj_type == VAR_3 && VAR_11.item->key.obj_id + VAR_7->superblock.node_size <= VAR_8)
    )
        return;

    if (VAR_11.item->size < sizeof(EXTENT_ITEM)) {
        FUNC_0("(%I64x,%x,%I64x) was %u bytes, expected at least %u\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset, VAR_11.item->size, sizeof(EXTENT_ITEM));
        return;
    }

    VAR_13 = (EXTENT_ITEM*)VAR_11.item->data;
    VAR_15 = (uint8_t*)&VAR_13[1];
    VAR_16 = VAR_11.item->size - sizeof(EXTENT_ITEM);

    if (VAR_11.item->key.obj_id == VAR_2 && VAR_13->flags & VAR_0) {
        if (VAR_11.item->size < sizeof(EXTENT_ITEM) + sizeof(EXTENT_ITEM2)) {
            FUNC_0("(%I64x,%x,%I64x) was %u bytes, expected at least %u\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset,
                                                                       VAR_11.item->size, sizeof(EXTENT_ITEM) + sizeof(EXTENT_ITEM2));
            return;
        }

        VAR_14 = (EXTENT_ITEM2*)VAR_15;

        VAR_15 += sizeof(EXTENT_ITEM2);
        VAR_16 -= sizeof(EXTENT_ITEM2);
    }

    VAR_17 = 0;

    while (VAR_16 > 0) {
        uint8_t VAR_18 = *VAR_15;

        VAR_15++;
        VAR_16--;

        if (VAR_18 == VAR_6) {
            TREE_BLOCK_REF* VAR_19;

            if (VAR_16 < sizeof(TREE_BLOCK_REF)) {
                FUNC_0("TREE_BLOCK_REF takes up %u bytes, but only %u remaining\n", sizeof(TREE_BLOCK_REF), VAR_16);
                break;
            }

            VAR_19 = (TREE_BLOCK_REF*)VAR_15;

            FUNC_6(VAR_7, VAR_8, VAR_9, VAR_19->offset, VAR_14 ? VAR_14->level : (uint8_t)VAR_11.item->key.offset, VAR_14 ? &VAR_14->firstitem : ((void*)0));

            VAR_17++;

            VAR_15 += sizeof(TREE_BLOCK_REF);
            VAR_16 -= sizeof(TREE_BLOCK_REF);
        } else if (VAR_18 == VAR_1) {
            EXTENT_DATA_REF* VAR_20;

            if (VAR_16 < sizeof(EXTENT_DATA_REF)) {
                FUNC_0("EXTENT_DATA_REF takes up %u bytes, but only %u remaining\n", sizeof(EXTENT_DATA_REF), VAR_16);
                break;
            }

            VAR_20 = (EXTENT_DATA_REF*)VAR_15;

            FUNC_4(VAR_7, VAR_8, VAR_9, VAR_20->root, VAR_20->objid, VAR_20->offset + VAR_8 - VAR_11.item->key.obj_id);

            VAR_17 += VAR_20->count;

            VAR_15 += sizeof(EXTENT_DATA_REF);
            VAR_16 -= sizeof(EXTENT_DATA_REF);
        } else if (VAR_18 == VAR_4) {
            SHARED_BLOCK_REF* VAR_21;

            if (VAR_16 < sizeof(SHARED_BLOCK_REF)) {
                FUNC_0("SHARED_BLOCK_REF takes up %u bytes, but only %u remaining\n", sizeof(SHARED_BLOCK_REF), VAR_16);
                break;
            }

            VAR_21 = (SHARED_BLOCK_REF*)VAR_15;

            FUNC_7(VAR_7, VAR_21->offset, VAR_8, VAR_9);

            VAR_17++;

            VAR_15 += sizeof(SHARED_BLOCK_REF);
            VAR_16 -= sizeof(SHARED_BLOCK_REF);
        } else if (VAR_18 == VAR_5) {
            SHARED_DATA_REF* VAR_22;

            if (VAR_16 < sizeof(SHARED_DATA_REF)) {
                FUNC_0("SHARED_DATA_REF takes up %u bytes, but only %u remaining\n", sizeof(SHARED_DATA_REF), VAR_16);
                break;
            }

            VAR_22 = (SHARED_DATA_REF*)VAR_15;

            FUNC_5(VAR_7, VAR_22->offset, VAR_8, VAR_9, VAR_11.item->key.obj_id);

            VAR_17 += VAR_22->count;

            VAR_15 += sizeof(SHARED_DATA_REF);
            VAR_16 -= sizeof(SHARED_DATA_REF);
        } else {
            FUNC_0("unknown extent type %x\n", VAR_18);
            break;
        }
    }

    if (VAR_17 < VAR_13->refcount) {
        do {
            traverse_ptr VAR_23;

            if (FUNC_3(VAR_7, &VAR_11, &VAR_23, 0, ((void*)0)))
                VAR_11 = VAR_23;
            else
                break;

            if (VAR_11.item->key.obj_id == VAR_8) {
                if (VAR_11.item->key.obj_type == VAR_6)
                    FUNC_6(VAR_7, VAR_8, VAR_9, VAR_11.item->key.offset, VAR_14 ? VAR_14->level : (uint8_t)VAR_11.item->key.offset, VAR_14 ? &VAR_14->firstitem : ((void*)0));
                else if (VAR_11.item->key.obj_type == VAR_1) {
                    EXTENT_DATA_REF* VAR_24;

                    if (VAR_11.item->size < sizeof(EXTENT_DATA_REF)) {
                        FUNC_0("(%I64x,%x,%I64x) was %u bytes, expected %u\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset,
                                                                          VAR_11.item->size, sizeof(EXTENT_DATA_REF));
                        break;
                    }

                    VAR_24 = (EXTENT_DATA_REF*)VAR_11.item->data;

                    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_24->root, VAR_24->objid, VAR_24->offset + VAR_8 - VAR_11.item->key.obj_id);
                } else if (VAR_11.item->key.obj_type == VAR_4)
                    FUNC_7(VAR_7, VAR_11.item->key.offset, VAR_8, VAR_9);
                else if (VAR_11.item->key.obj_type == VAR_5)
                    FUNC_5(VAR_7, VAR_11.item->key.offset, VAR_8, VAR_9, VAR_11.item->key.obj_id);
            } else
                break;
        } while (1);
    }
}
