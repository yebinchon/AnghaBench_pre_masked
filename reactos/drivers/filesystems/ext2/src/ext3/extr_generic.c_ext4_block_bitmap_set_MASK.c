
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int dummy; } ;
struct ext4_group_desc {void* bg_block_bitmap_hi; void* bg_block_bitmap; } ;
typedef int ext4_fsblk_t ;


 scalar_t__ FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int) ;

void FUNC_2(struct super_block *VAR_1,
                           struct ext4_group_desc *VAR_2, ext4_fsblk_t VAR_3)
{
    VAR_2->bg_block_bitmap = FUNC_1((u32)VAR_3);
    if (FUNC_0(VAR_1) >= VAR_0)
        VAR_2->bg_block_bitmap_hi = FUNC_1(VAR_3 >> 32);
}
