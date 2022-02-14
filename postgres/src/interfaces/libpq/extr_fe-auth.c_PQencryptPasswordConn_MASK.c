
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errorMessage; } ;
typedef int PGresult ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,char*) ;
 char* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (scalar_t__) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char const*,char const*,int,char*) ;
 int FUNC_11 (int *,int ,...) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char const*) ;

char *
FUNC_15(PGconn *VAR_3, const char *VAR_4, const char *VAR_5,
       const char *VAR_6)
{

 char VAR_7[50 + 1];
 char *VAR_8 = ((void*)0);

 if (!VAR_3)
  return ((void*)0);


 if (VAR_6 == ((void*)0))
 {
  PGresult *VAR_9;
  char *VAR_10;

  VAR_9 = FUNC_1(VAR_3, "show password_encryption");
  if (VAR_9 == ((void*)0))
  {

   return ((void*)0);
  }
  if (FUNC_5(VAR_9) != VAR_2)
  {

   FUNC_0(VAR_9);
   return ((void*)0);
  }
  if (FUNC_4(VAR_9) != 1 || FUNC_3(VAR_9) != 1)
  {
   FUNC_0(VAR_9);
   FUNC_11(&VAR_3->errorMessage,
         FUNC_7("unexpected shape of result set returned for SHOW\n"));
   return ((void*)0);
  }
  VAR_10 = FUNC_2(VAR_9, 0, 0);

  if (FUNC_14(VAR_10) > 50)
  {
   FUNC_0(VAR_9);
   FUNC_11(&VAR_3->errorMessage,
         FUNC_7("password_encryption value too long\n"));
   return ((void*)0);
  }
  FUNC_13(VAR_7, VAR_10);
  FUNC_0(VAR_9);

  VAR_6 = VAR_7;
 }






 if (FUNC_12(VAR_6, "on") == 0 ||
  FUNC_12(VAR_6, "off") == 0)
  VAR_6 = "md5";




 if (FUNC_12(VAR_6, "scram-sha-256") == 0)
 {
  VAR_8 = FUNC_9(VAR_4);
 }
 else if (FUNC_12(VAR_6, "md5") == 0)
 {
  VAR_8 = FUNC_8(VAR_1 + 1);
  if (VAR_8)
  {
   if (!FUNC_10(VAR_4, VAR_5, FUNC_14(VAR_5), VAR_8))
   {
    FUNC_6(VAR_8);
    VAR_8 = ((void*)0);
   }
  }
 }
 else
 {
  FUNC_11(&VAR_3->errorMessage,
        FUNC_7("unrecognized password encryption algorithm \"%s\"\n"),
        VAR_6);
  return ((void*)0);
 }

 if (!VAR_8)
  FUNC_11(&VAR_3->errorMessage,
        FUNC_7("out of memory\n"));

 return VAR_8;
}
