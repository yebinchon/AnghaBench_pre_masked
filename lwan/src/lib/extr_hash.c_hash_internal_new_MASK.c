
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_bucket {int dummy; } ;
struct hash {unsigned int (* hash_value ) (void const*) ;int (* key_compare ) (void const*,void const*) ;void (* free_value ) (void*) ;void (* free_key ) (void*) ;scalar_t__ count; scalar_t__ n_buckets_mask; int * buckets; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct hash*) ;
 struct hash* FUNC_2 (int) ;

__attribute__((used)) static struct hash *
FUNC_3(unsigned int (*VAR_1)(const void *VAR_2),
                  int (*VAR_3)(const void *VAR_4, const void *VAR_5),
                  void (*VAR_6)(void *VAR_7),
                  void (*VAR_8)(void *VAR_9))
{
    struct hash *VAR_10 = FUNC_2(sizeof(*VAR_10));

    if (VAR_10 == ((void*)0))
        return ((void*)0);

    VAR_10->buckets = FUNC_0(VAR_0, sizeof(struct hash_bucket));
    if (VAR_10->buckets == ((void*)0)) {
        FUNC_1(VAR_10);
        return ((void*)0);
    }

    VAR_10->hash_value = VAR_1;
    VAR_10->key_compare = VAR_3;

    VAR_10->free_value = VAR_8;
    VAR_10->free_key = VAR_6;

    VAR_10->n_buckets_mask = VAR_0 - 1;
    VAR_10->count = 0;

    return VAR_10;
}
