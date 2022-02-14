
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_cgroup_ctrl {struct page** map; } ;
struct swap_cgroup {int dummy; } ;
struct page {int dummy; } ;
typedef size_t pgoff_t ;


 size_t VAR_0 ;
 struct swap_cgroup* FUNC_0 (struct page*) ;

__attribute__((used)) static struct swap_cgroup *FUNC_1(struct swap_cgroup_ctrl *VAR_1,
      pgoff_t VAR_2)
{
 struct page *VAR_3;
 struct swap_cgroup *VAR_4;

 VAR_3 = VAR_1->map[VAR_2 / VAR_0];
 VAR_4 = FUNC_0(VAR_3);
 return VAR_4 + VAR_2 % VAR_0;
}
