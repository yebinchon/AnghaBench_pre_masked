
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {int dummy; } ;
struct page {int dummy; } ;
struct hugetlb_cgroup {struct page_counter* hugepage; } ;


 unsigned int FUNC_0 (struct page*) ;
 struct hugetlb_cgroup* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page_counter*,unsigned int) ;
 int FUNC_3 (struct page_counter*,unsigned int) ;
 struct hugetlb_cgroup* FUNC_4 (struct hugetlb_cgroup*) ;
 struct hugetlb_cgroup* VAR_0 ;
 int FUNC_5 (struct page*,struct hugetlb_cgroup*) ;

__attribute__((used)) static void FUNC_6(int VAR_1, struct hugetlb_cgroup *VAR_2,
           struct page *VAR_3)
{
 unsigned int VAR_4;
 struct page_counter *VAR_5;
 struct hugetlb_cgroup *VAR_6;
 struct hugetlb_cgroup *VAR_7 = FUNC_4(VAR_2);

 VAR_6 = FUNC_1(VAR_3);





 if (!VAR_6 || VAR_6 != VAR_2)
  goto out;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_7) {
  VAR_7 = VAR_0;

  FUNC_3(&VAR_7->hugepage[VAR_1], VAR_4);
 }
 VAR_5 = &VAR_2->hugepage[VAR_1];

 FUNC_2(VAR_5, VAR_4);

 FUNC_5(VAR_3, VAR_7);
out:
 return;
}
