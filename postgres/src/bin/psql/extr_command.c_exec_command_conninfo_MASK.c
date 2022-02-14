
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int db; } ;
typedef int PsqlScanState ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int VAR_0 ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static backslashResult
FUNC_11(PsqlScanState VAR_2, bool VAR_3)
{
 if (VAR_3)
 {
  char *VAR_4 = FUNC_0(VAR_1.db);

  if (VAR_4 == ((void*)0))
   FUNC_9(FUNC_5("You are currently not connected to a database.\n"));
  else
  {
   char *VAR_5 = FUNC_1(VAR_1.db);
   char *VAR_6 = FUNC_2(VAR_1.db);





   if (FUNC_6(VAR_5))
   {
    if (VAR_6 && *VAR_6)
     FUNC_9(FUNC_5("You are connected to database \"%s\" as user \"%s\" on address \"%s\" at port \"%s\".\n"),
         VAR_4, FUNC_4(VAR_1.db), VAR_6, FUNC_3(VAR_1.db));
    else
     FUNC_9(FUNC_5("You are connected to database \"%s\" as user \"%s\" via socket in \"%s\" at port \"%s\".\n"),
         VAR_4, FUNC_4(VAR_1.db), VAR_5, FUNC_3(VAR_1.db));
   }
   else
   {
    if (VAR_6 && *VAR_6 && FUNC_10(VAR_5, VAR_6) != 0)
     FUNC_9(FUNC_5("You are connected to database \"%s\" as user \"%s\" on host \"%s\" (address \"%s\") at port \"%s\".\n"),
         VAR_4, FUNC_4(VAR_1.db), VAR_5, VAR_6, FUNC_3(VAR_1.db));
    else
     FUNC_9(FUNC_5("You are connected to database \"%s\" as user \"%s\" on host \"%s\" at port \"%s\".\n"),
         VAR_4, FUNC_4(VAR_1.db), VAR_5, FUNC_3(VAR_1.db));
   }
   FUNC_8();
   FUNC_7();
  }
 }

 return VAR_0;
}
