
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wdir ;
struct passwd {char* pw_dir; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 struct passwd* FUNC_4 (char*) ;
 struct passwd* FUNC_5 (int ) ;
 int FUNC_6 () ;
 char* VAR_0 ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (char*,char const*,size_t) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char*,char*,int) ;

void
FUNC_13(const char *VAR_1)
{
 size_t VAR_2;




 struct passwd *VAR_3;
 char *VAR_4;


 if (VAR_0 != ((void*)0)) {
  FUNC_1(VAR_0);
  VAR_0 = ((void*)0);
 }

 if (VAR_1 == ((void*)0)) {
  VAR_4 = (char *) FUNC_3();
  if (VAR_4 == ((void*)0)) {
   VAR_4 = (char *) FUNC_2("LOGNAME");
   if (VAR_4 == ((void*)0))
    VAR_4 = (char *) FUNC_2("USER");
  }
  VAR_3 = ((void*)0);
  if (VAR_4 != ((void*)0))
   VAR_3 = FUNC_4(VAR_4);
  if (VAR_3 == ((void*)0))
   VAR_3 = FUNC_5(FUNC_6());
  if (VAR_3 == ((void*)0))
   return;
  VAR_1 = VAR_3->pw_dir;

 }

 VAR_2 = FUNC_11(VAR_1) + 1;
 VAR_0 = (char *) FUNC_7(VAR_2);
 if (VAR_0 != ((void*)0)) {
  FUNC_8(VAR_0, VAR_1, VAR_2);
 }
}
