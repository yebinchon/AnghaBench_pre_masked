
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {void const* value; void const* key; } ;
struct hash {scalar_t__ count; scalar_t__ n_buckets_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hash_entry* FUNC_0 (struct hash*,void const*) ;
 int FUNC_1 (struct hash*) ;
 int FUNC_2 (struct hash*,int) ;

int FUNC_3(struct hash *VAR_2, const void *VAR_3, const void *VAR_4)
{
    struct hash_entry *VAR_5 = FUNC_0(VAR_2, VAR_3);

    if (!VAR_5)
        return -VAR_1;

    if (VAR_5->key || VAR_5->value)
        return -VAR_0;

    VAR_5->key = VAR_3;
    VAR_5->value = VAR_4;

    if (VAR_2->count > VAR_2->n_buckets_mask)
        FUNC_2(VAR_2, FUNC_1(VAR_2) * 2);

    return 0;
}
