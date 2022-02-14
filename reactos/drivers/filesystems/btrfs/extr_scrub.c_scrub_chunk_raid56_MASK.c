
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_23__ {TYPE_4__* item; } ;
typedef TYPE_5__ traverse_ptr ;
struct TYPE_20__ {scalar_t__ node_size; scalar_t__ sector_size; } ;
struct TYPE_24__ {TYPE_2__ superblock; int extent_root; } ;
typedef TYPE_6__ device_extension ;
struct TYPE_25__ {scalar_t__ offset; TYPE_1__* chunk_item; } ;
typedef TYPE_7__ chunk ;
typedef int ULONG ;
struct TYPE_26__ {int offset; scalar_t__ obj_type; scalar_t__ obj_id; } ;
struct TYPE_21__ {scalar_t__ obj_id; scalar_t__ obj_type; scalar_t__ offset; } ;
struct TYPE_22__ {TYPE_3__ key; } ;
struct TYPE_19__ {int type; int num_stripes; int stripe_length; scalar_t__ size; } ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_8__ KEY ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ,TYPE_5__*,TYPE_8__*,int,int *) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*,TYPE_5__*,int,int *) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_7__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static NTSTATUS FUNC_6(device_extension* VAR_5, chunk* VAR_6, uint64_t* VAR_7, bool* VAR_8) {
    NTSTATUS VAR_9;
    KEY VAR_10;
    traverse_ptr VAR_11;
    bool VAR_12;
    uint64_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 = 0;
    ULONG VAR_18 = 0, VAR_19 = VAR_6->chunk_item->type & VAR_0 ? 2 : 1;

    VAR_13 = (VAR_6->chunk_item->num_stripes - VAR_19) * VAR_6->chunk_item->stripe_length;
    VAR_14 = (*VAR_7 - VAR_6->offset) / VAR_13;

    *VAR_7 = VAR_6->offset + (VAR_14 * VAR_13);

    VAR_10.obj_id = *VAR_7;
    VAR_10.obj_type = VAR_4;
    VAR_10.offset = 0xffffffffffffffff;

    VAR_9 = FUNC_3(VAR_5, VAR_5->extent_root, &VAR_11, &VAR_10, 0, ((void*)0));
    if (!FUNC_1(VAR_9)) {
        FUNC_0("find_item returned %08x\n", VAR_9);
        return VAR_9;
    }

    *VAR_8 = 0;

    do {
        traverse_ptr VAR_20;

        if (VAR_11.item->key.obj_id >= VAR_6->offset + VAR_6->chunk_item->size)
            break;

        if (VAR_11.item->key.obj_id >= *VAR_7 && (VAR_11.item->key.obj_type == VAR_3 || VAR_11.item->key.obj_type == VAR_4)) {
            uint64_t VAR_21 = VAR_11.item->key.obj_type == VAR_4 ? VAR_5->superblock.node_size : VAR_11.item->key.offset;

            FUNC_2("%I64x\n", VAR_11.item->key.obj_id);

            if (VAR_21 < VAR_5->superblock.sector_size) {
                FUNC_0("extent %I64x has size less than sector_size (%I64x < %x)\n", VAR_11.item->key.obj_id, VAR_5->superblock.sector_size);
                return VAR_1;
            }

            VAR_14 = (VAR_11.item->key.obj_id - VAR_6->offset) / VAR_13;

            if (*VAR_8) {
                if (VAR_14 > VAR_16 + 1) {
                    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_15, VAR_16);
                    if (!FUNC_1(VAR_9)) {
                        FUNC_0("scrub_chunk_raid56_stripe_run returned %08x\n", VAR_9);
                        return VAR_9;
                    }

                    VAR_15 = VAR_14;
                }
            } else
                VAR_15 = VAR_14;

            VAR_16 = (VAR_11.item->key.obj_id + VAR_21 - 1 - VAR_6->offset) / VAR_13;

            *VAR_8 = 1;

            VAR_17 += VAR_21;
            VAR_18++;


            if (VAR_18 >= 64 || VAR_17 >= 0x8000000)
                break;
        }

        VAR_12 = FUNC_4(VAR_5, &VAR_11, &VAR_20, 0, ((void*)0));

        if (VAR_12)
            VAR_11 = VAR_20;
    } while (VAR_12);

    if (*VAR_8) {
        VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_15, VAR_16);
        if (!FUNC_1(VAR_9)) {
            FUNC_0("scrub_chunk_raid56_stripe_run returned %08x\n", VAR_9);
            return VAR_9;
        }

        *VAR_7 = VAR_6->offset + ((VAR_16 + 1) * VAR_13);
    }

    return VAR_2;
}
