
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int and_analyze; int analyze_only; int freeze; int full; int verbose; int disable_page_skipping; int skip_locked; void* min_mxid_age; void* min_xid_age; } ;
typedef TYPE_1__ vacuumingOptions ;
typedef int vacopts ;
struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_9__ {int * head; int * member_1; int * member_0; } ;
typedef TYPE_2__ SimpleStringList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char const*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int,char**,char*,struct option*,int*) ;
 int FUNC_9 (int,char**,char*,int ) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*) ;
 void* FUNC_13 (int ) ;

 int FUNC_14 (char*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int VAR_8 ;
 int FUNC_17 (TYPE_1__*,int,char const*,char*,char*,char*,int,int,char const*,int,int) ;
 int FUNC_18 (char const*,TYPE_1__*,int,TYPE_2__*,char*,char*,char*,int,int,char const*,int,int) ;

int
FUNC_19(int VAR_9, char *VAR_10[])
{
 static struct option VAR_11[] = {
  {"host", 128, ((void*)0), 'h'},
  {"port", 128, ((void*)0), 'p'},
  {"username", 128, ((void*)0), 'U'},
  {"no-password", 129, ((void*)0), 'w'},
  {"password", 129, ((void*)0), 'W'},
  {"echo", 129, ((void*)0), 'e'},
  {"quiet", 129, ((void*)0), 'q'},
  {"dbname", 128, ((void*)0), 'd'},
  {"analyze", 129, ((void*)0), 'z'},
  {"analyze-only", 129, ((void*)0), 'Z'},
  {"freeze", 129, ((void*)0), 'F'},
  {"all", 129, ((void*)0), 'a'},
  {"table", 128, ((void*)0), 't'},
  {"full", 129, ((void*)0), 'f'},
  {"verbose", 129, ((void*)0), 'v'},
  {"jobs", 128, ((void*)0), 'j'},
  {"maintenance-db", 128, ((void*)0), 2},
  {"analyze-in-stages", 129, ((void*)0), 3},
  {"disable-page-skipping", 129, ((void*)0), 4},
  {"skip-locked", 129, ((void*)0), 5},
  {"min-xid-age", 128, ((void*)0), 6},
  {"min-mxid-age", 128, ((void*)0), 7},
  {((void*)0), 0, ((void*)0), 0}
 };

 const char *VAR_12;
 int VAR_13;
 int VAR_14;
 const char *VAR_15 = ((void*)0);
 const char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 enum trivalue VAR_20 = VAR_2;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 vacuumingOptions VAR_23;
 bool VAR_24 = 0;
 bool VAR_25 = 0;
 SimpleStringList VAR_26 = {((void*)0), ((void*)0)};
 int VAR_27 = 1;
 int VAR_28 = 0;


 FUNC_10(&VAR_23, 0, sizeof(VAR_23));

 FUNC_12(VAR_10[0]);
 VAR_12 = FUNC_5(VAR_10[0]);
 FUNC_14(VAR_10[0], FUNC_0("pgscripts"));

 FUNC_9(VAR_9, VAR_10, "vacuumdb", VAR_5);

 while ((VAR_14 = FUNC_8(VAR_9, VAR_10, "h:p:U:wWeqd:zZFat:fvj:", VAR_11, &VAR_13)) != -1)
 {
  switch (VAR_14)
  {
   case 'h':
    VAR_17 = FUNC_13(VAR_6);
    break;
   case 'p':
    VAR_18 = FUNC_13(VAR_6);
    break;
   case 'U':
    VAR_19 = FUNC_13(VAR_6);
    break;
   case 'w':
    VAR_20 = VAR_3;
    break;
   case 'W':
    VAR_20 = VAR_4;
    break;
   case 'e':
    VAR_21 = 1;
    break;
   case 'q':
    VAR_22 = 1;
    break;
   case 'd':
    VAR_15 = FUNC_13(VAR_6);
    break;
   case 'z':
    VAR_23.and_analyze = 1;
    break;
   case 'Z':
    VAR_23.analyze_only = 1;
    break;
   case 'F':
    VAR_23.freeze = 1;
    break;
   case 'a':
    VAR_25 = 1;
    break;
   case 't':
    {
     FUNC_16(&VAR_26, VAR_6);
     VAR_28++;
     break;
    }
   case 'f':
    VAR_23.full = 1;
    break;
   case 'v':
    VAR_23.verbose = 1;
    break;
   case 'j':
    VAR_27 = FUNC_2(VAR_6);
    if (VAR_27 <= 0)
    {
     FUNC_11("number of parallel jobs must be at least 1");
     FUNC_3(1);
    }
    break;
   case 2:
    VAR_16 = FUNC_13(VAR_6);
    break;
   case 3:
    VAR_24 = VAR_23.analyze_only = 1;
    break;
   case 4:
    VAR_23.disable_page_skipping = 1;
    break;
   case 5:
    VAR_23.skip_locked = 1;
    break;
   case 6:
    VAR_23.min_xid_age = FUNC_2(VAR_6);
    if (VAR_23.min_xid_age <= 0)
    {
     FUNC_11("minimum transaction ID age must be at least 1");
     FUNC_3(1);
    }
    break;
   case 7:
    VAR_23.min_mxid_age = FUNC_2(VAR_6);
    if (VAR_23.min_mxid_age <= 0)
    {
     FUNC_11("minimum multixact ID age must be at least 1");
     FUNC_3(1);
    }
    break;
   default:
    FUNC_4(VAR_8, FUNC_1("Try \"%s --help\" for more information.\n"), VAR_12);
    FUNC_3(1);
  }
 }





 if (VAR_7 < VAR_9 && VAR_15 == ((void*)0))
 {
  VAR_15 = VAR_10[VAR_7];
  VAR_7++;
 }

 if (VAR_7 < VAR_9)
 {
  FUNC_11("too many command-line arguments (first is \"%s\")",
      VAR_10[VAR_7]);
  FUNC_4(VAR_8, FUNC_1("Try \"%s --help\" for more information.\n"), VAR_12);
  FUNC_3(1);
 }

 if (VAR_23.analyze_only)
 {
  if (VAR_23.full)
  {
   FUNC_11("cannot use the \"%s\" option when performing only analyze",
       "full");
   FUNC_3(1);
  }
  if (VAR_23.freeze)
  {
   FUNC_11("cannot use the \"%s\" option when performing only analyze",
       "freeze");
   FUNC_3(1);
  }
  if (VAR_23.disable_page_skipping)
  {
   FUNC_11("cannot use the \"%s\" option when performing only analyze",
       "disable-page-skipping");
   FUNC_3(1);
  }

 }

 FUNC_15();


 if (VAR_28 && (VAR_27 > VAR_28))
  VAR_27 = VAR_28;

 if (VAR_25)
 {
  if (VAR_15)
  {
   FUNC_11("cannot vacuum all databases and a specific one at the same time");
   FUNC_3(1);
  }
  if (VAR_26.head != ((void*)0))
  {
   FUNC_11("cannot vacuum specific table(s) in all databases");
   FUNC_3(1);
  }

  FUNC_17(&VAR_23,
        VAR_24,
        VAR_16,
        VAR_17, VAR_18, VAR_19, VAR_20,
        VAR_27,
        VAR_12, VAR_21, VAR_22);
 }
 else
 {
  if (VAR_15 == ((void*)0))
  {
   if (FUNC_7("PGDATABASE"))
    VAR_15 = FUNC_7("PGDATABASE");
   else if (FUNC_7("PGUSER"))
    VAR_15 = FUNC_7("PGUSER");
   else
    VAR_15 = FUNC_6(VAR_12);
  }

  if (VAR_24)
  {
   int VAR_29;

   for (VAR_29 = 0; VAR_29 < VAR_1; VAR_29++)
   {
    FUNC_18(VAR_15, &VAR_23,
         VAR_29,
         &VAR_26,
         VAR_17, VAR_18, VAR_19, VAR_20,
         VAR_27,
         VAR_12, VAR_21, VAR_22);
   }
  }
  else
   FUNC_18(VAR_15, &VAR_23,
        VAR_0,
        &VAR_26,
        VAR_17, VAR_18, VAR_19, VAR_20,
        VAR_27,
        VAR_12, VAR_21, VAR_22);
 }

 FUNC_3(0);
}
