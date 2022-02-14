
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {scalar_t__ s_groups_count; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_2 (struct super_block*,scalar_t__,struct buffer_head**) ;
 int FUNC_3 (struct buffer_head**) ;
 int FUNC_4 () ;

ext4_fsblk_t FUNC_5(struct super_block *VAR_0)
{
    ext4_fsblk_t VAR_1;
    struct ext4_group_desc *VAR_2;
    struct buffer_head *VAR_3 = ((void*)0);
    ext4_group_t VAR_4;
    ext4_group_t VAR_5 = FUNC_0(VAR_0)->s_groups_count;

    VAR_1 = 0;
    FUNC_4();
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        VAR_2 = FUNC_2(VAR_0, VAR_4, &VAR_3);
        if (!VAR_3)
            continue;
        VAR_1 += FUNC_1(VAR_0, VAR_2);
        FUNC_3(&VAR_3);
    }

    return VAR_1;
}
