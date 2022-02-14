
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {unsigned long move_lock_flags; int move_lock; int * move_lock_task; } ;


 int * VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct mem_cgroup *VAR_1)
{
 if (VAR_1 && VAR_1->move_lock_task == VAR_0) {
  unsigned long VAR_2 = VAR_1->move_lock_flags;

  VAR_1->move_lock_task = ((void*)0);
  VAR_1->move_lock_flags = 0;

  FUNC_1(&VAR_1->move_lock, VAR_2);
 }

 FUNC_0();
}
