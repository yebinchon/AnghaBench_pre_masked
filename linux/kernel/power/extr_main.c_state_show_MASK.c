
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t suspend_state_t ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 () ;
 char** VAR_2 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_3, struct kobj_attribute *VAR_4,
     char *VAR_5)
{
 char *VAR_6 = VAR_5;
 if (FUNC_0())
  VAR_6 += FUNC_1(VAR_6, "disk ");
 if (VAR_6 != VAR_5)

  *(VAR_6-1) = '\n';
 return (VAR_6 - VAR_5);
}
