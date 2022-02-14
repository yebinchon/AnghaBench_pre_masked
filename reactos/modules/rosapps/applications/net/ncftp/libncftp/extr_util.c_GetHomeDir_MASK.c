
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;


 struct passwd* FUNC_0 () ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (int ) ;
 int FUNC_5 () ;

void
FUNC_6(char *VAR_0, size_t VAR_1)
{
 const char *VAR_2;
 struct passwd *VAR_3;

 VAR_3 = ((void*)0);






 if ((VAR_3 = FUNC_0()) == ((void*)0))
  VAR_3 = FUNC_4(FUNC_5());

 if (VAR_3 != ((void*)0))
  VAR_2 = VAR_3->pw_dir;
 else if ((VAR_2 = (const char *) FUNC_3("LOGNAME")) == ((void*)0))
   VAR_2 = ".";
 (void) FUNC_2(VAR_0, VAR_2, VAR_1);

}
