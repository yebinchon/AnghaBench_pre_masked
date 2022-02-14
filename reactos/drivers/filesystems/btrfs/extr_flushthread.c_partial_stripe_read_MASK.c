
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_14__ {int * data; } ;
typedef TYPE_4__ partial_stripe ;
struct TYPE_11__ {int sector_size; } ;
struct TYPE_15__ {TYPE_1__ superblock; } ;
typedef TYPE_5__ device_extension ;
struct TYPE_16__ {TYPE_2__* chunk_item; TYPE_3__** devices; } ;
typedef TYPE_6__ chunk ;
typedef scalar_t__ ULONG ;
struct TYPE_17__ {scalar_t__ offset; } ;
struct TYPE_13__ {int fileobj; scalar_t__ devobj; } ;
struct TYPE_12__ {int stripe_length; scalar_t__ num_stripes; int type; } ;
typedef int NTSTATUS ;
typedef TYPE_7__ CHUNK_ITEM_STRIPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__,scalar_t__,int *,int) ;

__attribute__((used)) static NTSTATUS FUNC_9(device_extension* VAR_6, chunk* VAR_7, partial_stripe* VAR_8, uint64_t VAR_9, uint16_t VAR_10, ULONG VAR_11, ULONG VAR_12) {
    NTSTATUS VAR_13;
    ULONG VAR_14 = (ULONG)(VAR_7->chunk_item->stripe_length / VAR_6->superblock.sector_size);
    CHUNK_ITEM_STRIPE* VAR_15 = (CHUNK_ITEM_STRIPE*)&VAR_7->chunk_item[1];

    while (VAR_12 > 0) {
        ULONG VAR_16 = FUNC_6(VAR_11 + VAR_12, VAR_11 + (VAR_14 - (VAR_11 % VAR_14))) - VAR_11;
        uint16_t VAR_17;

        VAR_17 = (VAR_10 + (VAR_11 / VAR_14) + 1) % VAR_7->chunk_item->num_stripes;

        if (VAR_7->devices[VAR_17]->devobj) {
            VAR_13 = FUNC_8(VAR_7->devices[VAR_17]->devobj, VAR_7->devices[VAR_17]->fileobj, VAR_15[VAR_17].offset + VAR_9 + ((VAR_11 % VAR_14) * VAR_6->superblock.sector_size),
                                    VAR_16 * VAR_6->superblock.sector_size, VAR_8->data + (VAR_11 * VAR_6->superblock.sector_size), 0);
            if (!FUNC_3(VAR_13)) {
                FUNC_0("sync_read_phys returned %08x\n", VAR_13);
                return VAR_13;
            }
        } else if (VAR_7->chunk_item->type & VAR_1) {
            uint16_t VAR_18;
            uint8_t* VAR_19;

            VAR_19 = FUNC_1(VAR_2, VAR_16 * VAR_6->superblock.sector_size, VAR_0);
            if (!VAR_19) {
                FUNC_0("out of memory\n");
                return VAR_3;
            }

            for (VAR_18 = 0; VAR_18 < VAR_7->chunk_item->num_stripes; VAR_18++) {
                if (VAR_18 != VAR_17) {
                    if (!VAR_7->devices[VAR_18]->devobj) {
                        FUNC_2(VAR_19);
                        return VAR_5;
                    }

                    if (VAR_18 == 0 || (VAR_17 == 0 && VAR_18 == 1)) {
                        VAR_13 = FUNC_8(VAR_7->devices[VAR_18]->devobj, VAR_7->devices[VAR_18]->fileobj, VAR_15[VAR_18].offset + VAR_9 + ((VAR_11 % VAR_14) * VAR_6->superblock.sector_size),
                                                VAR_16 * VAR_6->superblock.sector_size, VAR_8->data + (VAR_11 * VAR_6->superblock.sector_size), 0);
                        if (!FUNC_3(VAR_13)) {
                            FUNC_0("sync_read_phys returned %08x\n", VAR_13);
                            FUNC_2(VAR_19);
                            return VAR_13;
                        }
                    } else {
                        VAR_13 = FUNC_8(VAR_7->devices[VAR_18]->devobj, VAR_7->devices[VAR_18]->fileobj, VAR_15[VAR_18].offset + VAR_9 + ((VAR_11 % VAR_14) * VAR_6->superblock.sector_size),
                                                VAR_16 * VAR_6->superblock.sector_size, VAR_19, 0);
                        if (!FUNC_3(VAR_13)) {
                            FUNC_0("sync_read_phys returned %08x\n", VAR_13);
                            FUNC_2(VAR_19);
                            return VAR_13;
                        }

                        FUNC_5(VAR_8->data + (VAR_11 * VAR_6->superblock.sector_size), VAR_19, VAR_16 * VAR_6->superblock.sector_size);
                    }
                }
            }

            FUNC_2(VAR_19);
        } else {
            uint8_t* VAR_20;
            uint16_t VAR_21, VAR_22, VAR_23, VAR_24, VAR_25 = 0;

            VAR_20 = FUNC_1(VAR_2, (VAR_7->chunk_item->num_stripes + 2) * VAR_16 * VAR_6->superblock.sector_size, VAR_0);
            if (!VAR_20) {
                FUNC_0("out of memory\n");
                return VAR_3;
            }

            VAR_22 = (VAR_10 + 1) % VAR_7->chunk_item->num_stripes;
            for (VAR_21 = 0; VAR_21 < VAR_7->chunk_item->num_stripes; VAR_21++) {
                if (VAR_22 != VAR_17) {
                    if (VAR_7->devices[VAR_22]->devobj) {
                        VAR_13 = FUNC_8(VAR_7->devices[VAR_22]->devobj, VAR_7->devices[VAR_22]->fileobj, VAR_15[VAR_22].offset + VAR_9 + ((VAR_11 % VAR_14) * VAR_6->superblock.sector_size),
                                                VAR_16 * VAR_6->superblock.sector_size, VAR_20 + (VAR_21 * VAR_16 * VAR_6->superblock.sector_size), 0);
                        if (!FUNC_3(VAR_13)) {
                            FUNC_0("sync_read_phys returned %08x\n", VAR_13);
                            VAR_25++;
                            VAR_24 = VAR_21;
                        }
                    } else {
                        VAR_25++;
                        VAR_24 = VAR_21;
                    }

                    if (VAR_25 > 1) {
                        FUNC_2(VAR_20);
                        return VAR_5;
                    }
                } else
                    VAR_23 = VAR_21;

                VAR_22 = (VAR_22 + 1) % VAR_7->chunk_item->num_stripes;
            }

            if (VAR_25 == 0 || VAR_24 == VAR_7->chunk_item->num_stripes - 1) {
                for (VAR_21 = 0; VAR_21 < VAR_7->chunk_item->num_stripes - 1; VAR_21++) {
                    if (VAR_21 != VAR_23) {
                        if (VAR_21 == 0 || (VAR_21 == 1 && VAR_23 == 0)) {
                            FUNC_4(VAR_8->data + (VAR_11 * VAR_6->superblock.sector_size), VAR_20 + (VAR_21 * VAR_16 * VAR_6->superblock.sector_size),
                                          VAR_16 * VAR_6->superblock.sector_size);
                        } else {
                            FUNC_5(VAR_8->data + (VAR_11 * VAR_6->superblock.sector_size), VAR_20 + (VAR_21 * VAR_16 * VAR_6->superblock.sector_size),
                                   VAR_16 * VAR_6->superblock.sector_size);
                        }
                    }
                }
            } else {
                FUNC_7(VAR_20, VAR_7->chunk_item->num_stripes, VAR_16 * VAR_6->superblock.sector_size, VAR_23,
                               VAR_24, VAR_20 + (VAR_7->chunk_item->num_stripes * VAR_16 * VAR_6->superblock.sector_size));

                FUNC_4(VAR_8->data + (VAR_11 * VAR_6->superblock.sector_size), VAR_20 + (VAR_7->chunk_item->num_stripes * VAR_16 * VAR_6->superblock.sector_size),
                              VAR_16 * VAR_6->superblock.sector_size);
            }

            FUNC_2(VAR_20);
        }

        VAR_11 += VAR_16;
        VAR_12 -= VAR_16;
    }

    return VAR_4;
}
