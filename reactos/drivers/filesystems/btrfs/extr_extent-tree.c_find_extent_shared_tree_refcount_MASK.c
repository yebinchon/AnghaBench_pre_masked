
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_16__ {TYPE_2__* item; } ;
typedef TYPE_3__ traverse_ptr ;
struct TYPE_14__ {int incompat_flags; scalar_t__ node_size; } ;
struct TYPE_17__ {int extent_root; TYPE_1__ superblock; } ;
typedef TYPE_4__ device_extension ;
typedef int ULONG ;
struct TYPE_21__ {scalar_t__ obj_id; scalar_t__ obj_type; scalar_t__ offset; } ;
struct TYPE_20__ {int flags; int refcount; } ;
struct TYPE_19__ {int obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_18__ {int offset; } ;
struct TYPE_15__ {int size; TYPE_9__ key; scalar_t__ data; } ;
typedef TYPE_5__ SHARED_BLOCK_REF ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_6__ KEY ;
typedef int EXTENT_ITEM2 ;
typedef TYPE_7__ EXTENT_ITEM ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_4__*,int ,TYPE_3__*,TYPE_6__*,int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__*) ;
 int FUNC_6 (TYPE_6__,TYPE_9__) ;

uint64_t FUNC_7(device_extension* VAR_5, uint64_t VAR_6, uint64_t VAR_7, PIRP VAR_8) {
    NTSTATUS VAR_9;
    KEY VAR_10;
    traverse_ptr VAR_11;
    uint64_t VAR_12;
    EXTENT_ITEM* VAR_13;
    uint32_t VAR_14;
    uint8_t* VAR_15;

    VAR_10.obj_id = VAR_6;
    VAR_10.obj_type = VAR_5->superblock.incompat_flags & VAR_0 ? VAR_3 : VAR_2;
    VAR_10.offset = 0xffffffffffffffff;

    VAR_9 = FUNC_3(VAR_5, VAR_5->extent_root, &VAR_11, &VAR_10, 0, VAR_8);
    if (!FUNC_1(VAR_9)) {
        FUNC_0("error - find_item returned %08x\n", VAR_9);
        return 0;
    }

    if (VAR_11.item->key.obj_id != VAR_10.obj_id || (VAR_11.item->key.obj_type != VAR_2 && VAR_11.item->key.obj_type != VAR_3)) {
        FUNC_2("could not find address %I64x in extent tree\n", VAR_6);
        return 0;
    }

    if (VAR_11.item->key.obj_type == VAR_2 && VAR_11.item->key.offset != VAR_5->superblock.node_size) {
        FUNC_0("extent %I64x had size %I64x, not %I64x as expected\n", VAR_6, VAR_11.item->key.offset, VAR_5->superblock.node_size);
        return 0;
    }

    if (VAR_11.item->size < sizeof(EXTENT_ITEM)) {
        FUNC_0("(%I64x,%x,%I64x): size was %u, expected at least %u\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset, VAR_11.item->size, sizeof(EXTENT_ITEM));
        return 0;
    }

    VAR_13 = (EXTENT_ITEM*)VAR_11.item->data;
    VAR_12 = 0;

    VAR_14 = VAR_11.item->size - sizeof(EXTENT_ITEM);
    VAR_15 = (uint8_t*)&VAR_13[1];

    if (VAR_10.obj_type == VAR_2 && VAR_13->flags & VAR_1) {
        if (VAR_11.item->size < sizeof(EXTENT_ITEM) + sizeof(EXTENT_ITEM2)) {
            FUNC_0("(%I64x,%x,%I64x): size was %u, expected at least %u\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset,
                                                                       VAR_11.item->size, sizeof(EXTENT_ITEM) + sizeof(EXTENT_ITEM2));
            return 0;
        }

        VAR_14 -= sizeof(EXTENT_ITEM2);
        VAR_15 += sizeof(EXTENT_ITEM2);
    }

    while (VAR_14 > 0) {
        uint8_t VAR_16 = *VAR_15;
        ULONG VAR_17 = FUNC_4(VAR_16);
        uint64_t VAR_18 = FUNC_5(VAR_16, VAR_15 + sizeof(uint8_t));

        VAR_14--;

        if (VAR_17 > VAR_14) {
            FUNC_0("(%I64x,%x,%I64x): %x bytes left, expecting at least %x\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset, VAR_14, VAR_17);
            return 0;
        }

        if (VAR_17 == 0) {
            FUNC_0("(%I64x,%x,%I64x): unrecognized extent type %x\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset, VAR_16);
            return 0;
        }

        if (VAR_16 == VAR_4) {
            SHARED_BLOCK_REF* VAR_19 = (SHARED_BLOCK_REF*)(VAR_15 + sizeof(uint8_t));

            if (VAR_19->offset == VAR_7)
                return 1;
        }

        VAR_14 -= VAR_17;
        VAR_15 += sizeof(uint8_t) + VAR_17;
        VAR_12 += VAR_18;
    }



    if (VAR_12 == VAR_13->refcount)
        return 0;

    VAR_10.obj_id = VAR_6;
    VAR_10.obj_type = VAR_4;
    VAR_10.offset = VAR_7;

    VAR_9 = FUNC_3(VAR_5, VAR_5->extent_root, &VAR_11, &VAR_10, 0, VAR_8);
    if (!FUNC_1(VAR_9)) {
        FUNC_0("error - find_item returned %08x\n", VAR_9);
        return 0;
    }

    if (!FUNC_6(VAR_10, VAR_11.item->key))
        return 1;

    return 0;
}
