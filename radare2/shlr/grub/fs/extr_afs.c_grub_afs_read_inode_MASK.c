
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_afs_inode {int dummy; } ;
struct TYPE_2__ {int block_size; } ;
struct grub_afs_data {TYPE_1__ sblock; int disk; } ;
typedef int grub_uint32_t ;
typedef int grub_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int,struct grub_afs_inode*) ;

__attribute__((used)) static grub_err_t
FUNC_1 (struct grub_afs_data *VAR_1,
                     grub_uint32_t VAR_2, struct grub_afs_inode *VAR_3)
{
  return FUNC_0 (VAR_1->disk,
                         VAR_2 *
                         (VAR_1->sblock.block_size >> VAR_0),
                         0, sizeof (struct grub_afs_inode),
                         VAR_3);
}
