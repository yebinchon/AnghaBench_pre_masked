
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_chunk_map_item {scalar_t__ logical; } ;



__attribute__((used)) static int FUNC_0(struct btrfs_chunk_map_item *VAR_0,
                                struct btrfs_chunk_map_item *VAR_1)
{
    if (VAR_0->logical > VAR_1->logical)
        return 1;
    if (VAR_0->logical < VAR_1->logical)
        return -1;
    return 0;
}
