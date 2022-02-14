
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_2,
       struct kobj_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 if (FUNC_0(VAR_4, 0, &VAR_1))
  return -VAR_0;

 return VAR_5;
}
