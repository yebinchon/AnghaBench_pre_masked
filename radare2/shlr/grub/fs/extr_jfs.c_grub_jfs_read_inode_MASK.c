
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct grub_jfs_inode {TYPE_1__* inodes; } ;
struct grub_jfs_iag {TYPE_1__* inodes; } ;
struct TYPE_4__ {int log2_blksz; } ;
struct grub_jfs_data {int disk; TYPE_2__ sblock; int fileset; } ;
typedef int grub_uint32_t ;
typedef scalar_t__ grub_err_t ;
struct TYPE_3__ {int blk2; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,struct grub_jfs_inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct grub_jfs_data*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static grub_err_t
FUNC_4 (struct grub_jfs_data *VAR_2, int VAR_3,
       struct grub_jfs_inode *VAR_4)
{
  struct grub_jfs_iag VAR_5;
  int VAR_6 = VAR_3 / 4096;
  int VAR_7 = (VAR_3 % 4096) / 32;
  int VAR_8 = (VAR_3 % 4096) % 32;
  grub_uint32_t VAR_9;
  grub_uint32_t VAR_10;

  VAR_9 = FUNC_1 (VAR_2, &VAR_2->fileset, VAR_6 + 1);
  if (VAR_1)
    return VAR_1;


  if (FUNC_0 (VAR_2->disk,
        VAR_9 << (FUNC_2 (VAR_2->sblock.log2_blksz)
     - VAR_0), 0,
        sizeof (struct grub_jfs_iag), &VAR_5))
    return VAR_1;

  VAR_10 = FUNC_3 (VAR_5.inodes[VAR_7].blk2);
  VAR_10 <<= (FUNC_2 (VAR_2->sblock.log2_blksz)
       - VAR_0);
  VAR_10 += VAR_8;

  if (FUNC_0 (VAR_2->disk, VAR_10, 0,
        sizeof (struct grub_jfs_inode), VAR_4))
    return VAR_1;

  return 0;
}
