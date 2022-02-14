
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union futex_key {int dummy; } futex_key ;
struct futex_q {int task; int * lock_ptr; int * rt_waiter; union futex_key key; } ;
struct futex_hash_bucket {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct futex_q*) ;
 int FUNC_2 (union futex_key*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline
void FUNC_4(struct futex_q *VAR_1, union futex_key *VAR_2,
      struct futex_hash_bucket *VAR_3)
{
 FUNC_2(VAR_2);
 VAR_1->key = *VAR_2;

 FUNC_1(VAR_1);

 FUNC_0(!VAR_1->rt_waiter);
 VAR_1->rt_waiter = ((void*)0);

 VAR_1->lock_ptr = &VAR_3->lock;

 FUNC_3(VAR_1->task, VAR_0);
}
