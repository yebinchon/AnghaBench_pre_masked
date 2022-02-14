
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct mem_cgroup* mem_cgroup; } ;
struct cgroup_subsys_state {int dummy; } ;
struct mem_cgroup {struct cgroup_subsys_state css; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct mem_cgroup* VAR_1 ;

struct cgroup_subsys_state *FUNC_1(struct page *VAR_2)
{
 struct mem_cgroup *VAR_3;

 VAR_3 = VAR_2->mem_cgroup;

 if (!VAR_3 || !FUNC_0(VAR_0))
  VAR_3 = VAR_1;

 return &VAR_3->css;
}
