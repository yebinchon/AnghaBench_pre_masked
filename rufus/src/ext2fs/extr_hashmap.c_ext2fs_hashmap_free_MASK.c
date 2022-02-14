
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2fs_hashmap_entry {size_t size; int data; int (* free ) (int ) ;struct ext2fs_hashmap_entry* next; struct ext2fs_hashmap_entry** entries; } ;
struct ext2fs_hashmap {size_t size; int data; int (* free ) (int ) ;struct ext2fs_hashmap* next; struct ext2fs_hashmap** entries; } ;


 int FUNC_0 (struct ext2fs_hashmap_entry*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ext2fs_hashmap *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->size; ++VAR_1) {
  struct ext2fs_hashmap_entry *VAR_2 = VAR_0->entries[VAR_1];
  while (VAR_2) {
   struct ext2fs_hashmap_entry *VAR_3 = VAR_2->next;
   if (VAR_0->free)
    VAR_0->free(VAR_2->data);
   FUNC_0(VAR_2);
   VAR_2 = VAR_3;
  }
 }
 FUNC_0(VAR_0);
}
