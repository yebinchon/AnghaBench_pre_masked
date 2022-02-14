
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct dev_cgroup {struct cgroup_subsys_state css; int behavior; int exceptions; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct dev_cgroup* FUNC_2 (int,int ) ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_3(struct cgroup_subsys_state *VAR_3)
{
 struct dev_cgroup *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);
 FUNC_1(&VAR_4->exceptions);
 VAR_4->behavior = VAR_0;

 return &VAR_4->css;
}
