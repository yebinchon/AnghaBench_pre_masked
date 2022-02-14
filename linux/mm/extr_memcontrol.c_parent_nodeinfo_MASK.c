
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_per_node {int memcg; } ;
struct mem_cgroup {int dummy; } ;


 struct mem_cgroup_per_node* FUNC_0 (struct mem_cgroup*,int) ;
 struct mem_cgroup* FUNC_1 (int ) ;

__attribute__((used)) static struct mem_cgroup_per_node *
FUNC_2(struct mem_cgroup_per_node *VAR_0, int VAR_1)
{
 struct mem_cgroup *VAR_2;

 VAR_2 = FUNC_1(VAR_0->memcg);
 if (!VAR_2)
  return ((void*)0);
 return FUNC_0(VAR_2, VAR_1);
}
