
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_cgroup {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cftype {int dummy; } ;


 struct mem_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 (struct mem_cgroup*) ;

__attribute__((used)) static u64 FUNC_2(struct cgroup_subsys_state *VAR_0,
          struct cftype *VAR_1)
{
 struct mem_cgroup *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2);
}
