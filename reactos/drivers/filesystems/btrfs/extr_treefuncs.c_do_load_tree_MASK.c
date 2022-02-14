
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_22__ {TYPE_4__* tree; int generation; int address; } ;
typedef TYPE_5__ tree_holder ;
typedef int tree_data ;
struct TYPE_23__ {TYPE_2__* nonpaged; } ;
typedef TYPE_6__ tree ;
struct TYPE_24__ {TYPE_3__* nonpaged; } ;
typedef TYPE_7__ root ;
struct TYPE_18__ {int node_size; } ;
struct TYPE_25__ {TYPE_1__ superblock; } ;
typedef TYPE_8__ device_extension ;
typedef int chunk ;
struct TYPE_21__ {int * buf; } ;
struct TYPE_20__ {int load_tree_lock; } ;
struct TYPE_19__ {int mutex; } ;
typedef int PIRP ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_8__*,TYPE_5__*,int *,TYPE_7__*,TYPE_6__*,int *) ;
 int FUNC_9 (TYPE_8__*,int ,int ,int *,int,int *,int *,int **,int ,int ,int,int ) ;

NTSTATUS FUNC_10(device_extension* VAR_4, tree_holder* VAR_5, root* VAR_6, tree* VAR_7, tree_data* VAR_8, PIRP VAR_9) {
    NTSTATUS VAR_10;
    uint8_t* VAR_11;
    chunk* VAR_12;

    VAR_11 = FUNC_3(VAR_2, VAR_4->superblock.node_size, VAR_0);
    if (!VAR_11) {
        FUNC_0("out of memory\n");
        return VAR_3;
    }

    VAR_10 = FUNC_9(VAR_4, VAR_5->address, VAR_4->superblock.node_size, ((void*)0), 1, VAR_11, ((void*)0),
                       &VAR_12, VAR_9, VAR_5->generation, 0, VAR_1);
    if (!FUNC_7(VAR_10)) {
        FUNC_0("read_data returned 0x%08x\n", VAR_10);
        FUNC_4(VAR_11);
        return VAR_10;
    }

    if (VAR_7)
        FUNC_1(&VAR_7->nonpaged->mutex);
    else
        FUNC_2(&VAR_6->nonpaged->load_tree_lock, 1);

    VAR_10 = FUNC_8(VAR_4, VAR_5, VAR_11, VAR_6, VAR_7, VAR_8);

    if (VAR_7)
        FUNC_5(&VAR_7->nonpaged->mutex);
    else
        FUNC_6(&VAR_6->nonpaged->load_tree_lock);

    if (!VAR_5->tree || VAR_5->tree->buf != VAR_11)
        FUNC_4(VAR_11);

    if (!FUNC_7(VAR_10)) {
        FUNC_0("do_load_tree2 returned %08x\n", VAR_10);
        return VAR_10;
    }

    return VAR_10;
}
