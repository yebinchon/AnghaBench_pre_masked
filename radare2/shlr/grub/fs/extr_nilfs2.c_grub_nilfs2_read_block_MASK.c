
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_nilfs2_inode {int dummy; } ;
struct grub_nilfs2_data {int dummy; } ;
typedef scalar_t__ grub_uint64_t ;
typedef TYPE_1__* grub_fshelp_node_t ;
typedef int grub_disk_addr_t ;
struct TYPE_3__ {struct grub_nilfs2_inode inode; struct grub_nilfs2_data* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct grub_nilfs2_data*,struct grub_nilfs2_inode*,int,int) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_2 (grub_fshelp_node_t VAR_1, grub_disk_addr_t VAR_2)
{
  struct grub_nilfs2_data *VAR_3 = VAR_1->data;
  struct grub_nilfs2_inode *VAR_4 = &VAR_1->inode;
  grub_uint64_t VAR_5 = -1;

  VAR_5 = FUNC_1 (VAR_3, VAR_4, VAR_2, 1);
  if (VAR_5 == (grub_uint64_t) - 1)
    {
      FUNC_0 (VAR_0, "btree lookup failure");
      return -1;
    }

  return VAR_5;
}
