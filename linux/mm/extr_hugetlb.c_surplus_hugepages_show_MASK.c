
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct hstate {unsigned long surplus_huge_pages; unsigned long* surplus_huge_pages_node; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct hstate* FUNC_0 (struct kobject*,int*) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1,
     struct kobj_attribute *VAR_2, char *VAR_3)
{
 struct hstate *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_1, &VAR_6);
 if (VAR_6 == VAR_0)
  VAR_5 = VAR_4->surplus_huge_pages;
 else
  VAR_5 = VAR_4->surplus_huge_pages_node[VAR_6];

 return FUNC_1(VAR_3, "%lu\n", VAR_5);
}
