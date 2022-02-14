
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* item; } ;
typedef TYPE_4__ traverse_ptr ;
struct TYPE_19__ {int num_devices; int bytes_used; int total_bytes; int csum_root_level; int csum_root_generation; int csum_root_addr; int dev_root_level; int dev_root_generation; int dev_root_addr; int fs_root_level; int fs_tree_generation; int fs_tree_addr; int extent_root_level; int extent_tree_generation; int extent_tree_addr; int chunk_root_level; int chunk_tree_generation; int chunk_tree_addr; int root_level; int root_tree_generation; int root_tree_addr; } ;
typedef TYPE_5__ superblock_backup ;
struct TYPE_17__ {int num_devices; int bytes_used; int total_bytes; int chunk_root_level; int chunk_root_generation; int chunk_tree_addr; int root_level; int generation; int root_tree_addr; } ;
struct TYPE_20__ {TYPE_3__ superblock; int root_root; } ;
typedef TYPE_6__ device_extension ;
struct TYPE_22__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_21__ {int root_level; int generation; int block_number; } ;
struct TYPE_15__ {scalar_t__ obj_id; scalar_t__ obj_type; } ;
struct TYPE_16__ {int size; scalar_t__ data; TYPE_1__ key; } ;
typedef TYPE_7__ ROOT_ITEM ;
typedef int PIRP ;
typedef TYPE_8__ KEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_6__*,int ,TYPE_4__*,TYPE_8__*,int,int ) ;

__attribute__((used)) static void FUNC_3(device_extension* VAR_5, superblock_backup* VAR_6, PIRP VAR_7) {
    KEY VAR_8;
    traverse_ptr VAR_9;

    FUNC_1(VAR_6, sizeof(superblock_backup));

    VAR_6->root_tree_addr = VAR_5->superblock.root_tree_addr;
    VAR_6->root_tree_generation = VAR_5->superblock.generation;
    VAR_6->root_level = VAR_5->superblock.root_level;

    VAR_6->chunk_tree_addr = VAR_5->superblock.chunk_tree_addr;
    VAR_6->chunk_tree_generation = VAR_5->superblock.chunk_root_generation;
    VAR_6->chunk_root_level = VAR_5->superblock.chunk_root_level;

    VAR_8.obj_id = VAR_2;
    VAR_8.obj_type = VAR_4;
    VAR_8.offset = 0xffffffffffffffff;

    if (FUNC_0(FUNC_2(VAR_5, VAR_5->root_root, &VAR_9, &VAR_8, 0, VAR_7))) {
        if (VAR_9.item->key.obj_id == VAR_8.obj_id && VAR_9.item->key.obj_type == VAR_8.obj_type && VAR_9.item->size >= sizeof(ROOT_ITEM)) {
            ROOT_ITEM* VAR_10 = (ROOT_ITEM*)VAR_9.item->data;

            VAR_6->extent_tree_addr = VAR_10->block_number;
            VAR_6->extent_tree_generation = VAR_10->generation;
            VAR_6->extent_root_level = VAR_10->root_level;
        }
    }

    VAR_8.obj_id = VAR_3;

    if (FUNC_0(FUNC_2(VAR_5, VAR_5->root_root, &VAR_9, &VAR_8, 0, VAR_7))) {
        if (VAR_9.item->key.obj_id == VAR_8.obj_id && VAR_9.item->key.obj_type == VAR_8.obj_type && VAR_9.item->size >= sizeof(ROOT_ITEM)) {
            ROOT_ITEM* VAR_11 = (ROOT_ITEM*)VAR_9.item->data;

            VAR_6->fs_tree_addr = VAR_11->block_number;
            VAR_6->fs_tree_generation = VAR_11->generation;
            VAR_6->fs_root_level = VAR_11->root_level;
        }
    }

    VAR_8.obj_id = VAR_1;

    if (FUNC_0(FUNC_2(VAR_5, VAR_5->root_root, &VAR_9, &VAR_8, 0, VAR_7))) {
        if (VAR_9.item->key.obj_id == VAR_8.obj_id && VAR_9.item->key.obj_type == VAR_8.obj_type && VAR_9.item->size >= sizeof(ROOT_ITEM)) {
            ROOT_ITEM* VAR_12 = (ROOT_ITEM*)VAR_9.item->data;

            VAR_6->dev_root_addr = VAR_12->block_number;
            VAR_6->dev_root_generation = VAR_12->generation;
            VAR_6->dev_root_level = VAR_12->root_level;
        }
    }

    VAR_8.obj_id = VAR_0;

    if (FUNC_0(FUNC_2(VAR_5, VAR_5->root_root, &VAR_9, &VAR_8, 0, VAR_7))) {
        if (VAR_9.item->key.obj_id == VAR_8.obj_id && VAR_9.item->key.obj_type == VAR_8.obj_type && VAR_9.item->size >= sizeof(ROOT_ITEM)) {
            ROOT_ITEM* VAR_13 = (ROOT_ITEM*)VAR_9.item->data;

            VAR_6->csum_root_addr = VAR_13->block_number;
            VAR_6->csum_root_generation = VAR_13->generation;
            VAR_6->csum_root_level = VAR_13->root_level;
        }
    }

    VAR_6->total_bytes = VAR_5->superblock.total_bytes;
    VAR_6->bytes_used = VAR_5->superblock.bytes_used;
    VAR_6->num_devices = VAR_5->superblock.num_devices;
}
