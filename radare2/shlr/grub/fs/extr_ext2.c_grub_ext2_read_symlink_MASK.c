
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int symlink; } ;
struct grub_fshelp_node {TYPE_1__ inode; int ino; int data; int inode_read; } ;
typedef struct grub_fshelp_node* grub_fshelp_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct grub_fshelp_node*,int ,int ,int ,int ,size_t,char*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,size_t) ;

__attribute__((used)) static char *
FUNC_6 (grub_fshelp_node_t VAR_1)
{
  char *VAR_2;
  struct grub_fshelp_node *VAR_3 = VAR_1;

  if (! VAR_3->inode_read)
    {
      FUNC_1 (VAR_3->data, VAR_3->ino, &VAR_3->inode);
      if (VAR_0)
 return 0;
    }

  VAR_2 = FUNC_4 (FUNC_3 (VAR_3->inode.size) + 1);
  if (! VAR_2)
    return 0;




  if (FUNC_3 (VAR_3->inode.size) <= 60)
    FUNC_5 (VAR_2,
    VAR_3->inode.symlink,
    FUNC_3 (VAR_3->inode.size));
  else
    {
      FUNC_0 (VAR_3, 0, 0, 0, 0,
      FUNC_3 (VAR_3->inode.size),
      VAR_2);
      if (VAR_0)
 {
   FUNC_2 (VAR_2);
   return 0;
 }
    }

  VAR_2[FUNC_3 (VAR_3->inode.size)] = '\0';
  return VAR_2;
}
