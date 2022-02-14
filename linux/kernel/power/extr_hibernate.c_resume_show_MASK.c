
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct kobj_attribute *VAR_2,
      char *VAR_3)
{
 return FUNC_2(VAR_3,"%d:%d\n", FUNC_0(VAR_0),
         FUNC_1(VAR_0));
}
