
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union config_var_val {void* stringval; } ;
struct stat {int dummy; } ;
struct config_generic {scalar_t__ context; int flags; scalar_t__ vartype; } ;
struct TYPE_5__ {char* name; int kind; } ;
struct TYPE_4__ {TYPE_2__* setstmt; } ;
typedef int FILE ;
typedef int ConfigVariable ;
typedef int AutoConfTmpFileName ;
typedef int AutoConfFileName ;
typedef TYPE_1__ AlterSystemStmt ;


 int * FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *,char*,int ,int ,int **,int **) ;




 int FUNC_12 (int volatile) ;
 int FUNC_13 (char*,char*,int ) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,...) ;
 struct config_generic* FUNC_19 (char*,int,int ) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (struct config_generic*,char*,char*,int ,int ,union config_var_val*,void**) ;
 int FUNC_22 (int **,int **,char*,char*) ;
 int FUNC_23 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_24 (char*,struct stat*) ;
 scalar_t__ FUNC_25 (char*,char) ;
 int FUNC_26 () ;
 int FUNC_27 (char*) ;
 int FUNC_28 (int volatile,char*,int *) ;

void
FUNC_29(AlterSystemStmt *VAR_19)
{
 char *VAR_20;
 char *VAR_21;
 bool VAR_22 = 0;
 ConfigVariable *VAR_23 = ((void*)0);
 ConfigVariable *VAR_24 = ((void*)0);
 volatile int VAR_25;
 char VAR_26[VAR_11];
 char VAR_27[VAR_11];

 if (!FUNC_26())
  FUNC_15(VAR_6,
    (FUNC_16(VAR_3),
     (FUNC_18("must be superuser to execute ALTER SYSTEM command"))));




 VAR_20 = VAR_19->setstmt->name;

 switch (VAR_19->setstmt->kind)
 {
  case 128:
   VAR_21 = FUNC_2(VAR_19->setstmt);
   break;

  case 129:
  case 131:
   VAR_21 = ((void*)0);
   break;

  case 130:
   VAR_21 = ((void*)0);
   VAR_22 = 1;
   break;

  default:
   FUNC_14(VAR_6, "unrecognized alter system stmt type: %d",
     VAR_19->setstmt->kind);
   break;
 }




 if (!VAR_22)
 {
  struct config_generic *VAR_28;

  VAR_28 = FUNC_19(VAR_20, 0, VAR_6);
  if (VAR_28 == ((void*)0))
   FUNC_15(VAR_6,
     (FUNC_16(VAR_5),
      FUNC_18("unrecognized configuration parameter \"%s\"",
       VAR_20)));





  if ((VAR_28->context == VAR_15) ||
   (VAR_28->flags & VAR_8) ||
   (VAR_28->flags & VAR_7))
   FUNC_15(VAR_6,
     (FUNC_16(VAR_1),
      FUNC_18("parameter \"%s\" cannot be changed",
       VAR_20)));




  if (VAR_21)
  {
   union config_var_val VAR_29;
   void *VAR_30 = ((void*)0);


   if (!FUNC_21(VAR_28, VAR_20, VAR_21,
            VAR_17, VAR_6,
            &VAR_29, &VAR_30))
    FUNC_15(VAR_6,
      (FUNC_16(VAR_4),
       FUNC_18("invalid value for parameter \"%s\": \"%s\"",
        VAR_20, VAR_21)));

   if (VAR_28->vartype == VAR_16 && VAR_29.stringval != ((void*)0))
    FUNC_20(VAR_29.stringval);
   if (VAR_30)
    FUNC_20(VAR_30);






   if (FUNC_25(VAR_21, '\n'))
    FUNC_15(VAR_6,
      (FUNC_16(VAR_4),
       FUNC_18("parameter value for ALTER SYSTEM must not contain a newline")));
  }
 }





 FUNC_23(VAR_26, sizeof(VAR_26), "%s",
    VAR_18);
 FUNC_23(VAR_27, sizeof(VAR_27), "%s.%s",
    VAR_26,
    "tmp");






 FUNC_5(VAR_0, VAR_10);





 if (!VAR_22)
 {
  struct stat VAR_31;

  if (FUNC_24(VAR_26, &VAR_31) == 0)
  {

   FILE *VAR_32;

   VAR_32 = FUNC_0(VAR_26, "r");
   if (VAR_32 == ((void*)0))
    FUNC_15(VAR_6,
      (FUNC_17(),
       FUNC_18("could not open file \"%s\": %m",
        VAR_26)));


   if (!FUNC_11(VAR_32, VAR_26, 0, VAR_9, &VAR_23, &VAR_24))
    FUNC_15(VAR_6,
      (FUNC_16(VAR_2),
       FUNC_18("could not parse contents of file \"%s\"",
        VAR_26)));

   FUNC_4(VAR_32);
  }





  FUNC_22(&VAR_23, &VAR_24, VAR_20, VAR_21);
 }
 VAR_25 = FUNC_1(VAR_27,
        VAR_12 | VAR_13 | VAR_14);
 if (VAR_25 < 0)
  FUNC_15(VAR_6,
    (FUNC_17(),
     FUNC_18("could not open file \"%s\": %m",
      VAR_27)));





 FUNC_10();
 {

  FUNC_28(VAR_25, VAR_27, VAR_23);


  FUNC_12(VAR_25);
  VAR_25 = -1;






  FUNC_13(VAR_27, VAR_26, VAR_6);
 }
 FUNC_7();
 {

  if (VAR_25 >= 0)
   FUNC_12(VAR_25);


  (void) FUNC_27(VAR_27);

  FUNC_9();
 }
 FUNC_8();

 FUNC_3(VAR_23);

 FUNC_6(VAR_0);
}
