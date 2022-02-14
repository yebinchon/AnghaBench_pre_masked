
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned long long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1,
      struct kobj_attribute *VAR_2, char *VAR_3)
{
 return FUNC_0(VAR_3, "%llu\n", (unsigned long long)VAR_0);
}
