
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* errMsg; char* errQuery; scalar_t__ resultStatus; int client_encoding; int * errFields; } ;
typedef int PQExpBuffer ;
typedef TYPE_1__ PGresult ;
typedef scalar_t__ PGVerbosity ;
typedef scalar_t__ PGContextVisibility ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 char* FUNC_0 (TYPE_1__ const*,int ) ;
 int FUNC_1 (int ,char const*,char const*,...) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*) ;
 char const* FUNC_5 (char*) ;
 int FUNC_6 (int ,char const*,int,int ) ;

void
FUNC_7(PQExpBuffer VAR_23, const PGresult *VAR_24,
      PGVerbosity VAR_25, PGContextVisibility VAR_26)
{
 const char *VAR_27;
 const char *VAR_28 = ((void*)0);
 int VAR_29 = 0;


 if (VAR_24 == ((void*)0))
 {
  FUNC_3(VAR_23, FUNC_5("out of memory\n"));
  return;
 }





 if (VAR_24->errFields == ((void*)0))
 {
  if (VAR_24->errMsg && VAR_24->errMsg[0])
   FUNC_3(VAR_23, VAR_24->errMsg);
  else
   FUNC_3(VAR_23, FUNC_5("no error message available\n"));
  return;
 }


 VAR_27 = FUNC_0(VAR_24, VAR_11);
 if (VAR_27)
  FUNC_1(VAR_23, "%s:  ", VAR_27);

 if (VAR_25 == VAR_18)
 {






  VAR_27 = FUNC_0(VAR_24, VAR_15);
  if (VAR_27)
  {
   FUNC_1(VAR_23, "%s\n", VAR_27);
   return;
  }
  VAR_25 = VAR_19;
 }

 if (VAR_25 == VAR_20)
 {
  VAR_27 = FUNC_0(VAR_24, VAR_15);
  if (VAR_27)
   FUNC_1(VAR_23, "%s: ", VAR_27);
 }
 VAR_27 = FUNC_0(VAR_24, VAR_9);
 if (VAR_27)
  FUNC_3(VAR_23, VAR_27);
 VAR_27 = FUNC_0(VAR_24, VAR_16);
 if (VAR_27)
 {
  if (VAR_25 != VAR_19 && VAR_24->errQuery != ((void*)0))
  {

   VAR_28 = VAR_24->errQuery;
   VAR_29 = FUNC_4(VAR_27);
  }
  else
  {


   FUNC_1(VAR_23, FUNC_5(" at character %s"),
         VAR_27);
  }
 }
 else
 {
  VAR_27 = FUNC_0(VAR_24, VAR_5);
  if (VAR_27)
  {
   VAR_28 = FUNC_0(VAR_24, VAR_6);
   if (VAR_25 != VAR_19 && VAR_28 != ((void*)0))
   {

    VAR_29 = FUNC_4(VAR_27);
   }
   else
   {


    FUNC_1(VAR_23, FUNC_5(" at character %s"),
          VAR_27);
   }
  }
 }
 FUNC_2(VAR_23, '\n');
 if (VAR_25 != VAR_19)
 {
  if (VAR_28 && VAR_29 > 0)
   FUNC_6(VAR_23, VAR_28, VAR_29,
        VAR_24->client_encoding);
  VAR_27 = FUNC_0(VAR_24, VAR_7);
  if (VAR_27)
   FUNC_1(VAR_23, FUNC_5("DETAIL:  %s\n"), VAR_27);
  VAR_27 = FUNC_0(VAR_24, VAR_8);
  if (VAR_27)
   FUNC_1(VAR_23, FUNC_5("HINT:  %s\n"), VAR_27);
  VAR_27 = FUNC_0(VAR_24, VAR_6);
  if (VAR_27)
   FUNC_1(VAR_23, FUNC_5("QUERY:  %s\n"), VAR_27);
  if (VAR_26 == VAR_21 ||
   (VAR_26 == VAR_22 &&
    VAR_24->resultStatus == VAR_0))
  {
   VAR_27 = FUNC_0(VAR_24, VAR_3);
   if (VAR_27)
    FUNC_1(VAR_23, FUNC_5("CONTEXT:  %s\n"),
          VAR_27);
  }
 }
 if (VAR_25 == VAR_20)
 {
  VAR_27 = FUNC_0(VAR_24, VAR_10);
  if (VAR_27)
   FUNC_1(VAR_23,
         FUNC_5("SCHEMA NAME:  %s\n"), VAR_27);
  VAR_27 = FUNC_0(VAR_24, VAR_17);
  if (VAR_27)
   FUNC_1(VAR_23,
         FUNC_5("TABLE NAME:  %s\n"), VAR_27);
  VAR_27 = FUNC_0(VAR_24, VAR_1);
  if (VAR_27)
   FUNC_1(VAR_23,
         FUNC_5("COLUMN NAME:  %s\n"), VAR_27);
  VAR_27 = FUNC_0(VAR_24, VAR_4);
  if (VAR_27)
   FUNC_1(VAR_23,
         FUNC_5("DATATYPE NAME:  %s\n"), VAR_27);
  VAR_27 = FUNC_0(VAR_24, VAR_2);
  if (VAR_27)
   FUNC_1(VAR_23,
         FUNC_5("CONSTRAINT NAME:  %s\n"), VAR_27);
 }
 if (VAR_25 == VAR_20)
 {
  const char *VAR_30;
  const char *VAR_31;

  VAR_30 = FUNC_0(VAR_24, VAR_12);
  VAR_31 = FUNC_0(VAR_24, VAR_14);
  VAR_27 = FUNC_0(VAR_24, VAR_13);
  if (VAR_27 || VAR_30 || VAR_31)
  {
   FUNC_3(VAR_23, FUNC_5("LOCATION:  "));
   if (VAR_27)
    FUNC_1(VAR_23, FUNC_5("%s, "), VAR_27);
   if (VAR_30 && VAR_31)
    FUNC_1(VAR_23, FUNC_5("%s:%s"),
          VAR_30, VAR_31);
   FUNC_2(VAR_23, '\n');
  }
 }
}
