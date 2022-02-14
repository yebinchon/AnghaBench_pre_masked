
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_kobject {TYPE_1__* mod; } ;
struct module_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 () ;



 int FUNC_1 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct module_attribute *VAR_0,
         struct module_kobject *VAR_1, char *VAR_2)
{
 const char *VAR_3 = "unknown";

 switch (VAR_1->mod->state) {
 case 128:
  VAR_3 = "live";
  break;
 case 130:
  VAR_3 = "coming";
  break;
 case 129:
  VAR_3 = "going";
  break;
 default:
  FUNC_0();
 }
 return FUNC_1(VAR_2, "%s\n", VAR_3);
}
