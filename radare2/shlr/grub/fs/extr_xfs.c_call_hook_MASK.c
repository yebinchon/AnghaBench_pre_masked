
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_xfs_iterate_dir_closure {int (* hook ) (char*,int ,struct grub_fshelp_node*,int ) ;int closure; TYPE_2__* diro; } ;
struct grub_xfs_inode {int dummy; } ;
struct TYPE_8__ {int mode; } ;
struct grub_fshelp_node {int inode_read; TYPE_4__ inode; TYPE_3__* data; int ino; } ;
typedef int grub_uint64_t ;
struct TYPE_5__ {int log2_inode; } ;
struct TYPE_7__ {TYPE_1__ sblock; } ;
struct TYPE_6__ {TYPE_3__* data; } ;


 struct grub_fshelp_node* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_3 (char*,int ,struct grub_fshelp_node*,int ) ;

__attribute__((used)) static int
FUNC_4 (grub_uint64_t VAR_0, char *VAR_1,
    struct grub_xfs_iterate_dir_closure *VAR_2)
{
  struct grub_fshelp_node *VAR_3;

  VAR_3 = FUNC_0 (sizeof (struct grub_fshelp_node)
         - sizeof (struct grub_xfs_inode)
         + (1 << VAR_2->diro->data->sblock.log2_inode));
  if (!VAR_3)
    return 0;



  VAR_3->ino = VAR_0;
  VAR_3->inode_read = 1;
  VAR_3->data = VAR_2->diro->data;
  FUNC_2 (VAR_3->data, VAR_0, &VAR_3->inode);

  if (VAR_2->hook)
    return VAR_2->hook (VAR_1,
    FUNC_1 (VAR_3->inode.mode),
    VAR_3, VAR_2->closure);
  return 0;
}
