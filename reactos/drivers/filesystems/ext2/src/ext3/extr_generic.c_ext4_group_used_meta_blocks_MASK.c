
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
struct ext3_sb_info {int s_itb_per_group; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 struct ext3_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_3 (struct super_block*,scalar_t__,int ) ;
 struct ext4_group_desc* FUNC_4 (struct super_block*,int ,struct buffer_head**) ;
 scalar_t__ FUNC_5 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_6 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_7 (struct buffer_head**) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_1,
                                       ext4_group_t VAR_2)
{
    ext4_fsblk_t VAR_3;
    struct ext3_sb_info *VAR_4 = FUNC_1(VAR_1);

    int VAR_5 = VAR_4->s_itb_per_group + 2;

    if (FUNC_0(VAR_1, VAR_0)) {
        struct ext4_group_desc *VAR_6;
        struct buffer_head *VAR_7 = ((void*)0);

        VAR_6 = FUNC_4(VAR_1, VAR_2, &VAR_7);
        if (!FUNC_3(VAR_1, FUNC_2(VAR_1, VAR_6),
                                 VAR_2))
            VAR_5--;

        if (!FUNC_3(VAR_1, FUNC_5(VAR_1, VAR_6),
                                 VAR_2))
            VAR_5--;

        VAR_3 = FUNC_6(VAR_1, VAR_6);
        for (; VAR_3 < FUNC_6(VAR_1, VAR_6) +
                VAR_4->s_itb_per_group; VAR_3++) {
            if (!FUNC_3(VAR_1, VAR_3, VAR_2))
                VAR_5 -= 1;
        }
        if (VAR_7)
            FUNC_7(&VAR_7);
    }
    return VAR_5;
}
