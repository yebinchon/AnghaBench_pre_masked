
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_disk_key {scalar_t__ objectid; scalar_t__ type; } ;



__attribute__((used)) static int FUNC_0(const struct btrfs_disk_key *VAR_0,
                                const struct btrfs_disk_key *VAR_1)
{
    if (VAR_0->objectid > VAR_1->objectid)
        return 1;
    if (VAR_0->objectid < VAR_1->objectid)
        return -1;
    if (VAR_0->type > VAR_1->type)
        return 1;
    if (VAR_0->type < VAR_1->type)
        return -1;
    return 0;
}
