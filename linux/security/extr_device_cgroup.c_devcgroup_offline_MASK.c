
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_cgroup {int behavior; } ;
struct cgroup_subsys_state {int dummy; } ;


 int VAR_0 ;
 struct dev_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cgroup_subsys_state *VAR_2)
{
 struct dev_cgroup *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_1);
 VAR_3->behavior = VAR_0;
 FUNC_2(&VAR_1);
}
