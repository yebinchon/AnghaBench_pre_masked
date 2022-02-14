
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugetlb_cgroup {int * hugepage; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(int VAR_2, unsigned long VAR_3,
        struct hugetlb_cgroup *VAR_4)
{
 if (FUNC_1() || !VAR_4)
  return;

 if (FUNC_0(&VAR_1[VAR_2]) < VAR_0)
  return;

 FUNC_2(&VAR_4->hugepage[VAR_2], VAR_3);
 return;
}
