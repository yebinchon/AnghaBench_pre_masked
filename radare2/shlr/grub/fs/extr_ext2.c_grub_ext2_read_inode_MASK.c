
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_ext2_sblock {int inodes_per_group; } ;
struct grub_ext2_inode {int dummy; } ;
struct grub_ext2_data {int disk; struct grub_ext2_sblock sblock; } ;
struct grub_ext2_block_group {int inode_table_id; } ;
typedef scalar_t__ grub_err_t ;


 int FUNC_0 (struct grub_ext2_data*) ;
 unsigned int FUNC_1 (struct grub_ext2_data*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_2 (struct grub_ext2_data*) ;
 scalar_t__ FUNC_3 (int ,unsigned int,unsigned int,int,struct grub_ext2_inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct grub_ext2_data*,int,struct grub_ext2_block_group*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_ext2_data *VAR_2,
        int VAR_3, struct grub_ext2_inode *VAR_4)
{
  struct grub_ext2_block_group VAR_5;
  struct grub_ext2_sblock *VAR_6 = &VAR_2->sblock;
  int VAR_7;
  unsigned int VAR_8;
  unsigned int VAR_9;


  VAR_3--;
  int VAR_10 = FUNC_5 (VAR_6->inodes_per_group);
  if (VAR_10 < 1) {
    return VAR_1 = VAR_0;
  }
  FUNC_4 (VAR_2, VAR_3 / VAR_10, &VAR_5);
  if (VAR_1)
    return VAR_1;

  int VAR_11 = FUNC_1 (VAR_2);
  if (VAR_11 < 1) {
    return VAR_1 = VAR_0;
  }
  VAR_7 = FUNC_0 (VAR_2) / VAR_11;
  if (VAR_7 < 1) {
    return VAR_1 = VAR_0;
  }
  VAR_8 = (VAR_3 % FUNC_5 (VAR_6->inodes_per_group))
    / VAR_7;
  VAR_9 = (VAR_3 % FUNC_5 (VAR_6->inodes_per_group))
    % VAR_7;


  if (FUNC_3 (VAR_2->disk,
        ((FUNC_5 (VAR_5.inode_table_id) + VAR_8)
          << FUNC_2 (VAR_2)),
        FUNC_1 (VAR_2) * VAR_9,
        sizeof (struct grub_ext2_inode), VAR_4))
    return VAR_1;

  return 0;
}
