
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_18__ {int tree; } ;
typedef TYPE_4__ traverse_ptr ;
struct TYPE_17__ {int node_size; int generation; } ;
struct TYPE_19__ {TYPE_3__ superblock; int extent_root; } ;
typedef TYPE_5__ device_extension ;
typedef int chunk ;
struct TYPE_16__ {int offset; } ;
struct TYPE_15__ {int refcount; int flags; int generation; } ;
struct TYPE_20__ {TYPE_2__ tbr; int type; TYPE_1__ ei; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;
typedef TYPE_6__ EXTENT_ITEM_SKINNY_METADATA ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,TYPE_5__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,int ,int ,int ,int ,TYPE_6__*,int,TYPE_4__*,int ) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 int FUNC_8 (int *,int,int ,int ,int *) ;

__attribute__((used)) static bool FUNC_9(device_extension* VAR_5, uint8_t VAR_6, uint64_t VAR_7, chunk* VAR_8, uint64_t VAR_9, PIRP VAR_10, LIST_ENTRY* VAR_11) {
    NTSTATUS VAR_12;
    EXTENT_ITEM_SKINNY_METADATA* VAR_13;
    traverse_ptr VAR_14;

    VAR_13 = FUNC_1(VAR_2, sizeof(EXTENT_ITEM_SKINNY_METADATA), VAR_0);
    if (!VAR_13) {
        FUNC_0("out of memory\n");
        return 0;
    }

    VAR_13->ei.refcount = 1;
    VAR_13->ei.generation = VAR_5->superblock.generation;
    VAR_13->ei.flags = VAR_1;
    VAR_13->type = VAR_4;
    VAR_13->tbr.offset = VAR_7;

    VAR_12 = FUNC_6(VAR_5, VAR_5->extent_root, VAR_9, VAR_3, VAR_6, VAR_13, sizeof(EXTENT_ITEM_SKINNY_METADATA), &VAR_14, VAR_10);
    if (!FUNC_3(VAR_12)) {
        FUNC_0("insert_tree_item returned %08x\n", VAR_12);
        FUNC_2(VAR_13);
        return 0;
    }

    FUNC_4(VAR_8, VAR_5);

    FUNC_8(VAR_8, 0, VAR_9, VAR_5->superblock.node_size, VAR_11);

    FUNC_7(VAR_8, VAR_5);

    FUNC_5(VAR_14.tree);

    return 1;
}
