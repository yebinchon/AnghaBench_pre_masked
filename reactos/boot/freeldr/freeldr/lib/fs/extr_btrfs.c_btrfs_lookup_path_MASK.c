
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct btrfs_root_item {int root_dirid; } ;
struct btrfs_inode_item {int dummy; } ;
struct btrfs_disk_key {scalar_t__ offset; int type; int objectid; } ;
struct btrfs_dir_item {struct btrfs_disk_key location; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btrfs_root_item const*,int ,char const*,int,struct btrfs_dir_item*) ;
 int FUNC_1 (struct btrfs_root_item const*,int ,char const*,int,struct btrfs_dir_item*) ;
 int FUNC_2 (char*,int,char const*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct btrfs_root_item const*,struct btrfs_disk_key*,struct btrfs_inode_item*,int *) ;
 int FUNC_6 (struct btrfs_root_item const*,int ,char**) ;
 int FUNC_7 (struct btrfs_root_item const*,int ,struct btrfs_inode_item*) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (char const*) ;

__attribute__((used)) static u64 FUNC_10(const struct btrfs_root_item *VAR_6, u64 VAR_7, const char *VAR_8,
                             u8 *VAR_9, struct btrfs_inode_item *VAR_10, int VAR_11)
{
    struct btrfs_dir_item VAR_12;
    struct btrfs_inode_item VAR_13;
    u8 VAR_14 = VAR_0;
    int VAR_15, VAR_16 = 0;
    const char *VAR_17 = VAR_8;
    struct btrfs_disk_key VAR_18;
    char *VAR_19 = ((void*)0);

    if (*VAR_17 == '/' || *VAR_17 == '\\')
    {
        ++VAR_17;
        VAR_7 = VAR_6->root_dirid;
    }

    do
    {
        VAR_17 = FUNC_9(VAR_17);

        VAR_15 = FUNC_8(VAR_17);
        if (VAR_15 > VAR_3)
        {
            FUNC_2("%s: Name too long at \"%.*s\"\n", VAR_3, VAR_17);
            return VAR_4;
        }

        if (VAR_15 == 1 && VAR_17[0] == '.')
            break;

        if (VAR_15 == 2 && VAR_17[0] == '.' && VAR_17[1] == '.')
        {
            VAR_17 += 2;
            VAR_7 = FUNC_7(VAR_6, VAR_7, &VAR_13);
            if (VAR_7 == VAR_4)
                return VAR_4;

            VAR_14 = VAR_0;
            continue;
        }

        if (!*VAR_17)
            break;

        if (!FUNC_0(VAR_6, VAR_7, VAR_17, VAR_15, &VAR_12))
        {
            FUNC_4("Try to find case-insensitive, path=%s inr=%llu s=%.*s\n", VAR_8, VAR_7, VAR_15, VAR_17);
            if (!FUNC_1(VAR_6, VAR_7, VAR_17, VAR_15, &VAR_12))
                return VAR_4;
        }

        VAR_14 = VAR_12.type;
        VAR_16 = 1;
        if (FUNC_5(VAR_6, &VAR_12.location, &VAR_13, ((void*)0)))
            return VAR_4;

        if (VAR_14 == VAR_1 && VAR_11 >= 0)
        {
            if (!VAR_11)
            {
                FUNC_4("%s: Too much symlinks!\n");
                return VAR_4;
            }


            if (!FUNC_6(VAR_6, VAR_12.location.objectid, &VAR_19))
                return VAR_4;

            VAR_7 = FUNC_10(VAR_6, VAR_7, VAR_19, &VAR_14, &VAR_13, VAR_11 - 1);

            FUNC_3(VAR_19, VAR_5);

            if (VAR_7 == VAR_4)
                return VAR_4;
        } else if (VAR_14 != VAR_0 && VAR_17[VAR_15])
        {
            FUNC_4("%s: \"%.*s\" not a directory\n", (int) (VAR_17 - VAR_8 + VAR_15), VAR_8);
            return VAR_4;
        } else
        {
            VAR_7 = VAR_12.location.objectid;
        }

        VAR_17 += VAR_15;
    } while (*VAR_17);

    if (VAR_9)
        *VAR_9 = VAR_14;

    if (VAR_10)
    {
        if (!VAR_16)
        {
            VAR_18.objectid = VAR_7;
            VAR_18.type = VAR_2;
            VAR_18.offset = 0;

            if (FUNC_5(VAR_6, &VAR_18, &VAR_13, ((void*)0)))
                return VAR_4;
        }

        *VAR_10 = VAR_13;
    }

    return VAR_7;
}
