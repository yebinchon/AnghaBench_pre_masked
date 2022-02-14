
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct grub_afs_sblock {int magic1; int magic2; int magic3; int block_shift; int block_size; int used_blocks; int num_blocks; int inode_size; int alloc_group_count; int alloc_group_shift; int block_per_group; int log_size; int valid_log_blocks; TYPE_1__ log_block; } ;
typedef int grub_uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3 (struct grub_afs_sblock *VAR_3)
{
  if (FUNC_1 (VAR_3->magic1) == VAR_0)
    {
      VAR_3->magic2 = FUNC_1 (VAR_3->magic2);
      VAR_3->magic3 = FUNC_1 (VAR_3->magic3);
      VAR_3->block_shift = FUNC_1 (VAR_3->block_shift);
      VAR_3->block_size = FUNC_1 (VAR_3->block_size);
      VAR_3->used_blocks = FUNC_2 (VAR_3->used_blocks);
      VAR_3->num_blocks = FUNC_2 (VAR_3->num_blocks);
      VAR_3->inode_size = FUNC_1 (VAR_3->inode_size);
      VAR_3->alloc_group_count = FUNC_1 (VAR_3->alloc_group_count);
      VAR_3->alloc_group_shift = FUNC_1 (VAR_3->alloc_group_shift);
      VAR_3->block_per_group = FUNC_1 (VAR_3->block_per_group);
      VAR_3->alloc_group_count = FUNC_1 (VAR_3->alloc_group_count);
      VAR_3->log_size = FUNC_1 (VAR_3->log_size);
    }
  else
    return 0;

  if ((VAR_3->magic2 != VAR_1) ||
      (VAR_3->magic3 != VAR_2))
    return 0;





  if (((grub_uint32_t) (1 << VAR_3->block_shift) != VAR_3->block_size)
      || (VAR_3->used_blocks > VAR_3->num_blocks )
      || (VAR_3->inode_size != VAR_3->block_size)
      || (0 == VAR_3->block_size)

      || ((grub_uint32_t) (1 << VAR_3->alloc_group_shift) !=
   VAR_3->block_per_group * VAR_3->block_size)
      || (VAR_3->alloc_group_count * VAR_3->block_per_group < VAR_3->num_blocks)
      || (FUNC_0 (VAR_3->log_block.len) != VAR_3->log_size)
      || (FUNC_1 (VAR_3->valid_log_blocks) > VAR_3->log_size)

      )
    return 0;

  return 1;
}
