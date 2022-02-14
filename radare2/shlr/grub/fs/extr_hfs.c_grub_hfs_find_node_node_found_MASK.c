
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfs_record {scalar_t__ datalen; scalar_t__ data; int key; } ;
struct grub_hfs_node {scalar_t__ type; } ;
struct grub_hfs_find_node_closure {scalar_t__ type; int isleaf; int done; scalar_t__ datalen; int datar; int found; scalar_t__ key; } ;
typedef int grub_uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4 (struct grub_hfs_node *VAR_1,
          struct grub_hfs_record *VAR_2,
          void *VAR_3)
{
  struct grub_hfs_find_node_closure *VAR_4 = VAR_3;
  int VAR_5 = 1;

  if (VAR_4->type == 0)
    VAR_5 = FUNC_1 (VAR_2->key, (void *) VAR_4->key);
  else
    VAR_5 = FUNC_2 (VAR_2->key, (void *) VAR_4->key);




  if (VAR_5 <= 0)
    {
      grub_uint32_t *VAR_6 = (grub_uint32_t *) VAR_2->data;
      VAR_4->found = FUNC_0 (*VAR_6);
    }
  else
    return 1;


  if (VAR_1->type == VAR_0)
    {
      VAR_4->isleaf = 1;


      if (VAR_5 == 0)
 {
   VAR_4->done = 1;

   FUNC_3 (VAR_4->datar, VAR_2->data,
         VAR_2->datalen < VAR_4->datalen ? VAR_2->datalen : VAR_4->datalen);
   return 1;
 }
    }

  return 0;
}
