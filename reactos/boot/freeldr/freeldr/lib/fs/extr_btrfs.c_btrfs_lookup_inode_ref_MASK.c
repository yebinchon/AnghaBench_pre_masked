
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_inode_ref {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_root_item const*,int ,int ,struct btrfs_path*) ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_path*) ;
 scalar_t__ FUNC_3 (struct btrfs_path*) ;
 TYPE_1__* FUNC_4 (struct btrfs_path*) ;

__attribute__((used)) static u64 FUNC_5(const struct btrfs_root_item *VAR_2, u64 VAR_3,
                                  struct btrfs_inode_ref *VAR_4, char *VAR_5)
{
    struct btrfs_path VAR_6;
    struct btrfs_inode_ref *VAR_7;
    u64 VAR_8 = VAR_1;
    FUNC_2(&VAR_6);

    if (FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_6))
    {
        VAR_7 = (struct btrfs_inode_ref *) FUNC_3(&VAR_6);

        if (VAR_4)
            *VAR_4 = *VAR_7;
        VAR_8 = FUNC_4(&VAR_6)->offset;
    }

    FUNC_1(&VAR_6);
    return VAR_8;
}
