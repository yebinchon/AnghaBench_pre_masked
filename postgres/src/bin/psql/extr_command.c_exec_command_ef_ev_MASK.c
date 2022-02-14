
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sverbuf ;
typedef scalar_t__ backslashResult ;
struct TYPE_9__ {int sversion; } ;
struct TYPE_8__ {char* data; } ;
typedef int PsqlScanState ;
typedef TYPE_1__* PQExpBuffer ;
typedef int Oid ;
typedef int EditableObjectType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int,int*) ;
 int FUNC_3 (int,int,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (char*,...) ;
 TYPE_3__ VAR_7 ;
 char* FUNC_9 (int ,int ,int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 char* FUNC_12 (char const*,char) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char const*,char*,int) ;

__attribute__((used)) static backslashResult
FUNC_15(PsqlScanState VAR_8, bool VAR_9,
       PQExpBuffer VAR_10, bool VAR_11)
{
 backslashResult VAR_12 = VAR_6;

 if (VAR_9)
 {
  char *VAR_13 = FUNC_9(VAR_8,
               VAR_3,
               ((void*)0), 1);
  int VAR_14 = -1;

  if (VAR_7.sversion < (VAR_11 ? 80400 : 70400))
  {
   char VAR_15[32];

   FUNC_3(VAR_7.sversion, 0,
          VAR_15, sizeof(VAR_15));
   if (VAR_11)
    FUNC_8("The server (version %s) does not support editing function source.",
        VAR_15);
   else
    FUNC_8("The server (version %s) does not support editing view definitions.",
        VAR_15);
   VAR_12 = VAR_4;
  }
  else if (!VAR_10)
  {
   FUNC_8("no query buffer");
   VAR_12 = VAR_4;
  }
  else
  {
   Oid VAR_16 = VAR_2;
   EditableObjectType VAR_17 = VAR_11 ? VAR_0 : VAR_1;

   VAR_14 = FUNC_13(VAR_13);
   if (VAR_14 == 0)
   {

    VAR_12 = VAR_4;
   }
   else if (!VAR_13)
   {

    FUNC_11(VAR_10);
    if (VAR_11)
     FUNC_1(VAR_10,
           "CREATE FUNCTION ( )\n"
           " RETURNS \n"
           " LANGUAGE \n"
           " -- common options:  IMMUTABLE  STABLE  STRICT  SECURITY DEFINER\n"
           "AS $function$\n"
           "\n$function$\n");
    else
     FUNC_1(VAR_10,
           "CREATE VIEW  AS\n"
           " SELECT \n"
           "  -- something...\n");
   }
   else if (!FUNC_7(VAR_17, VAR_13, &VAR_16))
   {

    VAR_12 = VAR_4;
   }
   else if (!FUNC_5(VAR_17, VAR_16, VAR_10))
   {

    VAR_12 = VAR_4;
   }
   else if (VAR_11 && VAR_14 > 0)
   {
    const char *VAR_18 = VAR_10->data;

    while (*VAR_18 != '\0')
    {
     if (FUNC_14(VAR_18, "AS ", 3) == 0)
      break;
     VAR_14++;

     VAR_18 = FUNC_12(VAR_18, '\n');
     if (!VAR_18)
      break;
     VAR_18++;
    }
   }
  }

  if (VAR_12 != VAR_4)
  {
   bool VAR_19 = 0;

   if (!FUNC_2(((void*)0), VAR_10, VAR_14, &VAR_19))
    VAR_12 = VAR_4;
   else if (!VAR_19)
    FUNC_10(FUNC_0("No changes"));
   else
    VAR_12 = VAR_5;
  }

  if (VAR_13)
   FUNC_4(VAR_13);
 }
 else
  FUNC_6(VAR_8);

 return VAR_12;
}
