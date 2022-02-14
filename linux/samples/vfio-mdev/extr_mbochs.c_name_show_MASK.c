
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {char* name; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct kobject *VAR_0, struct device *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, "%s\n", VAR_0->name);
}
