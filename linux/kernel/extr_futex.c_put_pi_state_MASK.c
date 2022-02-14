
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int pi_lock; } ;
struct TYPE_3__ {int wait_lock; } ;
struct futex_pi_state {int refcount; struct task_struct* owner; TYPE_1__ pi_mutex; int list; } ;
struct TYPE_4__ {struct futex_pi_state* pi_state_cache; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct futex_pi_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,struct task_struct*) ;

__attribute__((used)) static void FUNC_9(struct futex_pi_state *VAR_1)
{
 if (!VAR_1)
  return;

 if (!FUNC_6(&VAR_1->refcount))
  return;





 if (VAR_1->owner) {
  struct task_struct *VAR_2;

  FUNC_3(&VAR_1->pi_mutex.wait_lock);
  VAR_2 = VAR_1->owner;
  if (VAR_2) {
   FUNC_2(&VAR_2->pi_lock);
   FUNC_1(&VAR_1->list);
   FUNC_4(&VAR_2->pi_lock);
  }
  FUNC_8(&VAR_1->pi_mutex, VAR_2);
  FUNC_5(&VAR_1->pi_mutex.wait_lock);
 }

 if (VAR_0->pi_state_cache) {
  FUNC_0(VAR_1);
 } else {





  VAR_1->owner = ((void*)0);
  FUNC_7(&VAR_1->refcount, 1);
  VAR_0->pi_state_cache = VAR_1;
 }
}
