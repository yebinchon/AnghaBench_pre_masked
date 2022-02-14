
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * extents; int tree; } ;
struct grub_jfs_inode {TYPE_1__ file; } ;
struct grub_jfs_data {int dummy; } ;
struct getblk_closure {unsigned int blk; struct grub_jfs_data* data; } ;


 int FUNC_0 (int *,int *,struct getblk_closure*) ;

__attribute__((used)) static int
FUNC_1 (struct grub_jfs_data *VAR_0, struct grub_jfs_inode *VAR_1,
  unsigned int VAR_2)
{
  struct getblk_closure VAR_3;
  VAR_3.data = VAR_0;
  VAR_3.blk = VAR_2;
  return FUNC_0 (&VAR_1->file.tree, &VAR_1->file.extents[0], &VAR_3);
}
