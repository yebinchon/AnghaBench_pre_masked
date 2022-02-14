
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_24__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_13__ ;


typedef size_t uint16_t ;
struct TYPE_34__ {int bytes_used; } ;
struct TYPE_35__ {TYPE_5__ superblock; TYPE_15__* dev_root; TYPE_15__* chunk_root; TYPE_15__* extent_root; } ;
typedef TYPE_6__ device_extension ;
struct TYPE_36__ {int size; int offset; int created; int used; int oldused; TYPE_13__** devices; TYPE_24__* chunk_item; } ;
typedef TYPE_7__ chunk ;
struct TYPE_38__ {int offset; } ;
struct TYPE_37__ {int chunk_tree; int flags; int objid; int address; size_t length; int chunktree_uuid; int chunktree; int used; } ;
struct TYPE_33__ {int dev_id; } ;
struct TYPE_32__ {TYPE_2__* tree; } ;
struct TYPE_29__ {int chunk_tree_uuid; } ;
struct TYPE_31__ {TYPE_1__ header; } ;
struct TYPE_30__ {int type; int size; size_t num_stripes; size_t sub_stripes; } ;
struct TYPE_28__ {TYPE_3__ treeholder; int id; } ;
struct TYPE_27__ {TYPE_4__ devitem; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_8__ DEV_EXTENT ;
typedef TYPE_9__ CHUNK_ITEM_STRIPE ;
typedef TYPE_8__ CHUNK_ITEM ;
typedef TYPE_8__ BLOCK_GROUP_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 TYPE_8__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_8__*,TYPE_24__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_6__*,int,int ,int,TYPE_8__*,int) ;
 scalar_t__ FUNC_6 (TYPE_6__*,TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_6__*,TYPE_15__*,int,int ,int,TYPE_8__*,int,int *,int ) ;
 int FUNC_8 (TYPE_6__*,TYPE_13__*,int ) ;

__attribute__((used)) static NTSTATUS FUNC_9(device_extension* VAR_12, chunk* VAR_13, PIRP VAR_14) {
    CHUNK_ITEM* VAR_15;
    CHUNK_ITEM_STRIPE* VAR_16;
    BLOCK_GROUP_ITEM* VAR_17;
    uint16_t VAR_18, VAR_19;
    NTSTATUS VAR_20;

    VAR_15 = FUNC_1(VAR_6, VAR_13->size, VAR_0);
    if (!VAR_15) {
        FUNC_0("out of memory\n");
        return VAR_7;
    }

    FUNC_4(VAR_15, VAR_13->chunk_item, VAR_13->size);

    VAR_20 = FUNC_7(VAR_12, VAR_12->chunk_root, 0x100, VAR_10, VAR_13->offset, VAR_15, VAR_13->size, ((void*)0), VAR_14);
    if (!FUNC_3(VAR_20)) {
        FUNC_0("insert_tree_item failed\n");
        FUNC_2(VAR_15);
        return VAR_20;
    }

    if (VAR_13->chunk_item->type & VAR_5) {
        VAR_20 = FUNC_5(VAR_12, 0x100, VAR_10, VAR_13->offset, VAR_15, VAR_13->size);
        if (!FUNC_3(VAR_20)) {
            FUNC_0("add_to_bootstrap returned %08x\n", VAR_20);
            return VAR_20;
        }
    }



    VAR_17 = FUNC_1(VAR_6, sizeof(BLOCK_GROUP_ITEM), VAR_0);
    if (!VAR_17) {
        FUNC_0("out of memory\n");
        return VAR_7;
    }

    VAR_17->used = VAR_13->used;
    VAR_17->chunk_tree = 0x100;
    VAR_17->flags = VAR_13->chunk_item->type;

    VAR_20 = FUNC_7(VAR_12, VAR_12->extent_root, VAR_13->offset, VAR_9, VAR_13->chunk_item->size, VAR_17, sizeof(BLOCK_GROUP_ITEM), ((void*)0), VAR_14);
    if (!FUNC_3(VAR_20)) {
        FUNC_0("insert_tree_item failed\n");
        FUNC_2(VAR_17);
        return VAR_20;
    }

    if (VAR_13->chunk_item->type & VAR_1)
        VAR_19 = VAR_13->chunk_item->num_stripes;
    else if (VAR_13->chunk_item->type & VAR_2)
        VAR_19 = VAR_13->chunk_item->num_stripes / VAR_13->chunk_item->sub_stripes;
    else if (VAR_13->chunk_item->type & VAR_3)
        VAR_19 = VAR_13->chunk_item->num_stripes - 1;
    else if (VAR_13->chunk_item->type & VAR_4)
        VAR_19 = VAR_13->chunk_item->num_stripes - 2;
    else
        VAR_19 = 1;



    VAR_16 = (CHUNK_ITEM_STRIPE*)&VAR_13->chunk_item[1];

    for (VAR_18 = 0; VAR_18 < VAR_13->chunk_item->num_stripes; VAR_18++) {
        DEV_EXTENT* VAR_21;

        VAR_21 = FUNC_1(VAR_6, sizeof(DEV_EXTENT), VAR_0);
        if (!VAR_21) {
            FUNC_0("out of memory\n");
            return VAR_7;
        }

        VAR_21->chunktree = VAR_12->chunk_root->id;
        VAR_21->objid = 0x100;
        VAR_21->address = VAR_13->offset;
        VAR_21->length = VAR_13->chunk_item->size / VAR_19;
        VAR_21->chunktree_uuid = VAR_12->chunk_root->treeholder.tree->header.chunk_tree_uuid;

        VAR_20 = FUNC_7(VAR_12, VAR_12->dev_root, VAR_13->devices[VAR_18]->devitem.dev_id, VAR_11, VAR_16[VAR_18].offset, VAR_21, sizeof(DEV_EXTENT), ((void*)0), VAR_14);
        if (!FUNC_3(VAR_20)) {
            FUNC_0("insert_tree_item returned %08x\n", VAR_20);
            FUNC_2(VAR_21);
            return VAR_20;
        }


        VAR_20 = FUNC_8(VAR_12, VAR_13->devices[VAR_18], VAR_14);
        if (!FUNC_3(VAR_20)) {
            FUNC_0("update_dev_item returned %08x\n", VAR_20);
            return VAR_20;
        }
    }

    VAR_13->created = 0;
    VAR_13->oldused = VAR_13->used;

    VAR_12->superblock.bytes_used += FUNC_6(VAR_12, VAR_13, VAR_13->used);

    return VAR_8;
}
