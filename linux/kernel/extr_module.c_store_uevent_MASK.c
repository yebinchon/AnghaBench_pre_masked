
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_kobject {int kobj; } ;
struct module_attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct module_attribute *VAR_0,
       struct module_kobject *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_1->kobj, VAR_2, VAR_3);
 return VAR_4 ? VAR_4 : VAR_3;
}
