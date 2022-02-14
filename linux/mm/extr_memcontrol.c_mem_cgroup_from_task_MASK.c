
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mem_cgroup {int dummy; } ;


 struct mem_cgroup* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct task_struct*,int ) ;
 scalar_t__ FUNC_2 (int) ;

struct mem_cgroup *FUNC_3(struct task_struct *VAR_1)
{





 if (FUNC_2(!VAR_1))
  return ((void*)0);

 return FUNC_0(FUNC_1(VAR_1, VAR_0));
}
