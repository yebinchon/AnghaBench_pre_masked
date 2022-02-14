
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct kobject {struct kobject* parent; } ;


 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct kobject*,char const*,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct kobject *VAR_0,
        struct kobject *VAR_1,
        const char *VAR_2, va_list VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2("kobject: can not set name properly!\n");
  return VAR_4;
 }
 VAR_0->parent = VAR_1;
 return FUNC_0(VAR_0);
}
