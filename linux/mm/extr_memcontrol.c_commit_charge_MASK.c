
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct mem_cgroup* mem_cgroup; } ;
struct mem_cgroup {int dummy; } ;


 int FUNC_0 (struct mem_cgroup*,struct page*) ;
 int FUNC_1 (struct page*,int*) ;
 int FUNC_2 (struct page*,int) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_0, struct mem_cgroup *VAR_1,
     bool VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0->mem_cgroup, VAR_0);





 if (VAR_2)
  FUNC_1(VAR_0, &VAR_3);
 VAR_0->mem_cgroup = VAR_1;

 if (VAR_2)
  FUNC_2(VAR_0, VAR_3);
}
