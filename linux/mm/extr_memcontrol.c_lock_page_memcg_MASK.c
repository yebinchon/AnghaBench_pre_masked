
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct mem_cgroup* mem_cgroup; } ;
struct mem_cgroup {unsigned long move_lock_flags; int move_lock_task; int move_lock; int moving_account; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

struct mem_cgroup *FUNC_6(struct page *VAR_1)
{
 struct mem_cgroup *VAR_2;
 unsigned long VAR_3;
 FUNC_2();

 if (FUNC_1())
  return ((void*)0);
again:
 VAR_2 = VAR_1->mem_cgroup;
 if (FUNC_5(!VAR_2))
  return ((void*)0);

 if (FUNC_0(&VAR_2->moving_account) <= 0)
  return VAR_2;

 FUNC_3(&VAR_2->move_lock, VAR_3);
 if (VAR_2 != VAR_1->mem_cgroup) {
  FUNC_4(&VAR_2->move_lock, VAR_3);
  goto again;
 }






 VAR_2->move_lock_task = VAR_0;
 VAR_2->move_lock_flags = VAR_3;

 return VAR_2;
}
