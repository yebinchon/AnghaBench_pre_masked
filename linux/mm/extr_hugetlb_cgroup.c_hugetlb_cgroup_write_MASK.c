
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_open_file {int dummy; } ;
struct hugetlb_cgroup {int * hugepage; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int * VAR_1 ;
 int FUNC_2 (int *) ;
 struct hugetlb_cgroup* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct hugetlb_cgroup*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct kernfs_open_file*) ;
 int FUNC_8 (struct kernfs_open_file*) ;
 int FUNC_9 (char*,char*,unsigned long*) ;
 int FUNC_10 (int *,unsigned long) ;
 unsigned long FUNC_11 (unsigned long,int) ;
 char* FUNC_12 (char*) ;

__attribute__((used)) static ssize_t FUNC_13(struct kernfs_open_file *VAR_3,
        char *VAR_4, size_t VAR_5, loff_t VAR_6)
{
 int VAR_7, VAR_8;
 unsigned long VAR_9;
 struct hugetlb_cgroup *VAR_10 = FUNC_3(FUNC_8(VAR_3));

 if (FUNC_4(VAR_10))
  return -VAR_0;

 VAR_4 = FUNC_12(VAR_4);
 VAR_7 = FUNC_9(VAR_4, "-1", &VAR_9);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_1(FUNC_7(VAR_3)->private);
 VAR_9 = FUNC_11(VAR_9, 1 << FUNC_2(&VAR_1[VAR_8]));

 switch (FUNC_0(FUNC_7(VAR_3)->private)) {
 case 128:
  FUNC_5(&VAR_2);
  VAR_7 = FUNC_10(&VAR_10->hugepage[VAR_8], VAR_9);
  FUNC_6(&VAR_2);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }
 return VAR_7 ?: VAR_5;
}
