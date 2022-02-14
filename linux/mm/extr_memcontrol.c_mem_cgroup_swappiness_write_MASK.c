
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_cgroup {int swappiness; } ;
struct cgroup_subsys_state {scalar_t__ parent; } ;
struct cftype {int dummy; } ;


 int VAR_0 ;
 struct mem_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct cgroup_subsys_state *VAR_2,
           struct cftype *VAR_3, u64 VAR_4)
{
 struct mem_cgroup *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4 > 100)
  return -VAR_0;

 if (VAR_2->parent)
  VAR_5->swappiness = VAR_4;
 else
  VAR_1 = VAR_4;

 return 0;
}
