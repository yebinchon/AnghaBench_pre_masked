
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_size; } ;
struct grub_fshelp_node {TYPE_1__ inode; int ino; int data; int inode_read; } ;
typedef struct grub_fshelp_node* grub_fshelp_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct grub_fshelp_node*,int ,int ,int ,int ,size_t,char*) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_5 (grub_fshelp_node_t VAR_1)
{
  char *VAR_2;
  struct grub_fshelp_node *VAR_3 = VAR_1;

  if (!VAR_3->inode_read)
    {
      FUNC_4 (VAR_3->data, VAR_3->ino, &VAR_3->inode);
      if (VAR_0)
 return 0;
    }

  VAR_2 = FUNC_2 (FUNC_1 (VAR_3->inode.i_size) + 1);
  if (!VAR_2)
    return 0;

  FUNC_3 (VAR_3, 0, 0, 0, 0,
    FUNC_1 (VAR_3->inode.i_size), VAR_2);
  if (VAR_0)
    {
      FUNC_0 (VAR_2);
      return 0;
    }

  VAR_2[FUNC_1 (VAR_3->inode.i_size)] = '\0';
  return VAR_2;
}
