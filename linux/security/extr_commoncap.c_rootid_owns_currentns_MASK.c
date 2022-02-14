
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {struct user_namespace* parent; } ;
typedef int kuid_t ;


 struct user_namespace* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct user_namespace*,int ) ;
 struct user_namespace VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(kuid_t VAR_1)
{
 struct user_namespace *VAR_2;

 if (!FUNC_2(VAR_1))
  return 0;

 for (VAR_2 = FUNC_0(); ; VAR_2 = VAR_2->parent) {
  if (FUNC_1(VAR_2, VAR_1) == 0)
   return 1;
  if (VAR_2 == &VAR_0)
   break;
 }

 return 0;
}
