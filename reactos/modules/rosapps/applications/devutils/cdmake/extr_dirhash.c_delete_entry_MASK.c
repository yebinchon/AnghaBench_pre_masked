
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_dir_hash {struct target_dir_entry** buckets; } ;
struct target_dir_entry {size_t hashcode; struct target_dir_entry* next_dir_hash_entry; } ;


 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct target_dir_hash *VAR_1, struct target_dir_entry *VAR_2)
{
    struct target_dir_entry **VAR_3;
    VAR_3 = &VAR_1->buckets[VAR_2->hashcode % VAR_0];
    while (*VAR_3 && ((*VAR_3) != VAR_2))
        VAR_3 = &(*VAR_3)->next_dir_hash_entry;
    if (*VAR_3)
        *VAR_3 = (*VAR_3)->next_dir_hash_entry;
}
