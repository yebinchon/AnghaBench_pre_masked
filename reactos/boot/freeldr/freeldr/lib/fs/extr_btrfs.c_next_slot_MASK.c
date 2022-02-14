
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_path {int* itemsnr; int* slots; scalar_t__* offsets; } ;
struct btrfs_disk_key {int dummy; } ;
struct TYPE_3__ {scalar_t__ objectid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,struct btrfs_disk_key*,struct btrfs_path*) ;
 int FUNC_1 (struct btrfs_disk_key*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct btrfs_path*) ;

__attribute__((used)) static int FUNC_3(struct btrfs_disk_key *VAR_1,
                     struct btrfs_path *VAR_2)
{
    int VAR_3, VAR_4 = 1;

    if (!VAR_2->itemsnr[0])
        return 1;
    VAR_3 = VAR_2->slots[0] + 1;
    if (VAR_3 >= VAR_2->itemsnr[0])
    {

        while (VAR_4 < VAR_0)
        {
            if (!VAR_2->itemsnr[VAR_4])
                return 1;
            VAR_3 = VAR_2->slots[VAR_4] + 1;
            if (VAR_3 >= VAR_2->itemsnr[VAR_4])
            {
                VAR_4++;
                continue;;
            }
            VAR_2->slots[VAR_4] = VAR_3;
            VAR_2->slots[VAR_4 - 1] = 0;
            VAR_2->itemsnr[VAR_4 - 1] = 0;
            VAR_2->offsets[VAR_4 - 1] = 0;
            FUNC_0(VAR_2->offsets[VAR_4], VAR_4, VAR_1, VAR_2);
            break;
        }
        if (VAR_4 == VAR_0)
            return 1;
        goto out;
    }
    VAR_2->slots[0] = VAR_3;

out:
    if (FUNC_2(VAR_2)->objectid && !FUNC_1(VAR_1, FUNC_2(VAR_2)))
        return 0;
    else
        return 1;
}
