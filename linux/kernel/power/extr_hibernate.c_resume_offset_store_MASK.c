
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,unsigned long long*) ;
 unsigned long long VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1,
       struct kobj_attribute *VAR_2, const char *VAR_3,
       size_t VAR_4)
{
 unsigned long long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_0 = VAR_5;

 return VAR_4;
}
