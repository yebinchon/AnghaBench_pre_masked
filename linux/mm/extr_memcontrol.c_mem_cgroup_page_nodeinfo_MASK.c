
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup_per_node {int dummy; } ;
struct mem_cgroup {struct mem_cgroup_per_node** nodeinfo; } ;


 int FUNC_0 (struct page*) ;

__attribute__((used)) static struct mem_cgroup_per_node *
FUNC_1(struct mem_cgroup *VAR_0, struct page *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 return VAR_0->nodeinfo[VAR_2];
}
