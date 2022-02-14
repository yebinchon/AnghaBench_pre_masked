
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {struct cgroup_subsys_state* parent; } ;
struct cgroup_cls_state {int classid; } ;


 struct cgroup_cls_state* FUNC_0 (struct cgroup_subsys_state*) ;

__attribute__((used)) static int FUNC_1(struct cgroup_subsys_state *VAR_0)
{
 struct cgroup_cls_state *VAR_1 = FUNC_0(VAR_0);
 struct cgroup_cls_state *VAR_2 = FUNC_0(VAR_0->parent);

 if (VAR_2)
  VAR_1->classid = VAR_2->classid;

 return 0;
}
