
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page_counter {int failcnt; int watermark; int max; } ;
struct hugetlb_cgroup {struct page_counter* hugepage; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cftype {int private; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;




 struct hugetlb_cgroup* FUNC_3 (struct cgroup_subsys_state*) ;
 int FUNC_4 (struct page_counter*) ;

__attribute__((used)) static u64 FUNC_5(struct cgroup_subsys_state *VAR_1,
       struct cftype *VAR_2)
{
 struct page_counter *VAR_3;
 struct hugetlb_cgroup *VAR_4 = FUNC_3(VAR_1);

 VAR_3 = &VAR_4->hugepage[FUNC_2(VAR_2->private)];

 switch (FUNC_1(VAR_2->private)) {
 case 128:
  return (u64)FUNC_4(VAR_3) * VAR_0;
 case 130:
  return (u64)VAR_3->max * VAR_0;
 case 129:
  return (u64)VAR_3->watermark * VAR_0;
 case 131:
  return VAR_3->failcnt;
 default:
  FUNC_0();
 }
}
