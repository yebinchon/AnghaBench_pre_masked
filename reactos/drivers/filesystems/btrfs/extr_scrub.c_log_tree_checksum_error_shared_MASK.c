
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_11__ {scalar_t__ level; size_t num_items; int tree_id; } ;
typedef TYPE_2__ tree_header ;
struct TYPE_12__ {scalar_t__ address; int key; } ;
typedef TYPE_3__ internal_node ;
struct TYPE_10__ {int node_size; } ;
struct TYPE_13__ {TYPE_1__ superblock; } ;
typedef TYPE_4__ device_extension ;
typedef size_t ULONG ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*,scalar_t__,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int ,int *,int,int *,int *,int *,int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(device_extension* VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6) {
    tree_header* VAR_7;
    NTSTATUS VAR_8;
    internal_node* VAR_9;
    ULONG VAR_10;

    VAR_7 = FUNC_1(VAR_2, VAR_3->superblock.node_size, VAR_0);
    if (!VAR_7) {
        FUNC_0("out of memory\n");
        return;
    }

    VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_3->superblock.node_size, ((void*)0), 1, (uint8_t*)VAR_7, ((void*)0), ((void*)0), ((void*)0), 0, 0, VAR_1);
    if (!FUNC_3(VAR_8)) {
        FUNC_0("read_data returned %08x\n", VAR_8);
        goto end;
    }

    if (VAR_7->level == 0) {
        FUNC_0("tree level was 0\n");
        goto end;
    }

    VAR_9 = (internal_node*)&VAR_7[1];

    for (VAR_10 = 0; VAR_10 < VAR_7->num_items; VAR_10++) {
        if (VAR_9[VAR_10].address == VAR_5) {
            FUNC_4(VAR_3, VAR_5, VAR_6, VAR_7->tree_id, VAR_7->level - 1, &VAR_9[VAR_10].key);
            break;
        }
    }

end:
    FUNC_2(VAR_7);
}
