
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,int *) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1, struct kobj_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, 10, &VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4;
}
