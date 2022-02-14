
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int db; int vars; } ;
struct TYPE_5__ {char* data; } ;
typedef int PsqlScanQuoteType ;
typedef TYPE_1__ PQExpBufferData ;
typedef int ConditionalStack ;


 char* FUNC_0 (int ,char const*) ;




 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ,char const*,int ) ;
 char* FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char const*) ;
 char* FUNC_11 (char const*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_12 (char const*) ;

char *
FUNC_13(const char *VAR_1, PsqlScanQuoteType VAR_2,
      void *VAR_3)
{
 char *VAR_4 = ((void*)0);
 const char *VAR_5;


 if (VAR_3 && !FUNC_6((ConditionalStack) VAR_3))
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_0.vars, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 switch (VAR_2)
 {
  case 131:
   VAR_4 = FUNC_11(VAR_5);
   break;
  case 128:
  case 129:
   {




    char *VAR_6;

    if (!VAR_0.db)
    {
     FUNC_9("cannot escape without active connection");
     return ((void*)0);
    }

    if (VAR_2 == 128)
     VAR_6 =
      FUNC_3(VAR_0.db, VAR_5, FUNC_12(VAR_5));
    else
     VAR_6 =
      FUNC_2(VAR_0.db, VAR_5, FUNC_12(VAR_5));

    if (VAR_6 == ((void*)0))
    {
     const char *VAR_7 = FUNC_1(VAR_0.db);

     FUNC_10("%s", VAR_7);
     return ((void*)0);
    }






    VAR_4 = FUNC_11(VAR_6);
    FUNC_4(VAR_6);
    break;
   }
  case 130:
   {






    PQExpBufferData VAR_8;

    FUNC_8(&VAR_8);
    if (!FUNC_5(&VAR_8, VAR_5))
    {
     FUNC_9("shell command argument contains a newline or carriage return: \"%s\"",
         VAR_5);
     FUNC_7(VAR_8.data);
     return ((void*)0);
    }
    VAR_4 = VAR_8.data;
    break;
   }


 }

 return VAR_4;
}
