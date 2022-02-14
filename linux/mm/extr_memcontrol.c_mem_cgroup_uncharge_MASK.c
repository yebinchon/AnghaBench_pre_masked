
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uncharge_gather {int dummy; } ;
struct page {int mem_cgroup; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct uncharge_gather*) ;
 int FUNC_2 (struct uncharge_gather*) ;
 int FUNC_3 (struct page*,struct uncharge_gather*) ;

void FUNC_4(struct page *VAR_0)
{
 struct uncharge_gather VAR_1;

 if (FUNC_0())
  return;


 if (!VAR_0->mem_cgroup)
  return;

 FUNC_2(&VAR_1);
 FUNC_3(VAR_0, &VAR_1);
 FUNC_1(&VAR_1);
}
