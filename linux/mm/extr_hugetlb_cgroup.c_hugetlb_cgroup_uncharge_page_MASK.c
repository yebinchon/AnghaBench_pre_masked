
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hugetlb_cgroup {int * hugepage; } ;


 scalar_t__ FUNC_0 () ;
 struct hugetlb_cgroup* FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct page*,int *) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(int VAR_1, unsigned long VAR_2,
      struct page *VAR_3)
{
 struct hugetlb_cgroup *VAR_4;

 if (FUNC_0())
  return;
 FUNC_2(&VAR_0);
 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_5(!VAR_4))
  return;
 FUNC_4(VAR_3, ((void*)0));
 FUNC_3(&VAR_4->hugepage[VAR_1], VAR_2);
 return;
}
