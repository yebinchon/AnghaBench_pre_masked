
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_path {size_t* slots; TYPE_2__* tree_buf; } ;
struct btrfs_item {int dummy; } ;
struct TYPE_3__ {struct btrfs_item* items; } ;
struct TYPE_4__ {TYPE_1__ leaf; } ;



__attribute__((used)) static inline struct btrfs_item *FUNC_0(struct btrfs_path *VAR_0)
{
    return &VAR_0->tree_buf->leaf.items[VAR_0->slots[0]];
}
