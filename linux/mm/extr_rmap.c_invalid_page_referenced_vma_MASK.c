
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct page_referenced_arg {struct mem_cgroup* memcg; } ;
struct mem_cgroup {int dummy; } ;


 int FUNC_0 (int ,struct mem_cgroup*) ;

__attribute__((used)) static bool FUNC_1(struct vm_area_struct *VAR_0, void *VAR_1)
{
 struct page_referenced_arg *VAR_2 = VAR_1;
 struct mem_cgroup *VAR_3 = VAR_2->memcg;

 if (!FUNC_0(VAR_0->vm_mm, VAR_3))
  return 1;

 return 0;
}
