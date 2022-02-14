
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_13__ {TYPE_1__* item; } ;
typedef TYPE_2__ traverse_ptr ;
struct TYPE_14__ {int extent_root; } ;
typedef TYPE_3__ device_extension ;
typedef scalar_t__ ULONG ;
struct TYPE_17__ {scalar_t__ obj_id; scalar_t__ obj_type; scalar_t__ offset; } ;
struct TYPE_16__ {scalar_t__ root; scalar_t__ objid; scalar_t__ offset; scalar_t__ count; } ;
struct TYPE_15__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_12__ {int size; scalar_t__ data; TYPE_7__ key; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_4__ KEY ;
typedef int EXTENT_ITEM ;
typedef TYPE_5__ EXTENT_DATA_REF ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_3__*,int ,TYPE_2__*,TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__*) ;
 int FUNC_7 (TYPE_4__,TYPE_7__) ;

__attribute__((used)) static uint32_t FUNC_8(device_extension* VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7, PIRP VAR_8) {
    NTSTATUS VAR_9;
    KEY VAR_10;
    traverse_ptr VAR_11;

    VAR_10.obj_id = VAR_3;
    VAR_10.obj_type = VAR_1;
    VAR_10.offset = 0xffffffffffffffff;

    VAR_9 = FUNC_3(VAR_2, VAR_2->extent_root, &VAR_11, &VAR_10, 0, VAR_8);
    if (!FUNC_1(VAR_9)) {
        FUNC_0("error - find_item returned %08x\n", VAR_9);
        return 0;
    }

    if (VAR_11.item->key.obj_id != VAR_10.obj_id || VAR_11.item->key.obj_type != VAR_10.obj_type) {
        FUNC_2("could not find address %I64x in extent tree\n", VAR_3);
        return 0;
    }

    if (VAR_11.item->key.offset != VAR_4) {
        FUNC_0("extent %I64x had size %I64x, not %I64x as expected\n", VAR_3, VAR_11.item->key.offset, VAR_4);
        return 0;
    }

    if (VAR_11.item->size >= sizeof(EXTENT_ITEM)) {
        EXTENT_ITEM* VAR_12 = (EXTENT_ITEM*)VAR_11.item->data;
        uint32_t VAR_13 = VAR_11.item->size - sizeof(EXTENT_ITEM);
        uint8_t* VAR_14 = (uint8_t*)&VAR_12[1];

        while (VAR_13 > 0) {
            uint8_t VAR_15 = *VAR_14;
            ULONG VAR_16 = FUNC_4(VAR_15);
            uint32_t VAR_17 = FUNC_6(VAR_15, VAR_14 + sizeof(uint8_t));

            VAR_13--;

            if (VAR_16 > VAR_13) {
                FUNC_0("(%I64x,%x,%I64x): %x bytes left, expecting at least %x\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset, VAR_13, VAR_16);
                return 0;
            }

            if (VAR_16 == 0) {
                FUNC_0("(%I64x,%x,%I64x): unrecognized extent type %x\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset, VAR_15);
                return 0;
            }

            if (VAR_15 == VAR_0) {
                EXTENT_DATA_REF* VAR_18 = (EXTENT_DATA_REF*)(VAR_14 + sizeof(uint8_t));

                if (VAR_18->root == VAR_5 && VAR_18->objid == VAR_6 && VAR_18->offset == VAR_7)
                    return VAR_17;
            }

            VAR_13 -= VAR_16;
            VAR_14 += sizeof(uint8_t) + VAR_16;
        }
    }

    VAR_10.obj_id = VAR_3;
    VAR_10.obj_type = VAR_0;
    VAR_10.offset = FUNC_5(VAR_5, VAR_6, VAR_7);

    VAR_9 = FUNC_3(VAR_2, VAR_2->extent_root, &VAR_11, &VAR_10, 0, VAR_8);
    if (!FUNC_1(VAR_9)) {
        FUNC_0("error - find_item returned %08x\n", VAR_9);
        return 0;
    }

    if (!FUNC_7(VAR_10, VAR_11.item->key)) {
        if (VAR_11.item->size < sizeof(EXTENT_DATA_REF))
            FUNC_0("(%I64x,%x,%I64x) has size %u, not %u as expected\n", VAR_11.item->key.obj_id, VAR_11.item->key.obj_type, VAR_11.item->key.offset, VAR_11.item->size, sizeof(EXTENT_DATA_REF));
        else {
            EXTENT_DATA_REF* VAR_19 = (EXTENT_DATA_REF*)VAR_11.item->data;

            return VAR_19->count;
        }
    }

    return 0;
}
