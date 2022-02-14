
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {struct cgroup_subsys_state* parent; } ;
struct mem_cgroup {int use_hierarchy; TYPE_1__ css; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cftype {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mem_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 (struct mem_cgroup*) ;

__attribute__((used)) static int FUNC_2(struct cgroup_subsys_state *VAR_2,
          struct cftype *VAR_3, u64 VAR_4)
{
 int VAR_5 = 0;
 struct mem_cgroup *VAR_6 = FUNC_0(VAR_2);
 struct mem_cgroup *VAR_7 = FUNC_0(VAR_6->css.parent);

 if (VAR_6->use_hierarchy == VAR_4)
  return 0;
 if ((!VAR_7 || !VAR_7->use_hierarchy) &&
    (VAR_4 == 1 || VAR_4 == 0)) {
  if (!FUNC_1(VAR_6))
   VAR_6->use_hierarchy = VAR_4;
  else
   VAR_5 = -VAR_0;
 } else
  VAR_5 = -VAR_1;

 return VAR_5;
}
