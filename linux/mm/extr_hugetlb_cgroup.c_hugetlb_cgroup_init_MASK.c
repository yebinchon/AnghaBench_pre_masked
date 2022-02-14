
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {int dummy; } ;
struct hugetlb_cgroup {struct page_counter* hugepage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page_counter*,struct page_counter*) ;
 int FUNC_3 (struct page_counter*,unsigned long) ;
 unsigned long FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct hugetlb_cgroup *VAR_3,
    struct hugetlb_cgroup *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct page_counter *VAR_6 = &VAR_3->hugepage[VAR_5];
  struct page_counter *VAR_7 = ((void*)0);
  unsigned long VAR_8;
  int VAR_9;

  if (VAR_4)
   VAR_7 = &VAR_4->hugepage[VAR_5];
  FUNC_2(VAR_6, VAR_7);

  VAR_8 = FUNC_4(VAR_1,
       1 << FUNC_1(&VAR_2[VAR_5]));
  VAR_9 = FUNC_3(VAR_6, VAR_8);
  FUNC_0(VAR_9);
 }
}
