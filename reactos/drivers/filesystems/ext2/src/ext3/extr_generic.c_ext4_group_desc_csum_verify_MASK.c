
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_group_desc {scalar_t__ bg_checksum; } ;
struct ext3_sb_info {TYPE_1__* s_es; } ;
typedef int __u32 ;
struct TYPE_2__ {int s_feature_ro_compat; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ext3_sb_info*,int ,struct ext4_group_desc*) ;

int FUNC_2(struct ext3_sb_info *VAR_1, __u32 VAR_2,
                                struct ext4_group_desc *VAR_3)
{
    if ((VAR_1->s_es->s_feature_ro_compat & FUNC_0(VAR_0)) &&
        (VAR_3->bg_checksum != FUNC_1(VAR_1, VAR_2, VAR_3)))
        return 0;

    return 1;
}
