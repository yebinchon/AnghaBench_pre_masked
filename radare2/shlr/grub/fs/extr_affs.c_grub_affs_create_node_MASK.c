
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_fshelp_node {int size; int block; int parent; int data; } ;
struct grub_affs_iterate_dir_closure {int hashtable; int closure; scalar_t__ (* hook ) (char const*,int,struct grub_fshelp_node*,int ) ;TYPE_1__* file; int data; struct grub_fshelp_node* node; } ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct grub_fshelp_node* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*,int,struct grub_fshelp_node*,int ) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_0, int VAR_1,
         int VAR_2, int VAR_3,
         struct grub_affs_iterate_dir_closure *VAR_4)
{
  struct grub_fshelp_node *VAR_5;

  VAR_5 = FUNC_2 (sizeof (*VAR_5));
  VAR_4->node = VAR_5;
  if (!VAR_5)
    {
      FUNC_1 (VAR_4->hashtable);
      return 1;
    }

  VAR_5->data = VAR_4->data;
  VAR_5->size = VAR_2;
  VAR_5->block = VAR_1;
  VAR_5->parent = FUNC_0 (VAR_4->file->parent);

  if (VAR_4->hook (VAR_0, VAR_3, VAR_5, VAR_4->closure))
    {
      FUNC_1 (VAR_4->hashtable);
      return 1;
    }
  return 0;
}
