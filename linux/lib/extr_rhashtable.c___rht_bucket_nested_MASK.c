
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nested_table {struct rhash_lock_head* bucket; int table; } ;
struct rhash_lock_head {int dummy; } ;
struct bucket_table {int nest; unsigned int size; int * buckets; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 union nested_table* FUNC_2 (int ,struct bucket_table const*,unsigned int) ;

struct rhash_lock_head **FUNC_3(const struct bucket_table *VAR_1,
          unsigned int VAR_2)
{
 const unsigned int VAR_3 = VAR_0 - FUNC_0(sizeof(void *));
 unsigned int VAR_4 = VAR_2 & ((1 << VAR_1->nest) - 1);
 unsigned int VAR_5 = VAR_1->size >> VAR_1->nest;
 unsigned int VAR_6 = VAR_2;
 union nested_table *VAR_7;

 VAR_7 = (union nested_table *)FUNC_1(VAR_1->buckets[0]);
 VAR_7 = FUNC_2(VAR_7[VAR_4].table, VAR_1, VAR_2);
 VAR_6 >>= VAR_1->nest;

 while (VAR_7 && VAR_5 > (1 << VAR_3)) {
  VAR_4 = VAR_6 & ((1 << VAR_3) - 1);
  VAR_7 = FUNC_2(VAR_7[VAR_4].table,
        VAR_1, VAR_2);
  VAR_5 >>= VAR_3;
  VAR_6 >>= VAR_3;
 }

 if (!VAR_7)
  return ((void*)0);

 return &VAR_7[VAR_6].bucket;

}
