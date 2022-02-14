
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {int dummy; } ;
struct hugetlb_cgroup {int css; int * hugepage; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 struct hugetlb_cgroup* FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long,struct page_counter**) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(int VAR_4, unsigned long VAR_5,
     struct hugetlb_cgroup **VAR_6)
{
 int VAR_7 = 0;
 struct page_counter *VAR_8;
 struct hugetlb_cgroup *VAR_9 = ((void*)0);

 if (FUNC_3())
  goto done;




 if (FUNC_2(&VAR_3[VAR_4]) < VAR_1)
  goto done;
again:
 FUNC_6();
 VAR_9 = FUNC_4(VAR_2);
 if (!FUNC_1(&VAR_9->css)) {
  FUNC_7();
  goto again;
 }
 FUNC_7();

 if (!FUNC_5(&VAR_9->hugepage[VAR_4], VAR_5, &VAR_8))
  VAR_7 = -VAR_0;
 FUNC_0(&VAR_9->css);
done:
 *VAR_6 = VAR_9;
 return VAR_7;
}
