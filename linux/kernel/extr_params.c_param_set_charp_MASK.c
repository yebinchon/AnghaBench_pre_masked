
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_2, const struct kernel_param *VAR_3)
{
 if (FUNC_5(VAR_2) > 1024) {
  FUNC_2("%s: string parameter too long\n", VAR_3->name);
  return -VAR_1;
 }

 FUNC_1(*(char **)VAR_3->arg);



 if (FUNC_3()) {
  *(char **)VAR_3->arg = FUNC_0(FUNC_5(VAR_2)+1);
  if (!*(char **)VAR_3->arg)
   return -VAR_0;
  FUNC_4(*(char **)VAR_3->arg, VAR_2);
 } else
  *(const char **)VAR_3->arg = VAR_2;

 return 0;
}
