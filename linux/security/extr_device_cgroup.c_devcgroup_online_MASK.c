
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_cgroup {int behavior; int exceptions; } ;
struct cgroup_subsys_state {struct cgroup_subsys_state* parent; } ;


 int VAR_0 ;
 struct dev_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cgroup_subsys_state *VAR_2)
{
 struct dev_cgroup *VAR_3 = FUNC_0(VAR_2);
 struct dev_cgroup *VAR_4 = FUNC_0(VAR_2->parent);
 int VAR_5 = 0;

 FUNC_2(&VAR_1);

 if (VAR_4 == ((void*)0))
  VAR_3->behavior = VAR_0;
 else {
  VAR_5 = FUNC_1(&VAR_3->exceptions,
       &VAR_4->exceptions);
  if (!VAR_5)
   VAR_3->behavior = VAR_4->behavior;
 }
 FUNC_3(&VAR_1);

 return VAR_5;
}
