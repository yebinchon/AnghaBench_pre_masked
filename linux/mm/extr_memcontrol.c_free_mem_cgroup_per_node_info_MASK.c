
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_per_node {int lruvec_stat_local; int lruvec_stat_cpu; } ;
struct mem_cgroup {struct mem_cgroup_per_node** nodeinfo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mem_cgroup_per_node*) ;

__attribute__((used)) static void FUNC_2(struct mem_cgroup *VAR_0, int VAR_1)
{
 struct mem_cgroup_per_node *VAR_2 = VAR_0->nodeinfo[VAR_1];

 if (!VAR_2)
  return;

 FUNC_0(VAR_2->lruvec_stat_cpu);
 FUNC_0(VAR_2->lruvec_stat_local);
 FUNC_1(VAR_2);
}
