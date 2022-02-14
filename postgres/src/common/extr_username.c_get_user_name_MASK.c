
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int username ;
typedef scalar_t__ uid_t ;
struct passwd {char const* pw_name; } ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 struct passwd* FUNC_4 (scalar_t__) ;
 char* FUNC_5 (int ,long,...) ;
 int FUNC_6 (scalar_t__) ;

const char *
FUNC_7(char **VAR_1)
{

 struct passwd *VAR_2;
 uid_t VAR_3 = FUNC_3();

 *VAR_1 = ((void*)0);

 VAR_0 = 0;
 VAR_2 = FUNC_4(VAR_3);
 if (!VAR_2)
 {
  *VAR_1 = FUNC_5(FUNC_2("could not look up effective user ID %ld: %s"),
         (long) VAR_3,
         VAR_0 ? FUNC_6(VAR_0) : FUNC_2("user does not exist"));
  return ((void*)0);
 }

 return VAR_2->pw_name;
}
