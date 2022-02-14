
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct mem_cgroup* mem_cgroup; } ;
struct mem_cgroup {int css; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct mem_cgroup* VAR_0 ;

struct mem_cgroup *FUNC_4(struct page *VAR_1)
{
 struct mem_cgroup *VAR_2 = VAR_1->mem_cgroup;

 if (FUNC_1())
  return ((void*)0);

 FUNC_2();
 if (!VAR_2 || !FUNC_0(&VAR_2->css))
  VAR_2 = VAR_0;
 FUNC_3();
 return VAR_2;
}
