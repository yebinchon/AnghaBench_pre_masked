
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct btrfs_path {int dummy; } ;
struct btrfs_dir_item {int name_len; int data_len; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int FUNC_0 (char const*,char const*,int) ;
 scalar_t__ FUNC_1 (struct btrfs_path*) ;
 TYPE_1__* FUNC_2 (struct btrfs_path*) ;
 scalar_t__ FUNC_3 (struct btrfs_dir_item*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct btrfs_dir_item *FUNC_4(struct btrfs_path *VAR_0, const char *VAR_1, int VAR_2)
{
    struct btrfs_dir_item *VAR_3 = (struct btrfs_dir_item *) FUNC_1(VAR_0);
    u32 VAR_4 = 0, VAR_5;
    const char *VAR_6;

    while (VAR_4 < FUNC_2(VAR_0)->size)
    {
        VAR_5 = sizeof(*VAR_3) + VAR_3->name_len + VAR_3->data_len;
        VAR_6 = (const char *) VAR_3 + sizeof(*VAR_3);

        if (FUNC_3(VAR_3, VAR_4, VAR_5))
            return ((void*)0);
        if (VAR_3->name_len == VAR_2 && !FUNC_0(VAR_6, VAR_1, VAR_2))
            return VAR_3;

        VAR_4 += VAR_5;
        VAR_3 = (struct btrfs_dir_item *) ((u8 *) VAR_3 + VAR_5);
    }

    return ((void*)0);
}
