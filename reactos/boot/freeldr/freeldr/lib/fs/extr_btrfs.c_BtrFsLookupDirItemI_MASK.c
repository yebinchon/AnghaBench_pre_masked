
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_disk_key {scalar_t__ offset; int type; int objectid; } ;
struct btrfs_dir_item {int name_len; scalar_t__ type; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct btrfs_root_item const*,struct btrfs_disk_key*,struct btrfs_path*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char const*,int,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (struct btrfs_disk_key*,int ) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_disk_key*,struct btrfs_path*) ;
 scalar_t__ FUNC_7 (struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_path*) ;
 scalar_t__ FUNC_9 (struct btrfs_dir_item*,int ,int) ;

__attribute__((used)) static BOOLEAN FUNC_10(const struct btrfs_root_item *VAR_4, u64 VAR_5, const char *VAR_6, int VAR_7,
                                   struct btrfs_dir_item *VAR_8)
{
    struct btrfs_path VAR_9;
    struct btrfs_disk_key VAR_10;
    struct btrfs_dir_item *VAR_11;
    char *VAR_12;
    BOOLEAN VAR_13 = VAR_2;

    VAR_10.objectid = VAR_5;
    VAR_10.type = VAR_0;
    VAR_10.offset = 0;
    FUNC_5(&VAR_9);

    FUNC_0(VAR_4, &VAR_10, &VAR_9);

    if (FUNC_3(&VAR_10, FUNC_8(&VAR_9)))
        goto cleanup;

    do
    {
        VAR_11 = (struct btrfs_dir_item *) FUNC_7(&VAR_9);




        if (FUNC_9(VAR_11, 0, sizeof(*VAR_11) + VAR_11->name_len))
            continue;
        if (VAR_11->type == VAR_1)
            continue;

        VAR_12 = (char *) VAR_11 + sizeof(*VAR_11);
        FUNC_1("Compare names %.*s and %.*s\n", VAR_7, VAR_6, VAR_11->name_len, VAR_12);

        if (VAR_7 == VAR_11->name_len && FUNC_2(VAR_6, VAR_12, VAR_7) == 0)
        {
            *VAR_8 = *VAR_11;
            VAR_13 = VAR_3;
            goto cleanup;
        }

    } while (!FUNC_6(&VAR_10, &VAR_9));

cleanup:
    FUNC_4(&VAR_9);
    return VAR_13;
}
