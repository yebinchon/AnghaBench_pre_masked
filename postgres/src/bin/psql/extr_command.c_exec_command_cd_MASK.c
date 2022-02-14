
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {char* pw_dir; } ;
typedef int backslashResult ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 struct passwd* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (int ,int ,int *,int) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static backslashResult
FUNC_10(PsqlScanState VAR_5, bool VAR_6, const char *VAR_7)
{
 bool VAR_8 = 1;

 if (VAR_6)
 {
  char *VAR_9 = FUNC_8(VAR_5,
             VAR_1, ((void*)0), 1);
  char *VAR_10;

  if (VAR_9)
   VAR_10 = VAR_9;
  else
  {

   struct passwd *VAR_11;
   uid_t VAR_12 = FUNC_4();

   VAR_4 = 0;
   VAR_11 = FUNC_5(VAR_12);
   if (!VAR_11)
   {
    FUNC_7("could not get home directory for user ID %ld: %s",
        (long) VAR_12,
        VAR_4 ? FUNC_9(VAR_4) : FUNC_0("user does not exist"));
    FUNC_2(VAR_0);
   }
   VAR_10 = VAR_11->pw_dir;
  }

  if (FUNC_1(VAR_10) == -1)
  {
   FUNC_7("\\%s: could not change directory to \"%s\": %m",
       VAR_7, VAR_10);
   VAR_8 = 0;
  }

  if (VAR_9)
   FUNC_3(VAR_9);
 }
 else
  FUNC_6(VAR_5);

 return VAR_8 ? VAR_3 : VAR_2;
}
