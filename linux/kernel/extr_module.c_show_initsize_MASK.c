
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_kobject {TYPE_2__* mod; } ;
struct module_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ init_layout; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct module_attribute *VAR_0,
        struct module_kobject *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, "%u\n", VAR_1->mod->init_layout.size);
}
