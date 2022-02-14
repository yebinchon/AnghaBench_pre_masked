
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {void const* value; void const* key; } ;
struct hash {scalar_t__ count; scalar_t__ n_buckets_mask; int (* free_key ) (void*) ;int (* free_value ) (void*) ;} ;


 int VAR_0 ;
 struct hash_entry* FUNC_0 (struct hash*,void const*) ;
 int FUNC_1 (struct hash*) ;
 int FUNC_2 (struct hash*,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

int FUNC_5(struct hash *VAR_1, const void *VAR_2, const void *VAR_3)
{
    struct hash_entry *VAR_4 = FUNC_0(VAR_1, VAR_2);

    if (!VAR_4)
        return -VAR_0;

    VAR_1->free_value((void *)VAR_4->value);
    VAR_1->free_key((void *)VAR_4->key);

    VAR_4->key = VAR_2;
    VAR_4->value = VAR_3;

    if (VAR_1->count > VAR_1->n_buckets_mask)
        FUNC_2(VAR_1, FUNC_1(VAR_1) * 2);

    return 0;
}
