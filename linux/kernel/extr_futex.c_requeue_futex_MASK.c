
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union futex_key {int dummy; } futex_key ;
struct futex_q {union futex_key key; int * lock_ptr; int list; } ;
struct futex_hash_bucket {int lock; int chain; } ;


 int FUNC_0 (union futex_key*) ;
 int FUNC_1 (struct futex_hash_bucket*) ;
 int FUNC_2 (struct futex_hash_bucket*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static inline
void FUNC_6(struct futex_q *VAR_0, struct futex_hash_bucket *VAR_1,
     struct futex_hash_bucket *VAR_2, union futex_key *VAR_3)
{





 if (FUNC_3(&VAR_1->chain != &VAR_2->chain)) {
  FUNC_5(&VAR_0->list, &VAR_1->chain);
  FUNC_1(VAR_1);
  FUNC_2(VAR_2);
  FUNC_4(&VAR_0->list, &VAR_2->chain);
  VAR_0->lock_ptr = &VAR_2->lock;
 }
 FUNC_0(VAR_3);
 VAR_0->key = *VAR_3;
}
