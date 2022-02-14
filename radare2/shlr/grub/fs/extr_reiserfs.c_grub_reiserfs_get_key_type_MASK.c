
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_reiserfs_key {int dummy; } ;
typedef enum grub_reiserfs_item_type { ____Placeholder_grub_reiserfs_item_type } grub_reiserfs_item_type ;


 int FUNC_0 (struct grub_reiserfs_key const*) ;
 int FUNC_1 (struct grub_reiserfs_key const*) ;
 int FUNC_2 (struct grub_reiserfs_key const*) ;

__attribute__((used)) static enum grub_reiserfs_item_type
FUNC_3 (const struct grub_reiserfs_key *VAR_0)
{
  if (FUNC_2 (VAR_0) == 1)
    return FUNC_0 (VAR_0);
  else
    return FUNC_1 (VAR_0);
}
