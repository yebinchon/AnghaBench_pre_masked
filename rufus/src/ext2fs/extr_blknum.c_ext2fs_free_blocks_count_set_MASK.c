
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_super_block {int s_free_blocks_hi; scalar_t__ s_free_blocks_count; } ;
typedef scalar_t__ blk64_t ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (struct ext2_super_block*) ;

void FUNC_1(struct ext2_super_block *VAR_0, blk64_t VAR_1)
{
 VAR_0->s_free_blocks_count = VAR_1;
 if (FUNC_0(VAR_0))
  VAR_0->s_free_blocks_hi = (__u64) VAR_1 >> 32;
}
