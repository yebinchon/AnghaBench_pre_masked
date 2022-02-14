
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_super_block {int s_blocks_count; scalar_t__ s_blocks_count_hi; } ;
typedef int blk64_t ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (struct ext2_super_block*) ;

blk64_t FUNC_1(struct ext2_super_block *VAR_0)
{
 return VAR_0->s_blocks_count |
  (FUNC_0(VAR_0) ?
  (__u64) VAR_0->s_blocks_count_hi << 32 : 0);
}
