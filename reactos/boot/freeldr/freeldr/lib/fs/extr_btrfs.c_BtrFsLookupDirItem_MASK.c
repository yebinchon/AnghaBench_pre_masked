
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_disk_key {int offset; int type; int objectid; } ;
struct btrfs_dir_item {int dummy; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 struct btrfs_dir_item* FUNC_0 (struct btrfs_path*,char const*,int) ;
 int FUNC_1 (struct btrfs_root_item const*,struct btrfs_disk_key*,struct btrfs_path*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_path*) ;

__attribute__((used)) static BOOLEAN FUNC_5(const struct btrfs_root_item *VAR_2, u64 VAR_3, const char *VAR_4, int VAR_5,
                                  struct btrfs_dir_item *VAR_6)
{
    struct btrfs_path VAR_7;
    struct btrfs_disk_key VAR_8;
    struct btrfs_dir_item *VAR_9 = ((void*)0);

    VAR_8.objectid = VAR_3;
    VAR_8.type = VAR_0;
    VAR_8.offset = FUNC_2(VAR_4, VAR_5);
    FUNC_4(&VAR_7);

    if (!FUNC_1(VAR_2, &VAR_8, &VAR_7))
    {
        FUNC_3(&VAR_7);
        return VAR_1;
    }

    VAR_9 = FUNC_0(&VAR_7, VAR_4, VAR_5);
    if (VAR_9)
        *VAR_6 = *VAR_9;
    FUNC_3(&VAR_7);

    return VAR_9 != ((void*)0);
}
