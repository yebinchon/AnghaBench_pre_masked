
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_group_desc {void* bg_itable_unused_hi; void* bg_itable_unused; } ;
typedef int __u32 ;
typedef int __u16 ;


 scalar_t__ FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int) ;

void FUNC_2(struct super_block *VAR_1,
                            struct ext4_group_desc *VAR_2, __u32 VAR_3)
{
    VAR_2->bg_itable_unused = FUNC_1((__u16)VAR_3);
    if (FUNC_0(VAR_1) >= VAR_0)
        VAR_2->bg_itable_unused_hi = FUNC_1(VAR_3 >> 16);
}
