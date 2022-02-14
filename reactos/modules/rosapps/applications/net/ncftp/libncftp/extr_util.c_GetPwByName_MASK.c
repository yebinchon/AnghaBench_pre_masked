
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;


 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 () ;
 struct passwd* FUNC_2 (char*) ;

struct passwd *
FUNC_3(void)
{
 char *VAR_0;
 struct passwd *VAR_1;

 VAR_0 = FUNC_1();
 if (VAR_0 == ((void*)0)) {
  VAR_0 = (char *) FUNC_0("LOGNAME");
  if (VAR_0 == ((void*)0))
   VAR_0 = (char *) FUNC_0("USER");
 }
 VAR_1 = ((void*)0);
 if (VAR_0 != ((void*)0))
  VAR_1 = FUNC_2(VAR_0);
 return (VAR_1);
}
