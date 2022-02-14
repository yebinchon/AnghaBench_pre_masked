
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mem_cgroup {int css; scalar_t__ oom_group; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct mem_cgroup* FUNC_2 (struct task_struct*) ;
 int VAR_0 ;
 struct mem_cgroup* FUNC_3 (struct mem_cgroup*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct mem_cgroup* VAR_1 ;

struct mem_cgroup *FUNC_6(struct task_struct *VAR_2,
         struct mem_cgroup *VAR_3)
{
 struct mem_cgroup *VAR_4 = ((void*)0);
 struct mem_cgroup *VAR_5;

 if (!FUNC_0(VAR_0))
  return ((void*)0);

 if (!VAR_3)
  VAR_3 = VAR_1;

 FUNC_4();

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == VAR_1)
  goto out;






 for (; VAR_5; VAR_5 = FUNC_3(VAR_5)) {
  if (VAR_5->oom_group)
   VAR_4 = VAR_5;

  if (VAR_5 == VAR_3)
   break;
 }

 if (VAR_4)
  FUNC_1(&VAR_4->css);
out:
 FUNC_5();

 return VAR_4;
}
