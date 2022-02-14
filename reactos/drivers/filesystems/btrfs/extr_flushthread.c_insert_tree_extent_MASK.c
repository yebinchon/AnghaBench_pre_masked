
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_23__ {int tree; } ;
typedef TYPE_5__ traverse_ptr ;
struct TYPE_22__ {int incompat_flags; int node_size; int generation; } ;
struct TYPE_24__ {TYPE_4__ superblock; int extent_root; } ;
typedef TYPE_6__ device_extension ;
typedef int chunk ;
struct TYPE_21__ {int offset; } ;
struct TYPE_19__ {int refcount; int flags; int generation; } ;
struct TYPE_20__ {int level; TYPE_1__ extent_item; } ;
struct TYPE_25__ {TYPE_3__ tbr; int type; TYPE_2__ eit; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;
typedef TYPE_7__ EXTENT_ITEM_TREE2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 TYPE_7__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,TYPE_6__*,int ,int ,int *,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,TYPE_6__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_6__*,int *,int *) ;
 int FUNC_8 (TYPE_6__*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_9 (TYPE_6__*,int ,int ,int ,int ,TYPE_7__*,int,TYPE_5__*,int ) ;
 int FUNC_10 (int *,TYPE_6__*) ;
 int FUNC_11 (int *,int,int ,int ,int *) ;

__attribute__((used)) static bool FUNC_12(device_extension* VAR_6, uint8_t VAR_7, uint64_t VAR_8, chunk* VAR_9, uint64_t* VAR_10, PIRP VAR_11, LIST_ENTRY* VAR_12) {
    NTSTATUS VAR_13;
    uint64_t VAR_14;
    EXTENT_ITEM_TREE2* VAR_15;
    traverse_ptr VAR_16;

    FUNC_4("(%p, %x, %I64x, %p, %p, %p, %p)\n", VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);

    if (!FUNC_7(VAR_6, VAR_9, &VAR_14))
        return 0;

    if (VAR_6->superblock.incompat_flags & VAR_1) {
        bool VAR_17 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_14, VAR_11, VAR_12);

        if (VAR_17)
            *VAR_10 = VAR_14;

        return VAR_17;
    }

    VAR_15 = FUNC_1(VAR_3, sizeof(EXTENT_ITEM_TREE2), VAR_0);
    if (!VAR_15) {
        FUNC_0("out of memory\n");
        return 0;
    }

    VAR_15->eit.extent_item.refcount = 1;
    VAR_15->eit.extent_item.generation = VAR_6->superblock.generation;
    VAR_15->eit.extent_item.flags = VAR_2;
    VAR_15->eit.level = VAR_7;
    VAR_15->type = VAR_5;
    VAR_15->tbr.offset = VAR_8;

    VAR_13 = FUNC_9(VAR_6, VAR_6->extent_root, VAR_14, VAR_4, VAR_6->superblock.node_size, VAR_15, sizeof(EXTENT_ITEM_TREE2), &VAR_16, VAR_11);
    if (!FUNC_3(VAR_13)) {
        FUNC_0("insert_tree_item returned %08x\n", VAR_13);
        FUNC_2(VAR_15);
        return 0;
    }

    FUNC_5(VAR_9, VAR_6);

    FUNC_11(VAR_9, 0, VAR_14, VAR_6->superblock.node_size, VAR_12);

    FUNC_10(VAR_9, VAR_6);

    FUNC_6(VAR_16.tree);

    *VAR_10 = VAR_14;

    return 1;
}
