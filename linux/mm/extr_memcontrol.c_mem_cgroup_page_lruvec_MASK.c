
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruvec {struct pglist_data* pgdat; } ;
struct pglist_data {struct lruvec lruvec; } ;
struct page {struct mem_cgroup* mem_cgroup; } ;
struct mem_cgroup_per_node {struct lruvec lruvec; } ;
struct mem_cgroup {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 struct mem_cgroup_per_node* FUNC_1 (struct mem_cgroup*,struct page*) ;
 struct mem_cgroup* VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

struct lruvec *FUNC_3(struct page *VAR_1, struct pglist_data *VAR_2)
{
 struct mem_cgroup_per_node *VAR_3;
 struct mem_cgroup *VAR_4;
 struct lruvec *VAR_5;

 if (FUNC_0()) {
  VAR_5 = &VAR_2->lruvec;
  goto out;
 }

 VAR_4 = VAR_1->mem_cgroup;




 if (!VAR_4)
  VAR_4 = VAR_0;

 VAR_3 = FUNC_1(VAR_4, VAR_1);
 VAR_5 = &VAR_3->lruvec;
out:





 if (FUNC_2(VAR_5->pgdat != VAR_2))
  VAR_5->pgdat = VAR_2;
 return VAR_5;
}
