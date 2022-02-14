
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_kobject {int mod; } ;
struct module_attribute {int dummy; } ;
typedef size_t ssize_t ;


 size_t FUNC_0 (int ,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct module_attribute *VAR_0,
     struct module_kobject *VAR_1, char *VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_0(VAR_1->mod, VAR_2);
 VAR_2[VAR_3++] = '\n';
 return VAR_3;
}
