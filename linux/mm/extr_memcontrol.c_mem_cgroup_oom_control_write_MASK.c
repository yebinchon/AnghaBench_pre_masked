
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_cgroup {int oom_kill_disable; } ;
struct cgroup_subsys_state {int parent; } ;
struct cftype {int dummy; } ;


 int VAR_0 ;
 struct mem_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 (struct mem_cgroup*) ;

__attribute__((used)) static int FUNC_2(struct cgroup_subsys_state *VAR_1,
 struct cftype *VAR_2, u64 VAR_3)
{
 struct mem_cgroup *VAR_4 = FUNC_0(VAR_1);


 if (!VAR_1->parent || !((VAR_3 == 0) || (VAR_3 == 1)))
  return -VAR_0;

 VAR_4->oom_kill_disable = VAR_3;
 if (!VAR_3)
  FUNC_1(VAR_4);

 return 0;
}
