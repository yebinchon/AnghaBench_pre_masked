
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {scalar_t__ key; scalar_t__ value; } ;
struct hash_bucket {int used; int total; struct hash_entry* entries; } ;
struct hash {unsigned int (* hash_value ) (void const*) ;unsigned int n_buckets_mask; int count; int (* free_key ) (void*) ;int (* free_value ) (void*) ;struct hash_bucket* buckets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hash_entry* FUNC_0 (struct hash*,void const*,unsigned int) ;
 int FUNC_1 (struct hash*) ;
 int FUNC_2 (struct hash_entry*,struct hash_entry*,int) ;
 struct hash_entry* FUNC_3 (struct hash_entry*,unsigned int,int) ;
 int FUNC_4 (struct hash*,int) ;
 unsigned int FUNC_5 (void const*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;

int FUNC_8(struct hash *VAR_3, const void *VAR_4)
{
    unsigned int VAR_5 = VAR_3->hash_value(VAR_4);
    unsigned int VAR_6 = VAR_5 & VAR_3->n_buckets_mask;
    struct hash_bucket *VAR_7 = VAR_3->buckets + VAR_6;
    struct hash_entry *VAR_8;

    VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5);
    if (VAR_8 == ((void*)0))
        return -VAR_0;

    VAR_3->free_value((void *)VAR_8->value);
    VAR_3->free_key((void *)VAR_8->key);

    if (VAR_7->used > 1) {





        struct hash_entry *VAR_9 = VAR_7->entries + VAR_7->used - 1;

        if (VAR_8 != VAR_9)
            FUNC_2(VAR_8, VAR_9, sizeof(*VAR_8));
    }

    VAR_7->used--;
    VAR_3->count--;

    if (VAR_3->n_buckets_mask > (VAR_1 - 1) && VAR_3->count < VAR_3->n_buckets_mask / 2) {
        FUNC_4(VAR_3, FUNC_1(VAR_3) / 2);
    } else {
        unsigned int VAR_10 = VAR_7->used / VAR_2;
        unsigned int VAR_11 = VAR_7->total / VAR_2;

        if (VAR_10 + 1 < VAR_11) {
            struct hash_entry *VAR_12 = FUNC_3(
                VAR_7->entries, VAR_10 + 1, VAR_2 * sizeof(*VAR_12));
            if (VAR_12) {
                VAR_7->entries = VAR_12;
                VAR_7->total = (VAR_10 + 1) * VAR_2;
            }
        }
    }

    return 0;
}
