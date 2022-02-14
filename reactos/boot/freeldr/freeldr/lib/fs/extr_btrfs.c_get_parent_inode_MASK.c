
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_inode_item {int dummy; } ;
struct btrfs_disk_key {scalar_t__ offset; void* type; scalar_t__ objectid; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct btrfs_root_item const*,struct btrfs_disk_key*,struct btrfs_inode_item*,int *) ;
 scalar_t__ FUNC_1 (struct btrfs_root_item const*,scalar_t__,int *,int *) ;

__attribute__((used)) static u64 FUNC_2(const struct btrfs_root_item *VAR_3, u64 VAR_4,
                            struct btrfs_inode_item *VAR_5)
{
    struct btrfs_disk_key VAR_6;
    u64 VAR_7;

    if (VAR_4 == VAR_0)
    {
        if (VAR_5)
        {
            VAR_6.objectid = VAR_4;
            VAR_6.type = VAR_1;
            VAR_6.offset = 0;

            if (FUNC_0(VAR_3, &VAR_6, VAR_5, ((void*)0)))
                return VAR_2;
        }

        return VAR_4;
    }

    VAR_7 = FUNC_1(VAR_3, VAR_4, ((void*)0), ((void*)0));
    if (VAR_7 == VAR_2)
        return VAR_2;

    if (VAR_5)
    {
        VAR_6.objectid = VAR_7;
        VAR_6.type = VAR_1;
        VAR_6.offset = 0;

        if (FUNC_0(VAR_3, &VAR_6, VAR_5, ((void*)0)))
            return VAR_2;
    }

    return VAR_7;
}
