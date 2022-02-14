
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_file_extent_item {scalar_t__ type; } ;
struct btrfs_disk_key {scalar_t__ offset; int type; scalar_t__ objectid; } ;
struct TYPE_4__ {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct btrfs_root_item const*,struct btrfs_disk_key*,struct btrfs_path*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct btrfs_disk_key*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct btrfs_disk_key*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct btrfs_path*,struct btrfs_file_extent_item*,scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (struct btrfs_path*,struct btrfs_file_extent_item*,scalar_t__,scalar_t__,char*) ;
 int FUNC_7 (struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_path*) ;
 int FUNC_9 (struct btrfs_disk_key*,struct btrfs_path*) ;
 scalar_t__ FUNC_10 (struct btrfs_path*) ;
 TYPE_1__* FUNC_11 (struct btrfs_path*) ;
 scalar_t__ FUNC_12 (struct btrfs_disk_key*,struct btrfs_path*) ;

__attribute__((used)) static u64 FUNC_13(const struct btrfs_root_item *VAR_3, u64 VAR_4, u64 VAR_5, u64 VAR_6, char *VAR_7)
{
    struct btrfs_path VAR_8;
    struct btrfs_disk_key VAR_9;
    struct btrfs_file_extent_item *VAR_10;
    int VAR_11 = 0;
    u64 VAR_12, VAR_13 = VAR_2, VAR_14;
    BOOLEAN VAR_15;

    FUNC_2("btrfs_file_read inr=%llu offset=%llu size=%llu\n", VAR_4, VAR_5, VAR_6);

    VAR_9.objectid = VAR_4;
    VAR_9.type = VAR_0;
    VAR_9.offset = VAR_5;
    FUNC_8(&VAR_8);

    VAR_15 = FUNC_0(VAR_3, &VAR_9, &VAR_8);


    if (!VAR_15 && FUNC_3(&VAR_9, FUNC_11(&VAR_8)) < 0)
    {
        if (FUNC_12(&VAR_9, &VAR_8))
            goto out;

    } else if (FUNC_4(&VAR_9, FUNC_11(&VAR_8)))
    {
        goto out;
    }

    VAR_13 = VAR_5;

    do
    {
        FUNC_2("Current extent: (%llu %u %llu) \n",
              FUNC_11(&VAR_8)->objectid,
              FUNC_11(&VAR_8)->type,
              FUNC_11(&VAR_8)->offset);

        VAR_10 = (struct btrfs_file_extent_item *) FUNC_10(&VAR_8);

        VAR_14 = VAR_13;

        if ((VAR_13) >= FUNC_11(&VAR_8)->offset)
            VAR_14 -= FUNC_11(&VAR_8)->offset;

        if (VAR_10->type == VAR_1)
        {
            VAR_12 = FUNC_5(&VAR_8, VAR_10, VAR_14, VAR_6, VAR_7);
        }
        else
        {
            VAR_12 = FUNC_6(&VAR_8, VAR_10, VAR_14, VAR_6, VAR_7);
        }

        if (VAR_12 == VAR_2)
        {
            FUNC_1("Error while reading extent\n");
            VAR_13 = VAR_2;
            goto out;
        }

        VAR_7 += VAR_12;
        VAR_13 += VAR_12;
        VAR_6 -= VAR_12;
        FUNC_2("file_read size=%llu rd=%llu seek_pointer=%llu\n", VAR_6, VAR_12, VAR_13);

        if (!VAR_6)
            break;
    } while (!(VAR_11 = FUNC_9(&VAR_9, &VAR_8)));

    if (VAR_11)
    {
        VAR_13 = VAR_2;
        goto out;
    }

    VAR_13 -= VAR_5;
out:
    FUNC_7(&VAR_8);
    return VAR_13;
}
