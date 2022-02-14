
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmpressure {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;


 struct mem_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 struct vmpressure* FUNC_1 (struct mem_cgroup*) ;
 struct mem_cgroup* FUNC_2 (struct mem_cgroup*) ;
 struct cgroup_subsys_state* FUNC_3 (struct vmpressure*) ;

__attribute__((used)) static struct vmpressure *FUNC_4(struct vmpressure *VAR_0)
{
 struct cgroup_subsys_state *VAR_1 = FUNC_3(VAR_0);
 struct mem_cgroup *VAR_2 = FUNC_0(VAR_1);

 VAR_2 = FUNC_2(VAR_2);
 if (!VAR_2)
  return ((void*)0);
 return FUNC_1(VAR_2);
}
