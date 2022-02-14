
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_ext2_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info*,int ) ;int closure; int data; } ;
struct grub_dirhook_info {int mtimeset; int dir; int mtime; } ;
typedef int info ;
typedef TYPE_1__* grub_fshelp_node_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;
struct TYPE_6__ {int mtime; } ;
struct TYPE_5__ {int inode_read; TYPE_4__ inode; int ino; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct grub_dirhook_info*,int ,int) ;
 int FUNC_4 (char const*,struct grub_dirhook_info*,int ) ;

__attribute__((used)) static int
FUNC_5 (const char *VAR_4,
  enum grub_fshelp_filetype VAR_5,
  grub_fshelp_node_t VAR_6,
  void *VAR_7)
{
  struct grub_ext2_dir_closure *VAR_8 = VAR_7;
  struct grub_dirhook_info VAR_9;
  FUNC_3 (&VAR_9, 0, sizeof (VAR_9));
  if (! VAR_6->inode_read)
    {
      FUNC_0 (VAR_8->data, VAR_6->ino, &VAR_6->inode);
      if (!VAR_3)
 VAR_6->inode_read = 1;
      VAR_3 = VAR_0;
    }
  if (VAR_6->inode_read)
    {
      VAR_9.mtimeset = 1;
      VAR_9.mtime = FUNC_2 (VAR_6->inode.mtime);
    }

  VAR_9.dir = ((VAR_5 & VAR_2) == VAR_1);
  FUNC_1 (VAR_6);
  return (VAR_8->hook != ((void*)0))? VAR_8->hook (VAR_4, &VAR_9, VAR_8->closure): 0;
}
