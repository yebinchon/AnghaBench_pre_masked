
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ backslashResult ;
struct TYPE_2__ {int queryFout; scalar_t__ cur_cmd_interactive; } ;
typedef int * PsqlScanState ;
typedef int PQExpBuffer ;
typedef int * ConditionalStack ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (char*,int *,int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,char*) ;
 TYPE_1__ VAR_5 ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *,int ,int *,int) ;

backslashResult
FUNC_13(PsqlScanState VAR_6,
    ConditionalStack VAR_7,
    PQExpBuffer VAR_8,
    PQExpBuffer VAR_9)
{
 backslashResult VAR_10;
 char *VAR_11;
 char *VAR_12;

 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_7 != ((void*)0));


 VAR_11 = FUNC_10(VAR_6);


 VAR_10 = FUNC_4(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_10 == VAR_4)
 {
  FUNC_7("invalid command \\%s", VAR_11);
  if (VAR_5.cur_cmd_interactive)
   FUNC_8("Try \\? for help.");
  VAR_10 = VAR_3;
 }

 if (VAR_10 != VAR_3)
 {





  bool VAR_13 = FUNC_1(VAR_7);

  FUNC_3(VAR_7, VAR_0);
  while ((VAR_12 = FUNC_12(VAR_6,
            VAR_1, ((void*)0), 0)))
  {
   if (VAR_13)
    FUNC_9("\\%s: extra argument \"%s\" ignored", VAR_11, VAR_12);
   FUNC_6(VAR_12);
  }
  FUNC_2(VAR_7);
 }
 else
 {

  while ((VAR_12 = FUNC_12(VAR_6,
            VAR_2, ((void*)0), 0)))
   FUNC_6(VAR_12);
 }


 FUNC_11(VAR_6);

 FUNC_6(VAR_11);


 FUNC_5(VAR_5.queryFout);

 return VAR_10;
}
