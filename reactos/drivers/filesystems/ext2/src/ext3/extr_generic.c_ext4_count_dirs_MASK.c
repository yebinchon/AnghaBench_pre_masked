
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ext4_group_t ;
struct TYPE_2__ {scalar_t__ s_groups_count; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 struct ext4_group_desc* FUNC_1 (struct super_block*,scalar_t__,struct buffer_head**) ;
 scalar_t__ FUNC_2 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_3 (struct buffer_head**) ;

unsigned long FUNC_4(struct super_block * VAR_0)
{
    struct ext4_group_desc *VAR_1;
    struct buffer_head *VAR_2 = ((void*)0);
    unsigned long VAR_3 = 0;
    ext4_group_t VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0)->s_groups_count; VAR_4++) {
        VAR_1 = FUNC_1(VAR_0, VAR_4, &VAR_2);
        if (!VAR_2)
            continue;
        VAR_3 += FUNC_2(VAR_0, VAR_1);
        FUNC_3(&VAR_2);
    }
    return VAR_3;
}
