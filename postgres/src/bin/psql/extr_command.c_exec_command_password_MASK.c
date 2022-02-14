
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pw2 ;
typedef int pw1 ;
typedef int backslashResult ;
struct TYPE_8__ {int db; } ;
struct TYPE_7__ {int data; } ;
typedef int PsqlScanState ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGresult ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int ,char*,char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (TYPE_1__*,char*,int ) ;
 TYPE_3__ VAR_3 ;
 char* FUNC_14 (int ,int ,int *,int) ;
 int FUNC_15 (char*,char*,int,int) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static backslashResult
FUNC_18(PsqlScanState VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_5)
 {
  char *VAR_7 = FUNC_14(VAR_4,
              VAR_0, ((void*)0), 1);
  char VAR_8[100];
  char VAR_9[100];

  FUNC_15("Enter new password: ", VAR_8, sizeof(VAR_8), 0);
  FUNC_15("Enter it again: ", VAR_9, sizeof(VAR_9), 0);

  if (FUNC_16(VAR_8, VAR_9) != 0)
  {
   FUNC_11("Passwords didn't match.");
   VAR_6 = 0;
  }
  else
  {
   char *VAR_10;
   char *VAR_11;

   if (VAR_7)
    VAR_10 = VAR_7;
   else
    VAR_10 = FUNC_4(VAR_3.db);

   VAR_11 = FUNC_1(VAR_3.db, VAR_8, VAR_10, ((void*)0));

   if (!VAR_11)
   {
    FUNC_12("%s", FUNC_2(VAR_3.db));
    VAR_6 = 0;
   }
   else
   {
    PQExpBufferData VAR_12;
    PGresult *VAR_13;

    FUNC_10(&VAR_12);
    FUNC_13(&VAR_12, "ALTER USER %s PASSWORD ",
          FUNC_7(VAR_10));
    FUNC_6(&VAR_12, VAR_11, VAR_3.db);
    VAR_13 = FUNC_5(VAR_12.data);
    FUNC_17(&VAR_12);
    if (!VAR_13)
     VAR_6 = 0;
    else
     FUNC_0(VAR_13);
    FUNC_3(VAR_11);
   }
  }

  if (VAR_7)
   FUNC_8(VAR_7);
 }
 else
  FUNC_9(VAR_4);

 return VAR_6 ? VAR_2 : VAR_1;
}
