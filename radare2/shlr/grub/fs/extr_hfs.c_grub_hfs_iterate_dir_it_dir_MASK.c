
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfs_record {struct grub_hfs_catalog_key* key; } ;
struct grub_hfs_node {int dummy; } ;
struct grub_hfs_iterate_dir_closure {int (* hook ) (struct grub_hfs_record*,int ) ;int closure; struct grub_hfs_catalog_key* key; } ;
struct grub_hfs_catalog_key {int parent_dir; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct grub_hfs_record*,int ) ;

__attribute__((used)) static int
FUNC_2 (struct grub_hfs_node *VAR_0,
        struct grub_hfs_record *VAR_1,
        void *VAR_2)
{
  struct grub_hfs_iterate_dir_closure *VAR_3 = VAR_2;
  struct grub_hfs_catalog_key *VAR_4 = VAR_1->key;
  struct grub_hfs_catalog_key *VAR_5 = VAR_3->key;


  if (FUNC_0 (VAR_4->parent_dir)
      != FUNC_0 ((VAR_5)->parent_dir))
    return 1;

  return VAR_3->hook (VAR_1, VAR_3->closure);
}
