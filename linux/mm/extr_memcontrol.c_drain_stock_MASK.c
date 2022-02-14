
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memcg_stock_pcp {struct mem_cgroup* cached; int nr_pages; } ;
struct mem_cgroup {int css; int memsw; int memory; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct memcg_stock_pcp *VAR_0)
{
 struct mem_cgroup *VAR_1 = VAR_0->cached;

 if (VAR_0->nr_pages) {
  FUNC_2(&VAR_1->memory, VAR_0->nr_pages);
  if (FUNC_1())
   FUNC_2(&VAR_1->memsw, VAR_0->nr_pages);
  FUNC_0(&VAR_1->css, VAR_0->nr_pages);
  VAR_0->nr_pages = 0;
 }
 VAR_0->cached = ((void*)0);
}
