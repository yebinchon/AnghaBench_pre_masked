
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2fs_hashmap_entry {void* data; struct ext2fs_hashmap_entry* list_next; } ;
struct ext2fs_hashmap {struct ext2fs_hashmap_entry* first; } ;



void *FUNC_0(struct ext2fs_hashmap *VAR_0,
       struct ext2fs_hashmap_entry **VAR_1)
{
 *VAR_1 = *VAR_1 ? (*VAR_1)->list_next : VAR_0->first;
 return *VAR_1 ? (*VAR_1)->data : ((void*)0);
}
