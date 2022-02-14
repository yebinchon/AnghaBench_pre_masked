
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct hstate {unsigned long nr_overcommit_huge_pages; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hstate*) ;
 int VAR_1 ;
 struct hstate* FUNC_1 (struct kobject*,int *) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_2,
  struct kobj_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 struct hstate *VAR_8 = FUNC_1(VAR_2, ((void*)0));

 if (FUNC_0(VAR_8))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, 10, &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_3(&VAR_1);
 VAR_8->nr_overcommit_huge_pages = VAR_7;
 FUNC_4(&VAR_1);

 return VAR_5;
}
