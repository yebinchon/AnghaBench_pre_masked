
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int password ;
typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
typedef int PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char const**,char const**,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 (char*,char*,int,int) ;

PGconn *
FUNC_10(const char *VAR_4, const char *VAR_5,
    const char *VAR_6, const char *VAR_7,
    enum trivalue VAR_8, const char *VAR_9,
    bool VAR_10, bool VAR_11, bool VAR_12)
{
 PGconn *VAR_13;
 bool VAR_14;
 static bool VAR_15 = 0;
 static char VAR_16[100];

 if (!VAR_12)
  VAR_15 = 0;

 if (!VAR_15 && VAR_8 == VAR_3)
 {
  FUNC_9("Password: ", VAR_16, sizeof(VAR_16), 0);
  VAR_15 = 1;
 }





 do
 {
  const char *VAR_17[7];
  const char *VAR_18[7];

  VAR_17[0] = "host";
  VAR_18[0] = VAR_5;
  VAR_17[1] = "port";
  VAR_18[1] = VAR_6;
  VAR_17[2] = "user";
  VAR_18[2] = VAR_7;
  VAR_17[3] = "password";
  VAR_18[3] = VAR_15 ? VAR_16 : ((void*)0);
  VAR_17[4] = "dbname";
  VAR_18[4] = VAR_4;
  VAR_17[5] = "fallback_application_name";
  VAR_18[5] = VAR_9;
  VAR_17[6] = ((void*)0);
  VAR_18[6] = ((void*)0);

  VAR_14 = 0;
  VAR_13 = FUNC_1(VAR_17, VAR_18, 1);

  if (!VAR_13)
  {
   FUNC_8("could not connect to database %s: out of memory",
       VAR_4);
   FUNC_7(1);
  }




  if (FUNC_5(VAR_13) == VAR_1 &&
   FUNC_2(VAR_13) &&
   VAR_8 != VAR_2)
  {
   FUNC_4(VAR_13);
   FUNC_9("Password: ", VAR_16, sizeof(VAR_16), 0);
   VAR_15 = 1;
   VAR_14 = 1;
  }
 } while (VAR_14);


 if (FUNC_5(VAR_13) == VAR_1)
 {
  if (VAR_11)
  {
   FUNC_4(VAR_13);
   return ((void*)0);
  }
  FUNC_8("could not connect to database %s: %s",
      VAR_4, FUNC_3(VAR_13));
  FUNC_7(1);
 }

 FUNC_0(FUNC_6(VAR_13, VAR_0, VAR_10));

 return VAR_13;
}
