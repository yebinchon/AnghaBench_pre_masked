
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_counter {int failcnt; } ;
struct kernfs_open_file {int dummy; } ;
struct hugetlb_cgroup {struct page_counter* hugepage; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;


 struct hugetlb_cgroup* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct kernfs_open_file*) ;
 int FUNC_4 (struct kernfs_open_file*) ;
 int FUNC_5 (struct page_counter*) ;

__attribute__((used)) static ssize_t FUNC_6(struct kernfs_open_file *VAR_1,
        char *VAR_2, size_t VAR_3, loff_t VAR_4)
{
 int VAR_5 = 0;
 struct page_counter *VAR_6;
 struct hugetlb_cgroup *VAR_7 = FUNC_2(FUNC_4(VAR_1));

 VAR_6 = &VAR_7->hugepage[FUNC_1(FUNC_3(VAR_1)->private)];

 switch (FUNC_0(FUNC_3(VAR_1)->private)) {
 case 128:
  FUNC_5(VAR_6);
  break;
 case 129:
  VAR_6->failcnt = 0;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5 ?: VAR_3;
}
