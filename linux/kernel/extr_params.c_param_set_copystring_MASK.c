
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kparam_string {scalar_t__ maxlen; int string; } ;
struct kernel_param {int name; struct kparam_string* str; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_1, const struct kernel_param *VAR_2)
{
 const struct kparam_string *VAR_3 = VAR_2->str;

 if (FUNC_2(VAR_1)+1 > VAR_3->maxlen) {
  FUNC_0("%s: string doesn't fit in %u chars.\n",
         VAR_2->name, VAR_3->maxlen-1);
  return -VAR_0;
 }
 FUNC_1(VAR_3->string, VAR_1);
 return 0;
}
