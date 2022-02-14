
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ext2fs_hashmap_entry {size_t key_len; struct ext2fs_hashmap_entry* list_prev; struct ext2fs_hashmap_entry* list_next; struct ext2fs_hashmap_entry* next; void const* key; void* data; } ;
struct ext2fs_hashmap {size_t (* hash ) (void const*,size_t) ;size_t size; struct ext2fs_hashmap_entry* last; struct ext2fs_hashmap_entry* first; struct ext2fs_hashmap_entry** entries; } ;


 struct ext2fs_hashmap_entry* FUNC_0 (int) ;
 size_t FUNC_1 (void const*,size_t) ;

void FUNC_2(struct ext2fs_hashmap *VAR_0, void *VAR_1, const void *VAR_2,
   size_t VAR_3)
{
 uint32_t VAR_4 = VAR_0->hash(VAR_2, VAR_3) % VAR_0->size;
 struct ext2fs_hashmap_entry *VAR_5 = FUNC_0(sizeof(*VAR_5));

 if (!VAR_5)
  return;
 VAR_5->data = VAR_1;
 VAR_5->key = VAR_2;
 VAR_5->key_len = VAR_3;
 VAR_5->next = VAR_0->entries[VAR_4];
 VAR_0->entries[VAR_4] = VAR_5;

 VAR_5->list_prev = ((void*)0);
 VAR_5->list_next = VAR_0->first;
 if (VAR_0->first)
  VAR_0->first->list_prev = VAR_5;
 VAR_0->first = VAR_5;
 if (!VAR_0->last)
  VAR_0->last = VAR_5;
}
