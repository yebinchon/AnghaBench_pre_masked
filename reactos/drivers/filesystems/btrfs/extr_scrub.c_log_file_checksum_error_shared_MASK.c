
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {scalar_t__ level; size_t num_items; int tree_id; } ;
typedef TYPE_3__ tree_header ;
struct TYPE_14__ {scalar_t__ obj_type; scalar_t__ offset; int obj_id; } ;
struct TYPE_16__ {int size; int offset; TYPE_2__ key; } ;
typedef TYPE_4__ leaf_node ;
struct TYPE_13__ {int node_size; } ;
struct TYPE_17__ {TYPE_1__ superblock; } ;
typedef TYPE_5__ device_extension ;
typedef size_t ULONG ;
struct TYPE_19__ {scalar_t__ type; scalar_t__ data; } ;
struct TYPE_18__ {scalar_t__ size; scalar_t__ address; } ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_6__ EXTENT_DATA2 ;
typedef TYPE_7__ EXTENT_DATA ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_5__*,scalar_t__,scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_5__*,scalar_t__,int ,int *,int,int *,int *,int *,int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(device_extension* VAR_5, uint64_t VAR_6, uint64_t VAR_7, uint64_t VAR_8, uint64_t VAR_9) {
    tree_header* VAR_10;
    NTSTATUS VAR_11;
    leaf_node* VAR_12;
    ULONG VAR_13;

    VAR_10 = FUNC_1(VAR_3, VAR_5->superblock.node_size, VAR_0);
    if (!VAR_10) {
        FUNC_0("out of memory\n");
        return;
    }

    VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_5->superblock.node_size, ((void*)0), 1, (uint8_t*)VAR_10, ((void*)0), ((void*)0), ((void*)0), 0, 0, VAR_2);
    if (!FUNC_3(VAR_11)) {
        FUNC_0("read_data returned %08x\n", VAR_11);
        goto end;
    }

    if (VAR_10->level != 0) {
        FUNC_0("tree level was %x, expected 0\n", VAR_10->level);
        goto end;
    }

    VAR_12 = (leaf_node*)&VAR_10[1];

    for (VAR_13 = 0; VAR_13 < VAR_10->num_items; VAR_13++) {
        if (VAR_12[VAR_13].key.obj_type == VAR_4 && VAR_12[VAR_13].size >= sizeof(EXTENT_DATA) - 1 + sizeof(EXTENT_DATA2)) {
            EXTENT_DATA* VAR_14 = (EXTENT_DATA*)((uint8_t*)VAR_10 + sizeof(tree_header) + VAR_12[VAR_13].offset);
            EXTENT_DATA2* VAR_15 = (EXTENT_DATA2*)VAR_14->data;

            if (VAR_14->type == VAR_1 && VAR_15->size != 0 && VAR_15->address == VAR_7)
                FUNC_4(VAR_5, VAR_7, VAR_8, VAR_10->tree_id, VAR_12[VAR_13].key.obj_id, VAR_12[VAR_13].key.offset + VAR_7 - VAR_9);
        }
    }

end:
    FUNC_2(VAR_10);
}
