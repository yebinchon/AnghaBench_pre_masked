
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sverbuf ;
typedef int backslashResult ;
struct TYPE_8__ {int topt; } ;
struct TYPE_10__ {int sversion; int * queryFout; TYPE_1__ popt; } ;
struct TYPE_9__ {int data; } ;
typedef int PsqlScanState ;
typedef TYPE_2__* PQExpBuffer ;
typedef int Oid ;
typedef int FILE ;
typedef int EditableObjectType ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *,int ,char*) ;
 TYPE_3__ VAR_6 ;
 char* FUNC_13 (int ,int ,int *,int) ;
 int * VAR_7 ;
 int * FUNC_14 (char const*,char) ;

__attribute__((used)) static backslashResult
FUNC_15(PsqlScanState VAR_8, bool VAR_9,
       const char *VAR_10, bool VAR_11)
{
 backslashResult VAR_12 = VAR_5;

 if (VAR_9)
 {
  bool VAR_13 = (FUNC_14(VAR_10, '+') != ((void*)0));
  PQExpBuffer VAR_14;
  char *VAR_15;
  Oid VAR_16 = VAR_2;
  EditableObjectType VAR_17 = VAR_11 ? VAR_0 : VAR_1;

  VAR_14 = FUNC_3();
  VAR_15 = FUNC_13(VAR_8,
            VAR_3, ((void*)0), 1);
  if (VAR_6.sversion < (VAR_11 ? 80400 : 70400))
  {
   char VAR_18[32];

   FUNC_5(VAR_6.sversion, 0,
          VAR_18, sizeof(VAR_18));
   if (VAR_11)
    FUNC_11("The server (version %s) does not support showing function source.",
        VAR_18);
   else
    FUNC_11("The server (version %s) does not support showing view definitions.",
        VAR_18);
   VAR_12 = VAR_4;
  }
  else if (!VAR_15)
  {
   if (VAR_11)
    FUNC_11("function name is required");
   else
    FUNC_11("view name is required");
   VAR_12 = VAR_4;
  }
  else if (!FUNC_10(VAR_17, VAR_15, &VAR_16))
  {

   VAR_12 = VAR_4;
  }
  else if (!FUNC_8(VAR_17, VAR_16, VAR_14))
  {

   VAR_12 = VAR_4;
  }
  else
  {
   FILE *VAR_19;
   bool VAR_20;


   if (VAR_6.queryFout == VAR_7)
   {

    int VAR_21 = FUNC_2(VAR_14);

    VAR_19 = FUNC_1(VAR_21, &(VAR_6.popt.topt));
    VAR_20 = 1;
   }
   else
   {

    VAR_19 = VAR_6.queryFout;
    VAR_20 = 0;
   }

   if (VAR_13)
   {







    FUNC_12(VAR_19, VAR_14->data,
            VAR_11 ? "AS " : ((void*)0));
   }
   else
   {

    FUNC_6(VAR_14->data, VAR_19);
   }

   if (VAR_20)
    FUNC_0(VAR_19);
  }

  if (VAR_15)
   FUNC_7(VAR_15);
  FUNC_4(VAR_14);
 }
 else
  FUNC_9(VAR_8);

 return VAR_12;
}
