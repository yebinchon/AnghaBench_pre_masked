
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;


 int FUNC_0 (struct mem_cgroup*,unsigned int) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(struct page *VAR_0, struct mem_cgroup *VAR_1,
  bool VAR_2)
{
 unsigned int VAR_3 = VAR_2 ? FUNC_1(VAR_0) : 1;

 if (FUNC_2())
  return;





 if (!VAR_1)
  return;

 FUNC_0(VAR_1, VAR_3);
}
