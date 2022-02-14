
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kparam_string {int string; } ;
struct kernel_param {struct kparam_string* str; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;

int FUNC_1(char *VAR_1, const struct kernel_param *VAR_2)
{
 const struct kparam_string *VAR_3 = VAR_2->str;
 return FUNC_0(VAR_1, VAR_0, "%s\n", VAR_3->string);
}
