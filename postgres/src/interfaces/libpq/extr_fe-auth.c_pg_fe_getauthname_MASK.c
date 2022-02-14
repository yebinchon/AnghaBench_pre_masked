
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int username ;
typedef scalar_t__ uid_t ;
struct passwd {char* pw_name; } ;
typedef int pwdbuf ;
typedef scalar_t__ PQExpBuffer ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_7 (scalar_t__,int ,...) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int,char*,int) ;

char *
FUNC_10(PQExpBuffer VAR_1)
{
 char *VAR_2 = ((void*)0);
 const char *VAR_3 = ((void*)0);






 uid_t VAR_4 = FUNC_2();
 char VAR_5[VAR_0];
 struct passwd VAR_6;
 struct passwd *VAR_7 = ((void*)0);
 int VAR_8;
 FUNC_4();
 VAR_8 = FUNC_6(VAR_4, &VAR_6, VAR_5, sizeof(VAR_5), &VAR_7);
 if (VAR_7 != ((void*)0))
  VAR_3 = VAR_7->pw_name;
 else if (VAR_1)
 {
  if (VAR_8 != 0)
   FUNC_7(VAR_1,
         FUNC_3("could not look up local user ID %d: %s\n"),
         (int) VAR_4,
         FUNC_9(VAR_8, VAR_5, sizeof(VAR_5)));
  else
   FUNC_7(VAR_1,
         FUNC_3("local user with ID %d does not exist\n"),
         (int) VAR_4);
 }


 if (VAR_3)
 {
  VAR_2 = FUNC_8(VAR_3);
  if (VAR_2 == ((void*)0) && VAR_1)
   FUNC_7(VAR_1,
         FUNC_3("out of memory\n"));
 }

 FUNC_5();

 return VAR_2;
}
