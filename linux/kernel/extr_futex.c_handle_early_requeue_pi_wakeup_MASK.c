
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union futex_key {int dummy; } futex_key ;
struct hrtimer_sleeper {int task; } ;
struct futex_q {int list; int * lock_ptr; int key; } ;
struct futex_hash_bucket {int chain; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct futex_hash_bucket*) ;
 int FUNC_2 (int *,union futex_key*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline
int FUNC_5(struct futex_hash_bucket *VAR_4,
       struct futex_q *VAR_5, union futex_key *VAR_6,
       struct hrtimer_sleeper *VAR_7)
{
 int VAR_8 = 0;
 if (!FUNC_2(&VAR_5->key, VAR_6)) {
  FUNC_0(VAR_5->lock_ptr && (&VAR_4->lock != VAR_5->lock_ptr));




  FUNC_3(&VAR_5->list, &VAR_4->chain);
  FUNC_1(VAR_4);


  VAR_8 = -VAR_2;
  if (VAR_7 && !VAR_7->task)
   VAR_8 = -VAR_1;
  else if (FUNC_4(VAR_3))
   VAR_8 = -VAR_0;
 }
 return VAR_8;
}
