
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int used; struct hash_entry* buckets; struct hash_entry* entries; scalar_t__ key; int (* free_key ) (void*) ;scalar_t__ value; int (* free_value ) (void*) ;} ;
struct hash_bucket {int used; struct hash_bucket* buckets; struct hash_bucket* entries; scalar_t__ key; int (* free_key ) (void*) ;scalar_t__ value; int (* free_value ) (void*) ;} ;
struct hash {int used; struct hash* buckets; struct hash* entries; scalar_t__ key; int (* free_key ) (void*) ;scalar_t__ value; int (* free_value ) (void*) ;} ;


 int FUNC_0 (struct hash_entry*) ;
 int FUNC_1 (struct hash_entry*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

void FUNC_4(struct hash *VAR_0)
{
    struct hash_bucket *VAR_1, *VAR_2;

    if (VAR_0 == ((void*)0))
        return;

    VAR_1 = VAR_0->buckets;
    VAR_2 = VAR_0->buckets + FUNC_1(VAR_0);
    for (; VAR_1 < VAR_2; VAR_1++) {
        struct hash_entry *VAR_3, *VAR_4;
        VAR_3 = VAR_1->entries;
        VAR_4 = VAR_3 + VAR_1->used;
        for (; VAR_3 < VAR_4; VAR_3++) {
            VAR_0->free_value((void *)VAR_3->value);
            VAR_0->free_key((void *)VAR_3->key);
        }
        FUNC_0(VAR_1->entries);
    }
    FUNC_0(VAR_0->buckets);
    FUNC_0(VAR_0);
}
