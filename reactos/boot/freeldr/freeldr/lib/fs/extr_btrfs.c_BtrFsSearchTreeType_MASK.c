
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct btrfs_root_item {int level; int bytenr; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_disk_key {scalar_t__ offset; int type; int objectid; } ;
struct TYPE_3__ {scalar_t__ objectid; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct btrfs_disk_key*,struct btrfs_path*) ;
 int FUNC_1 (struct btrfs_disk_key*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct btrfs_path*) ;

__attribute__((used)) static inline BOOLEAN
FUNC_3(const struct btrfs_root_item *VAR_2, u64 VAR_3, u8 VAR_4, struct btrfs_path *VAR_5)
{
    struct btrfs_disk_key VAR_6;

    VAR_6.objectid = VAR_3;
    VAR_6.type = VAR_4;
    VAR_6.offset = 0;

    FUNC_0(VAR_2->bytenr, VAR_2->level, &VAR_6, VAR_5);

    if (FUNC_2(VAR_5)->objectid && !FUNC_1(&VAR_6, FUNC_2(VAR_5)))
        return VAR_1;
    else
        return VAR_0;
}
