
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_28__ {TYPE_3__* item; } ;
typedef TYPE_5__ traverse_ptr ;
struct TYPE_29__ {scalar_t__ size; scalar_t__ address; int list_entry; } ;
typedef TYPE_6__ space ;
struct TYPE_24__ {int compat_ro_flags; int generation; int cache_generation; scalar_t__ node_size; } ;
struct TYPE_30__ {TYPE_1__ superblock; int extent_root; } ;
typedef TYPE_7__ device_extension ;
struct TYPE_31__ {scalar_t__ offset; int space_size; int space; TYPE_4__* chunk_item; } ;
typedef TYPE_8__ chunk ;
struct TYPE_32__ {scalar_t__ obj_id; scalar_t__ offset; scalar_t__ obj_type; } ;
struct TYPE_27__ {scalar_t__ size; } ;
struct TYPE_25__ {scalar_t__ obj_id; scalar_t__ obj_type; scalar_t__ offset; } ;
struct TYPE_26__ {TYPE_2__ key; } ;
typedef int PIRP ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_9__ KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 TYPE_6__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*,scalar_t__,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ,TYPE_5__*,TYPE_9__*,int,int ) ;
 int FUNC_6 (TYPE_7__*,TYPE_5__*,TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_7 (TYPE_7__*,TYPE_8__*,int,int ) ;
 scalar_t__ FUNC_8 (TYPE_7__*,TYPE_8__*,int ) ;
 int FUNC_9 (TYPE_6__*,int *) ;

__attribute__((used)) static NTSTATUS FUNC_10(device_extension* VAR_9, chunk* VAR_10, PIRP VAR_11) {
    traverse_ptr VAR_12, VAR_13;
    KEY VAR_14;
    uint64_t VAR_15;
    bool VAR_16;
    space* VAR_17;
    NTSTATUS VAR_18;

    if (VAR_9->superblock.compat_ro_flags & VAR_1 && VAR_9->superblock.compat_ro_flags & VAR_2) {
        VAR_18 = FUNC_8(VAR_9, VAR_10, VAR_11);

        if (!FUNC_3(VAR_18) && VAR_18 != VAR_5) {
            FUNC_0("load_stored_free_space_tree returned %08x\n", VAR_18);
            return VAR_18;
        }
    } else if (VAR_9->superblock.generation - 1 == VAR_9->superblock.cache_generation) {
        VAR_18 = FUNC_7(VAR_9, VAR_10, 0, VAR_11);

        if (!FUNC_3(VAR_18) && VAR_18 != VAR_5) {
            FUNC_0("load_stored_free_space_cache returned %08x\n", VAR_18);
            return VAR_18;
        }
    } else
        VAR_18 = VAR_5;

    if (VAR_18 == VAR_5) {
        FUNC_4("generating free space cache for chunk %I64x\n", VAR_10->offset);

        VAR_14.obj_id = VAR_10->offset;
        VAR_14.obj_type = VAR_7;
        VAR_14.offset = 0;

        VAR_18 = FUNC_5(VAR_9, VAR_9->extent_root, &VAR_12, &VAR_14, 0, VAR_11);
        if (!FUNC_3(VAR_18)) {
            FUNC_0("error - find_item returned %08x\n", VAR_18);
            return VAR_18;
        }

        VAR_15 = VAR_10->offset;

        do {
            if (VAR_12.item->key.obj_id >= VAR_10->offset + VAR_10->chunk_item->size)
                break;

            if (VAR_12.item->key.obj_id >= VAR_10->offset && (VAR_12.item->key.obj_type == VAR_7 || VAR_12.item->key.obj_type == VAR_8)) {
                if (VAR_12.item->key.obj_id > VAR_15) {
                    VAR_17 = FUNC_1(VAR_3, sizeof(space), VAR_0);

                    if (!VAR_17) {
                        FUNC_0("out of memory\n");
                        return VAR_4;
                    }

                    VAR_17->address = VAR_15;
                    VAR_17->size = VAR_12.item->key.obj_id - VAR_15;
                    FUNC_2(&VAR_10->space, &VAR_17->list_entry);

                    FUNC_9(VAR_17, &VAR_10->space_size);

                    FUNC_4("(%I64x,%I64x)\n", VAR_17->address, VAR_17->size);
                }

                if (VAR_12.item->key.obj_type == VAR_8)
                    VAR_15 = VAR_12.item->key.obj_id + VAR_9->superblock.node_size;
                else
                    VAR_15 = VAR_12.item->key.obj_id + VAR_12.item->key.offset;
            }

            VAR_16 = FUNC_6(VAR_9, &VAR_12, &VAR_13, 0, VAR_11);
            if (VAR_16)
                VAR_12 = VAR_13;
        } while (VAR_16);

        if (VAR_15 < VAR_10->offset + VAR_10->chunk_item->size) {
            VAR_17 = FUNC_1(VAR_3, sizeof(space), VAR_0);

            if (!VAR_17) {
                FUNC_0("out of memory\n");
                return VAR_4;
            }

            VAR_17->address = VAR_15;
            VAR_17->size = VAR_10->offset + VAR_10->chunk_item->size - VAR_15;
            FUNC_2(&VAR_10->space, &VAR_17->list_entry);

            FUNC_9(VAR_17, &VAR_10->space_size);

            FUNC_4("(%I64x,%I64x)\n", VAR_17->address, VAR_17->size);
        }
    }

    return VAR_6;
}
