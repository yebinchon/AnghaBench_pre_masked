
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext3_sb_info {unsigned int s_desc_per_block; TYPE_1__* s_es; } ;
typedef unsigned int ext3_group_t ;
typedef scalar_t__ ext3_fsblk_t ;
struct TYPE_2__ {int s_first_meta_bg; } ;


 int FUNC_0 (struct super_block*,int ) ;
 struct ext3_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct super_block*,unsigned int) ;
 scalar_t__ FUNC_3 (struct super_block*,unsigned int) ;
 unsigned int FUNC_4 (int ) ;

ext3_fsblk_t FUNC_5(struct super_block *VAR_1,
                            ext3_fsblk_t VAR_2, unsigned int VAR_3)
{
    struct ext3_sb_info *VAR_4 = FUNC_1(VAR_1);
    ext3_group_t VAR_5, VAR_6;
    int VAR_7 = 0;

    VAR_6 = FUNC_4(VAR_4->s_es->s_first_meta_bg);

    if (!FUNC_0(VAR_1, VAR_0) ||
            VAR_3 < VAR_6)
        return VAR_2 + VAR_3 + 1;
    VAR_5 = VAR_4->s_desc_per_block * VAR_3;
    if (FUNC_2(VAR_1, VAR_5))
        VAR_7 = 1;
    return (VAR_7 + FUNC_3(VAR_1, VAR_5));
}
