
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int expiry_time; int cache_list; int flags; } ;
struct cache_detail {int hash_lock; int entries; int * hash_table; int (* update ) (struct cache_head*,struct cache_head*) ;int (* init ) (struct cache_head*,struct cache_head*) ;struct cache_head* (* alloc ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_head*,int ,struct cache_detail*) ;
 int FUNC_1 (struct cache_head*,struct cache_detail*) ;
 int FUNC_2 (struct cache_head*) ;
 int FUNC_3 (struct cache_head*,struct cache_detail*) ;
 int FUNC_4 (struct cache_head*,struct cache_detail*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cache_head*,struct cache_head*) ;
 struct cache_head* FUNC_10 () ;
 int FUNC_11 (struct cache_head*,struct cache_head*) ;
 int FUNC_12 (struct cache_head*,struct cache_head*) ;
 scalar_t__ FUNC_13 (int ,int *) ;

struct cache_head *FUNC_14(struct cache_detail *VAR_2,
           struct cache_head *VAR_3, struct cache_head *VAR_4, int VAR_5)
{




 struct cache_head *VAR_6;

 if (!FUNC_13(VAR_1, &VAR_4->flags)) {
  FUNC_7(&VAR_2->hash_lock);
  if (!FUNC_13(VAR_1, &VAR_4->flags)) {
   if (FUNC_13(VAR_0, &VAR_3->flags))
    FUNC_6(VAR_0, &VAR_4->flags);
   else
    VAR_2->update(VAR_4, VAR_3);
   FUNC_0(VAR_4, VAR_3->expiry_time, VAR_2);
   FUNC_8(&VAR_2->hash_lock);
   FUNC_1(VAR_4, VAR_2);
   return VAR_4;
  }
  FUNC_8(&VAR_2->hash_lock);
 }

 VAR_6 = VAR_2->alloc();
 if (!VAR_6) {
  FUNC_4(VAR_4, VAR_2);
  return ((void*)0);
 }
 FUNC_3(VAR_6, VAR_2);
 VAR_2->init(VAR_6, VAR_4);

 FUNC_7(&VAR_2->hash_lock);
 if (FUNC_13(VAR_0, &VAR_3->flags))
  FUNC_6(VAR_0, &VAR_6->flags);
 else
  VAR_2->update(VAR_6, VAR_3);
 FUNC_5(&VAR_6->cache_list, &VAR_2->hash_table[VAR_5]);
 VAR_2->entries++;
 FUNC_2(VAR_6);
 FUNC_0(VAR_6, VAR_3->expiry_time, VAR_2);
 FUNC_0(VAR_4, 0, VAR_2);
 FUNC_8(&VAR_2->hash_lock);
 FUNC_1(VAR_6, VAR_2);
 FUNC_1(VAR_4, VAR_2);
 FUNC_4(VAR_4, VAR_2);
 return VAR_6;
}
