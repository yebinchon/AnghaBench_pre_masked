
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nested_table {struct rhash_lock_head* bucket; int table; } ;
struct rhashtable {int dummy; } ;
struct rhash_lock_head {int dummy; } ;
struct bucket_table {int nest; unsigned int size; int * buckets; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 union nested_table* FUNC_1 (struct rhashtable*,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;

struct rhash_lock_head **FUNC_3(struct rhashtable *VAR_1,
        struct bucket_table *VAR_2,
        unsigned int VAR_3)
{
 const unsigned int VAR_4 = VAR_0 - FUNC_0(sizeof(void *));
 unsigned int VAR_5 = VAR_3 & ((1 << VAR_2->nest) - 1);
 unsigned int VAR_6 = VAR_2->size >> VAR_2->nest;
 union nested_table *VAR_7;

 VAR_7 = (union nested_table *)FUNC_2(VAR_2->buckets[0]);
 VAR_3 >>= VAR_2->nest;
 VAR_7 = FUNC_1(VAR_1, &VAR_7[VAR_5].table,
      VAR_6 <= (1 << VAR_4));

 while (VAR_7 && VAR_6 > (1 << VAR_4)) {
  VAR_5 = VAR_3 & ((1 << VAR_4) - 1);
  VAR_6 >>= VAR_4;
  VAR_3 >>= VAR_4;
  VAR_7 = FUNC_1(VAR_1, &VAR_7[VAR_5].table,
       VAR_6 <= (1 << VAR_4));
 }

 if (!VAR_7)
  return ((void*)0);

 return &VAR_7[VAR_3].bucket;

}
