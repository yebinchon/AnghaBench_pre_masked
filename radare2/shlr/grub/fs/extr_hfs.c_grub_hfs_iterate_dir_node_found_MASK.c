
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfs_record {scalar_t__ data; struct grub_hfs_catalog_key* key; } ;
struct grub_hfs_node {int type; int next; } ;
struct grub_hfs_iterate_dir_closure {int isleaf; scalar_t__ dir; int (* hook ) (struct grub_hfs_record*,int ) ;int closure; scalar_t__ next; scalar_t__ found; scalar_t__ key; } ;
struct grub_hfs_catalog_key {scalar_t__ strlen; int parent_dir; } ;
typedef int grub_uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct grub_hfs_catalog_key*,void*) ;
 int FUNC_2 (struct grub_hfs_record*,int ) ;

__attribute__((used)) static int
FUNC_3 (struct grub_hfs_node *VAR_0,
     struct grub_hfs_record *VAR_1,
     void *VAR_2)
{
  struct grub_hfs_iterate_dir_closure *VAR_3 = VAR_2;
  struct grub_hfs_catalog_key *VAR_4 = VAR_1->key;

  if (FUNC_1 (VAR_1->key, (void *) VAR_3->key) <= 0)
    VAR_3->found = FUNC_0 (*(grub_uint32_t *) VAR_1->data);

  if (VAR_0->type == 0xFF && VAR_4->strlen > 0)
    {
      VAR_3->isleaf = 1;
      VAR_3->next = FUNC_0 (VAR_0->next);


      if (FUNC_0 (VAR_4->parent_dir) == VAR_3->dir)
 return VAR_3->hook?VAR_3->hook (VAR_1, VAR_3->closure): 0;
    }

  return 0;
}
