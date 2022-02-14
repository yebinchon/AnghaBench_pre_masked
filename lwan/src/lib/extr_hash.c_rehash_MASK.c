
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int used; struct hash_entry* entries; int value; int key; int hashval; } ;
struct hash_bucket {int used; struct hash_bucket* entries; int value; int key; int hashval; } ;
struct hash {scalar_t__ count; unsigned int n_buckets_mask; struct hash_entry* buckets; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct hash_entry* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (struct hash_entry*) ;
 struct hash_entry* FUNC_4 (struct hash*,int ,int ) ;
 unsigned int FUNC_5 (struct hash*) ;

__attribute__((used)) static void FUNC_6(struct hash *VAR_0, unsigned int VAR_1)
{
    struct hash_bucket *VAR_2 = FUNC_2(VAR_1, sizeof(*VAR_2));
    const struct hash_bucket *VAR_3 = VAR_0->buckets + FUNC_5(VAR_0);
    const struct hash_bucket *VAR_4;
    struct hash VAR_5 = *VAR_0;

    FUNC_1((VAR_1 & (VAR_1 - 1)) == 0);
    FUNC_1(FUNC_5(VAR_0) != VAR_1);

    if (VAR_2 == ((void*)0))
        return;

    VAR_5.count = 0;
    VAR_5.n_buckets_mask = VAR_1 - 1;
    VAR_5.buckets = VAR_2;

    for (VAR_4 = VAR_0->buckets; VAR_4 < VAR_3; VAR_4++) {
        const struct hash_entry *VAR_6 = VAR_4->entries;
        const struct hash_entry *VAR_7 = VAR_6 + VAR_4->used;

        for (; VAR_6 < VAR_7; VAR_6++) {
            struct hash_entry *VAR_8;

            VAR_8 = FUNC_4(&VAR_5, VAR_6->key, VAR_6->hashval);
            if (FUNC_0(!VAR_8))
                goto fail;

            VAR_8->key = VAR_6->key;
            VAR_8->value = VAR_6->value;
        }
    }




    for (VAR_4 = VAR_0->buckets; VAR_4 < VAR_3; VAR_4++)
        FUNC_3(VAR_4->entries);
    FUNC_3(VAR_0->buckets);

    VAR_0->buckets = VAR_2;
    VAR_0->n_buckets_mask = VAR_1 - 1;

    FUNC_1(VAR_5.count == VAR_0->count);

    return;

fail:
    for (VAR_3 = VAR_4, VAR_4 = VAR_0->buckets; VAR_4 < VAR_3;
         VAR_4++)
        FUNC_3(VAR_4->entries);

    FUNC_3(VAR_2);
}
