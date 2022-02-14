
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int (* rDestroy ) (TYPE_2__*) ;} ;
struct TYPE_12__ {scalar_t__ stmts; char* sourceText; char* prepStmtName; int atStart; int * commandTag; int * portalParams; } ;
typedef TYPE_1__* Portal ;
typedef int * ParamListInfo ;
typedef TYPE_2__ DestReceiver ;
typedef scalar_t__ CommandDest ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,scalar_t__) ;
 long VAR_6 ;
 TYPE_1__* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,long,int,int,TYPE_2__*,TYPE_2__*,char*) ;
 int FUNC_13 () ;
 int VAR_9 ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,int) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 char const* VAR_10 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 () ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int) ;
 int FUNC_25 (char*,...) ;
 int FUNC_26 () ;
 int VAR_11 ;
 int FUNC_27 (int ,char const*) ;
 int FUNC_28 (char) ;
 char* FUNC_29 (char*) ;
 int FUNC_30 (int *,int) ;
 int FUNC_31 () ;
 int FUNC_32 (TYPE_2__*) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void
FUNC_33(const char *VAR_13, long VAR_14)
{
 CommandDest VAR_15;
 DestReceiver *VAR_16;
 Portal VAR_17;
 bool VAR_18;
 char VAR_19[VAR_0];
 const char *VAR_20;
 const char *VAR_21;
 ParamListInfo VAR_22;
 bool VAR_23 = VAR_11;
 bool VAR_24;
 bool VAR_25;
 bool VAR_26 = 0;
 char VAR_27[32];


 VAR_15 = VAR_12;
 if (VAR_15 == VAR_1)
  VAR_15 = VAR_2;

 VAR_17 = FUNC_6(VAR_13);
 if (!FUNC_11(VAR_17))
  FUNC_20(VAR_5,
    (FUNC_21(VAR_4),
     FUNC_25("portal \"%s\" does not exist", VAR_13)));





 if (VAR_17->commandTag == ((void*)0))
 {
  FUNC_0(VAR_17->stmts == VAR_8);
  FUNC_10(VAR_15);
  return;
 }


 VAR_24 = FUNC_9(VAR_17->stmts);






 if (VAR_24)
 {
  VAR_20 = FUNC_29(VAR_17->sourceText);
  if (VAR_17->prepStmtName)
   VAR_21 = FUNC_29(VAR_17->prepStmtName);
  else
   VAR_21 = "<unnamed>";





  VAR_22 = ((void*)0);
 }
 else
 {
  VAR_20 = VAR_17->sourceText;
  if (VAR_17->prepStmtName)
   VAR_21 = VAR_17->prepStmtName;
  else
   VAR_21 = "<unnamed>";
  VAR_22 = VAR_17->portalParams;
 }




 VAR_10 = VAR_20;

 FUNC_27(VAR_9, VAR_20);

 FUNC_30(VAR_17->commandTag, 0);

 if (VAR_23)
  FUNC_13();

 FUNC_1(VAR_17->commandTag, VAR_15);





 VAR_16 = FUNC_4(VAR_15);
 if (VAR_15 == VAR_2)
  FUNC_14(VAR_16, VAR_17);





 FUNC_31();







 VAR_25 = !VAR_17->atStart;


 if (FUNC_18(VAR_17->stmts))
 {
  FUNC_20(VAR_7,
    (FUNC_25("%s %s%s%s: %s",
      VAR_25 ?
      FUNC_16("execute fetch from") :
      FUNC_16("execute"),
      VAR_21,
      *VAR_13 ? "/" : "",
      *VAR_13 ? VAR_13 : "",
      VAR_20),
     FUNC_24(1),
     FUNC_23(VAR_22)));
  VAR_26 = 1;
 }





 if (FUNC_7() &&
  !FUNC_8(VAR_17->stmts))
  FUNC_20(VAR_5,
    (FUNC_21(VAR_3),
     FUNC_25("current transaction is aborted, "
      "commands ignored until end of transaction block"),
     FUNC_22()));


 FUNC_2();




 if (VAR_14 <= 0)
  VAR_14 = VAR_6;

 VAR_18 = FUNC_12(VAR_17,
        VAR_14,
        1,
        !VAR_25 && VAR_14 == VAR_6,
        VAR_16,
        VAR_16,
        VAR_19);

 VAR_16->rDestroy(VAR_16);

 if (VAR_18)
 {
  if (VAR_24)
  {




   FUNC_26();
  }
  else
  {




   FUNC_3();





   FUNC_19();
  }


  FUNC_5(VAR_19, VAR_15);
 }
 else
 {

  if (VAR_12 == VAR_1)
   FUNC_28('s');
 }




 switch (FUNC_17(VAR_27, VAR_26))
 {
  case 1:
   FUNC_20(VAR_7,
     (FUNC_25("duration: %s ms", VAR_27),
      FUNC_24(1)));
   break;
  case 2:
   FUNC_20(VAR_7,
     (FUNC_25("duration: %s ms  %s %s%s%s: %s",
       VAR_27,
       VAR_25 ?
       FUNC_16("execute fetch from") :
       FUNC_16("execute"),
       VAR_21,
       *VAR_13 ? "/" : "",
       *VAR_13 ? VAR_13 : "",
       VAR_20),
      FUNC_24(1),
      FUNC_23(VAR_22)));
   break;
 }

 if (VAR_23)
  FUNC_15("EXECUTE MESSAGE STATISTICS");

 VAR_10 = ((void*)0);
}
