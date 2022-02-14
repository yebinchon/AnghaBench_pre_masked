
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_20__ {TYPE_2__* item; } ;
typedef TYPE_4__ traverse_ptr ;
struct TYPE_19__ {int sector_size; } ;
struct TYPE_21__ {int checksum_root; TYPE_3__ superblock; } ;
typedef TYPE_5__ device_extension ;
typedef scalar_t__ ULONG ;
struct TYPE_22__ {int offset; void* obj_type; void* obj_id; } ;
struct TYPE_17__ {int offset; } ;
struct TYPE_18__ {int size; scalar_t__* data; TYPE_1__ key; } ;
typedef int RTL_BITMAP ;
typedef int PIRP ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_6__ KEY ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 void* VAR_1 ;
 scalar_t__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*) ;
 scalar_t__ FUNC_7 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_8 (int *,scalar_t__*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (char*,...) ;
 void* VAR_5 ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_14 (TYPE_5__*,int ,TYPE_4__*,TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_15 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_16 (TYPE_5__*,int ,void*,void*,int,scalar_t__*,int,int *,int ) ;
 scalar_t__ FUNC_17 (int,int) ;

void FUNC_18(device_extension* VAR_6, uint64_t VAR_7, ULONG VAR_8, uint32_t* VAR_9, PIRP VAR_10) {
    KEY VAR_11;
    traverse_ptr VAR_12, VAR_13;
    NTSTATUS VAR_14;
    uint64_t VAR_15, VAR_16;
    ULONG VAR_17;
    uint32_t* VAR_18;
    RTL_BITMAP VAR_19;
    ULONG* VAR_20;
    ULONG VAR_21, VAR_22;

    FUNC_11("(%p, %I64x, %x, %p, %p)\n", VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    VAR_11.obj_id = VAR_1;
    VAR_11.obj_type = VAR_5;
    VAR_11.offset = VAR_7;



    VAR_14 = FUNC_14(VAR_6, VAR_6->checksum_root, &VAR_12, &VAR_11, 0, VAR_10);
    if (VAR_14 == VAR_4) {
        if (VAR_9) {
            ULONG VAR_23 = VAR_8;
            uint64_t VAR_24 = VAR_7;
            uint32_t* VAR_25 = VAR_9;

            do {
                uint16_t VAR_26 = (uint16_t)FUNC_17(VAR_23, VAR_2 / sizeof(uint32_t));

                VAR_18 = FUNC_1(VAR_3, VAR_26 * sizeof(uint32_t), VAR_0);
                if (!VAR_18) {
                    FUNC_0("out of memory\n");
                    return;
                }

                FUNC_5(VAR_18, VAR_25, VAR_26 * sizeof(uint32_t));

                VAR_14 = FUNC_16(VAR_6, VAR_6->checksum_root, VAR_1, VAR_5, VAR_24, VAR_18,
                                          VAR_26 * sizeof(uint32_t), ((void*)0), VAR_10);
                if (!FUNC_3(VAR_14)) {
                    FUNC_0("insert_tree_item returned %08x\n", VAR_14);
                    FUNC_2(VAR_18);
                    return;
                }

                VAR_23 -= VAR_26;

                if (VAR_23 > 0) {
                    VAR_24 += VAR_26 * VAR_6->superblock.sector_size;
                    VAR_25 += VAR_26;
                }
            } while (VAR_23 > 0);
        }
    } else if (!FUNC_3(VAR_14)) {
        FUNC_0("find_item returned %08x\n", VAR_14);
        return;
    } else {
        uint32_t VAR_27;



        if (VAR_12.item->key.offset < VAR_7 && VAR_12.item->key.offset + (VAR_12.item->size * VAR_6->superblock.sector_size / sizeof(uint32_t)) >= VAR_7)
            VAR_15 = VAR_12.item->key.offset;
        else
            VAR_15 = VAR_7;

        VAR_11.obj_id = VAR_1;
        VAR_11.obj_type = VAR_5;
        VAR_11.offset = VAR_7 + (VAR_8 * VAR_6->superblock.sector_size);

        VAR_14 = FUNC_14(VAR_6, VAR_6->checksum_root, &VAR_12, &VAR_11, 0, VAR_10);
        if (!FUNC_3(VAR_14)) {
            FUNC_0("find_item returned %08x\n", VAR_14);
            return;
        }

        VAR_27 = VAR_12.item->size / sizeof(uint32_t);

        if (VAR_12.item->key.offset + (VAR_27 * VAR_6->superblock.sector_size) >= VAR_7 + (VAR_8 * VAR_6->superblock.sector_size))
            VAR_16 = VAR_12.item->key.offset + (VAR_27 * VAR_6->superblock.sector_size);
        else
            VAR_16 = VAR_7 + (VAR_8 * VAR_6->superblock.sector_size);

        FUNC_11("cs starts at %I64x (%x sectors)\n", VAR_7, VAR_8);
        FUNC_11("startaddr = %I64x\n", VAR_15);
        FUNC_11("endaddr = %I64x\n", VAR_16);

        VAR_17 = (ULONG)((VAR_16 - VAR_15) / VAR_6->superblock.sector_size);

        VAR_18 = FUNC_1(VAR_3, sizeof(uint32_t) * VAR_17, VAR_0);
        if (!VAR_18) {
            FUNC_0("out of memory\n");
            return;
        }

        VAR_20 = FUNC_1(VAR_3, sizeof(ULONG) * ((VAR_17/8)+1), VAR_0);
        if (!VAR_20) {
            FUNC_0("out of memory\n");
            FUNC_2(VAR_18);
            return;
        }

        FUNC_8(&VAR_19, VAR_20, VAR_17);
        FUNC_9(&VAR_19);

        VAR_11.obj_id = VAR_1;
        VAR_11.obj_type = VAR_5;
        VAR_11.offset = VAR_7;

        VAR_14 = FUNC_14(VAR_6, VAR_6->checksum_root, &VAR_12, &VAR_11, 0, VAR_10);
        if (!FUNC_3(VAR_14)) {
            FUNC_0("find_item returned %08x\n", VAR_14);
            FUNC_2(VAR_18);
            FUNC_2(VAR_20);
            return;
        }



        while (VAR_12.item->key.offset < VAR_16) {
            if (VAR_12.item->key.offset >= VAR_15) {
                if (VAR_12.item->size > 0) {
                    ULONG VAR_28 = (ULONG)FUNC_17((VAR_17 - (VAR_12.item->key.offset - VAR_15) / VAR_6->superblock.sector_size) * sizeof(uint32_t), VAR_12.item->size);

                    FUNC_5(&VAR_18[(VAR_12.item->key.offset - VAR_15) / VAR_6->superblock.sector_size], VAR_12.item->data, VAR_28);
                    FUNC_4(&VAR_19, (ULONG)((VAR_12.item->key.offset - VAR_15) / VAR_6->superblock.sector_size), VAR_28 / sizeof(uint32_t));
                }

                VAR_14 = FUNC_13(VAR_6, &VAR_12);
                if (!FUNC_3(VAR_14)) {
                    FUNC_0("delete_tree_item returned %08x\n", VAR_14);
                    FUNC_2(VAR_18);
                    FUNC_2(VAR_20);
                    return;
                }
            }

            if (FUNC_15(VAR_6, &VAR_12, &VAR_13, 0, VAR_10)) {
                VAR_12 = VAR_13;
            } else
                break;
        }

        if (!VAR_9) {
            FUNC_10(&VAR_19, (ULONG)((VAR_7 - VAR_15) / VAR_6->superblock.sector_size), VAR_8);
        } else {
            FUNC_5(&VAR_18[(VAR_7 - VAR_15) / VAR_6->superblock.sector_size], VAR_9, VAR_8 * sizeof(uint32_t));
            FUNC_4(&VAR_19, (ULONG)((VAR_7 - VAR_15) / VAR_6->superblock.sector_size), VAR_8);
        }

        VAR_21 = FUNC_6(&VAR_19, &VAR_22);

        while (VAR_21 != 0) {
            if (VAR_22 >= VAR_17)
                break;

            if (VAR_22 + VAR_21 >= VAR_17) {
                VAR_21 = VAR_17 - VAR_22;

                if (VAR_21 == 0)
                    break;
            }

            do {
                uint16_t VAR_29;
                uint64_t VAR_30;
                uint32_t* VAR_31;

                if (VAR_21 * sizeof(uint32_t) > VAR_2)
                    VAR_29 = VAR_2 / sizeof(uint32_t);
                else
                    VAR_29 = (uint16_t)VAR_21;

                VAR_31 = FUNC_1(VAR_3, sizeof(uint32_t) * VAR_29, VAR_0);
                if (!VAR_31) {
                    FUNC_0("out of memory\n");
                    FUNC_2(VAR_20);
                    FUNC_2(VAR_18);
                    return;
                }

                FUNC_5(VAR_31, &VAR_18[VAR_22], sizeof(uint32_t) * VAR_29);

                VAR_30 = VAR_15 + FUNC_12(VAR_22, VAR_6->superblock.sector_size);

                VAR_14 = FUNC_16(VAR_6, VAR_6->checksum_root, VAR_1, VAR_5, VAR_30, VAR_31, sizeof(uint32_t) * VAR_29, ((void*)0), VAR_10);
                if (!FUNC_3(VAR_14)) {
                    FUNC_0("insert_tree_item returned %08x\n", VAR_14);
                    FUNC_2(VAR_31);
                    FUNC_2(VAR_20);
                    FUNC_2(VAR_18);
                    return;
                }

                VAR_21 -= VAR_29;
                VAR_22 += VAR_29;
            } while (VAR_21 > 0);

            VAR_21 = FUNC_7(&VAR_19, VAR_22, &VAR_22);
        }

        FUNC_2(VAR_20);
        FUNC_2(VAR_18);
    }
}
