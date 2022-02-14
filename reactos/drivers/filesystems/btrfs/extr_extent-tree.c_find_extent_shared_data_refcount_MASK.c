
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
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_16__ {TYPE_2__* item; } ;
typedef TYPE_3__ traverse_ptr ;
struct TYPE_14__ {int incompat_flags; } ;
struct TYPE_17__ {int extent_root; TYPE_1__ superblock; } ;
typedef TYPE_4__ device_extension ;
typedef int ULONG ;
struct TYPE_21__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_20__ {scalar_t__ refcount; } ;
struct TYPE_19__ {scalar_t__ obj_id; int offset; scalar_t__ obj_type; } ;
struct TYPE_18__ {scalar_t__ offset; int count; } ;
struct TYPE_15__ {int size; scalar_t__ data; TYPE_9__ key; } ;
typedef TYPE_5__ SHARED_DATA_REF ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_6__ KEY ;
typedef TYPE_7__ EXTENT_ITEM ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_4__*,int ,TYPE_3__*,TYPE_6__*,int,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*) ;
 int FUNC_6 (TYPE_6__,TYPE_9__) ;

uint32_t FUNC_7(device_extension* VAR_4, uint64_t VAR_5, uint64_t VAR_6, PIRP VAR_7) {
    NTSTATUS VAR_8;
    KEY VAR_9;
    traverse_ptr VAR_10;
    uint64_t VAR_11;
    EXTENT_ITEM* VAR_12;
    uint32_t VAR_13;
    uint8_t* VAR_14;

    VAR_9.obj_id = VAR_5;
    VAR_9.obj_type = VAR_4->superblock.incompat_flags & VAR_0 ? VAR_2 : VAR_1;
    VAR_9.offset = 0xffffffffffffffff;

    VAR_8 = FUNC_3(VAR_4, VAR_4->extent_root, &VAR_10, &VAR_9, 0, VAR_7);
    if (!FUNC_1(VAR_8)) {
        FUNC_0("error - find_item returned %08x\n", VAR_8);
        return 0;
    }

    if (VAR_10.item->key.obj_id != VAR_9.obj_id || (VAR_10.item->key.obj_type != VAR_1 && VAR_10.item->key.obj_type != VAR_2)) {
        FUNC_2("could not find address %I64x in extent tree\n", VAR_5);
        return 0;
    }

    if (VAR_10.item->size < sizeof(EXTENT_ITEM)) {
        FUNC_0("(%I64x,%x,%I64x): size was %u, expected at least %u\n", VAR_10.item->key.obj_id, VAR_10.item->key.obj_type, VAR_10.item->key.offset, VAR_10.item->size, sizeof(EXTENT_ITEM));
        return 0;
    }

    VAR_12 = (EXTENT_ITEM*)VAR_10.item->data;
    VAR_11 = 0;

    VAR_13 = VAR_10.item->size - sizeof(EXTENT_ITEM);
    VAR_14 = (uint8_t*)&VAR_12[1];

    while (VAR_13 > 0) {
        uint8_t VAR_15 = *VAR_14;
        ULONG VAR_16 = FUNC_4(VAR_15);
        uint64_t VAR_17 = FUNC_5(VAR_15, VAR_14 + sizeof(uint8_t));

        VAR_13--;

        if (VAR_16 > VAR_13) {
            FUNC_0("(%I64x,%x,%I64x): %x bytes left, expecting at least %x\n", VAR_10.item->key.obj_id, VAR_10.item->key.obj_type, VAR_10.item->key.offset, VAR_13, VAR_16);
            return 0;
        }

        if (VAR_16 == 0) {
            FUNC_0("(%I64x,%x,%I64x): unrecognized extent type %x\n", VAR_10.item->key.obj_id, VAR_10.item->key.obj_type, VAR_10.item->key.offset, VAR_15);
            return 0;
        }

        if (VAR_15 == VAR_3) {
            SHARED_DATA_REF* VAR_18 = (SHARED_DATA_REF*)(VAR_14 + sizeof(uint8_t));

            if (VAR_18->offset == VAR_6)
                return VAR_18->count;
        }

        VAR_13 -= VAR_16;
        VAR_14 += sizeof(uint8_t) + VAR_16;
        VAR_11 += VAR_17;
    }



    if (VAR_11 == VAR_12->refcount)
        return 0;

    VAR_9.obj_id = VAR_5;
    VAR_9.obj_type = VAR_3;
    VAR_9.offset = VAR_6;

    VAR_8 = FUNC_3(VAR_4, VAR_4->extent_root, &VAR_10, &VAR_9, 0, VAR_7);
    if (!FUNC_1(VAR_8)) {
        FUNC_0("error - find_item returned %08x\n", VAR_8);
        return 0;
    }

    if (!FUNC_6(VAR_9, VAR_10.item->key)) {
        if (VAR_10.item->size < sizeof(uint32_t))
            FUNC_0("(%I64x,%x,%I64x) has size %u, not %u as expected\n", VAR_10.item->key.obj_id, VAR_10.item->key.obj_type, VAR_10.item->key.offset, VAR_10.item->size, sizeof(uint32_t));
        else {
            uint32_t* VAR_19 = (uint32_t*)VAR_10.item->data;
            return *VAR_19;
        }
    }

    return 0;
}
