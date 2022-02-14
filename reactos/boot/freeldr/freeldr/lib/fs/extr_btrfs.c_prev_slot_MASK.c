
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_path {int * slots; } ;
struct btrfs_disk_key {int dummy; } ;
struct TYPE_3__ {scalar_t__ objectid; } ;


 int FUNC_0 (struct btrfs_disk_key*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct btrfs_path*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_disk_key *VAR_0,
                     struct btrfs_path *VAR_1)
{
    if (!VAR_1->slots[0])
        return 1;
    --VAR_1->slots[0];
    if (FUNC_1(VAR_1)->objectid && !FUNC_0(VAR_0, FUNC_1(VAR_1)))
        return 0;
    else
        return 1;
}
