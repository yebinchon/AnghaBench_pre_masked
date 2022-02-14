
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root_item {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_inode_item {int dummy; } ;
struct btrfs_disk_key {int offset; int type; int objectid; } ;


 scalar_t__ FUNC_0 (struct btrfs_root_item const*,struct btrfs_disk_key*,struct btrfs_path*) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_path*) ;
 scalar_t__ FUNC_4 (struct btrfs_path*) ;

__attribute__((used)) static int FUNC_5(const struct btrfs_root_item *VAR_0,
                              struct btrfs_disk_key *VAR_1,
                              struct btrfs_inode_item *VAR_2,
                              struct btrfs_root_item *VAR_3)
{
    const struct btrfs_root_item VAR_4 = *VAR_0;
    struct btrfs_path VAR_5;
    int VAR_6 = -1;
    FUNC_3(&VAR_5);
    FUNC_1("Searching inode (%llu %u %llu)\n", VAR_1->objectid, VAR_1->type, VAR_1->offset);

    if (FUNC_0(&VAR_4, VAR_1, &VAR_5))
    {
        if (VAR_2)
            *VAR_2 = *((struct btrfs_inode_item *) FUNC_4(&VAR_5));

        if (VAR_3)
            *VAR_3 = VAR_4;

        VAR_6 = 0;
    }

    FUNC_2(&VAR_5);
    return VAR_6;
}
