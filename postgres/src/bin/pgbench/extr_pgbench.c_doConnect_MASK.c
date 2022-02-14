
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int password ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const**,char const**,int) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 char* VAR_2 ;
 int FUNC_5 (int ,char*,char*,...) ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_6 (char*,char*,int,int) ;
 int VAR_7 ;

__attribute__((used)) static PGconn *
FUNC_7(void)
{
 PGconn *VAR_8;
 bool VAR_9;
 static bool VAR_10 = 0;
 static char VAR_11[100];





 do
 {


  const char *VAR_12[7];
  const char *VAR_13[7];

  VAR_12[0] = "host";
  VAR_13[0] = VAR_4;
  VAR_12[1] = "port";
  VAR_13[1] = VAR_5;
  VAR_12[2] = "user";
  VAR_13[2] = VAR_3;
  VAR_12[3] = "password";
  VAR_13[3] = VAR_10 ? VAR_11 : ((void*)0);
  VAR_12[4] = "dbname";
  VAR_13[4] = VAR_2;
  VAR_12[5] = "fallback_application_name";
  VAR_13[5] = VAR_6;
  VAR_12[6] = ((void*)0);
  VAR_13[6] = ((void*)0);

  VAR_9 = 0;

  VAR_8 = FUNC_0(VAR_12, VAR_13, 1);

  if (!VAR_8)
  {
   FUNC_5(VAR_7, "connection to database \"%s\" failed\n",
     VAR_2);
   return ((void*)0);
  }

  if (FUNC_4(VAR_8) == VAR_0 &&
   FUNC_1(VAR_8) &&
   !VAR_10)
  {
   FUNC_3(VAR_8);
   FUNC_6("Password: ", VAR_11, sizeof(VAR_11), 0);
   VAR_10 = 1;
   VAR_9 = 1;
  }
 } while (VAR_9);


 if (FUNC_4(VAR_8) == VAR_0)
 {
  FUNC_5(VAR_7, "connection to database \"%s\" failed:\n%s",
    VAR_2, FUNC_2(VAR_8));
  FUNC_3(VAR_8);
  return ((void*)0);
 }

 return VAR_8;
}
