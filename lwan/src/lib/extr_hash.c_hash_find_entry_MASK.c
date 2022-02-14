
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {unsigned int hashval; int key; } ;
struct hash_bucket {int used; struct hash_entry* entries; } ;
struct hash {unsigned int n_buckets_mask; scalar_t__ (* key_compare ) (char const*,int ) ;struct hash_bucket* buckets; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static inline struct hash_entry *
FUNC_1(const struct hash *VAR_0, const char *VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3 = VAR_2 & VAR_0->n_buckets_mask;
    const struct hash_bucket *VAR_4 = VAR_0->buckets + VAR_3;
    struct hash_entry *VAR_5, *VAR_6;

    VAR_5 = VAR_4->entries;
    VAR_6 = VAR_5 + VAR_4->used;
    for (; VAR_5 < VAR_6; VAR_5++) {
        if (VAR_2 != VAR_5->hashval)
            continue;
        if (VAR_0->key_compare(VAR_1, VAR_5->key) == 0)
            return VAR_5;
    }

    return ((void*)0);
}
