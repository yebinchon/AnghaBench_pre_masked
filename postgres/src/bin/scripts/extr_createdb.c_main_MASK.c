
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,char*,char*) ;
 int FUNC_8 (TYPE_1__*,char) ;
 int FUNC_9 (TYPE_1__*,char*,int *) ;
 int * FUNC_10 (char const*,char*,char*,char*,int,char const*,int) ;
 int FUNC_11 (int) ;
 char* FUNC_12 (char const*) ;
 int FUNC_13 (int ,char*,char const*) ;
 char* FUNC_14 (char*) ;
 char* FUNC_15 (char const*) ;
 char* FUNC_16 (char*) ;
 int FUNC_17 (int,char**,char*,struct option*,int*) ;
 int FUNC_18 (int,char**,char*,int ) ;
 int VAR_4 ;
 int FUNC_19 (TYPE_1__*) ;

 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_20 (char*) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (char*) ;
 void* FUNC_23 (int ) ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (TYPE_1__*,char*,char*) ;

 int FUNC_26 (char*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_27 (char const*,char*) ;

int
FUNC_28(int VAR_8, char *VAR_9[])
{
 static struct option VAR_10[] = {
  {"host", 128, ((void*)0), 'h'},
  {"port", 128, ((void*)0), 'p'},
  {"username", 128, ((void*)0), 'U'},
  {"no-password", 129, ((void*)0), 'w'},
  {"password", 129, ((void*)0), 'W'},
  {"echo", 129, ((void*)0), 'e'},
  {"owner", 128, ((void*)0), 'O'},
  {"tablespace", 128, ((void*)0), 'D'},
  {"template", 128, ((void*)0), 'T'},
  {"encoding", 128, ((void*)0), 'E'},
  {"lc-collate", 128, ((void*)0), 1},
  {"lc-ctype", 128, ((void*)0), 2},
  {"locale", 128, ((void*)0), 'l'},
  {"maintenance-db", 128, ((void*)0), 3},
  {((void*)0), 0, ((void*)0), 0}
 };

 const char *VAR_11;
 int VAR_12;
 int VAR_13;

 const char *VAR_14 = ((void*)0);
 const char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 enum trivalue VAR_20 = VAR_1;
 bool VAR_21 = 0;
 char *VAR_22 = ((void*)0);
 char *VAR_23 = ((void*)0);
 char *VAR_24 = ((void*)0);
 char *VAR_25 = ((void*)0);
 char *VAR_26 = ((void*)0);
 char *VAR_27 = ((void*)0);
 char *VAR_28 = ((void*)0);

 PQExpBufferData VAR_29;

 PGconn *VAR_30;
 PGresult *VAR_31;

 FUNC_22(VAR_9[0]);
 VAR_11 = FUNC_14(VAR_9[0]);
 FUNC_26(VAR_9[0], FUNC_0("pgscripts"));

 FUNC_18(VAR_8, VAR_9, "createdb", VAR_4);

 while ((VAR_13 = FUNC_17(VAR_8, VAR_9, "h:p:U:wWeO:D:T:E:l:", VAR_10, &VAR_12)) != -1)
 {
  switch (VAR_13)
  {
   case 'h':
    VAR_17 = FUNC_23(VAR_5);
    break;
   case 'p':
    VAR_18 = FUNC_23(VAR_5);
    break;
   case 'U':
    VAR_19 = FUNC_23(VAR_5);
    break;
   case 'w':
    VAR_20 = VAR_2;
    break;
   case 'W':
    VAR_20 = VAR_3;
    break;
   case 'e':
    VAR_21 = 1;
    break;
   case 'O':
    VAR_22 = FUNC_23(VAR_5);
    break;
   case 'D':
    VAR_23 = FUNC_23(VAR_5);
    break;
   case 'T':
    VAR_24 = FUNC_23(VAR_5);
    break;
   case 'E':
    VAR_25 = FUNC_23(VAR_5);
    break;
   case 1:
    VAR_26 = FUNC_23(VAR_5);
    break;
   case 2:
    VAR_27 = FUNC_23(VAR_5);
    break;
   case 'l':
    VAR_28 = FUNC_23(VAR_5);
    break;
   case 3:
    VAR_15 = FUNC_23(VAR_5);
    break;
   default:
    FUNC_13(VAR_7, FUNC_6("Try \"%s --help\" for more information.\n"), VAR_11);
    FUNC_11(1);
  }
 }

 switch (VAR_8 - VAR_6)
 {
  case 0:
   break;
  case 1:
   VAR_14 = VAR_9[VAR_6];
   break;
  case 2:
   VAR_14 = VAR_9[VAR_6];
   VAR_16 = VAR_9[VAR_6 + 1];
   break;
  default:
   FUNC_21("too many command-line arguments (first is \"%s\")",
       VAR_9[VAR_6 + 2]);
   FUNC_13(VAR_7, FUNC_6("Try \"%s --help\" for more information.\n"), VAR_11);
   FUNC_11(1);
 }

 if (VAR_28)
 {
  if (VAR_27)
  {
   FUNC_21("only one of --locale and --lc-ctype can be specified");
   FUNC_11(1);
  }
  if (VAR_26)
  {
   FUNC_21("only one of --locale and --lc-collate can be specified");
   FUNC_11(1);
  }
  VAR_27 = VAR_28;
  VAR_26 = VAR_28;
 }

 if (VAR_25)
 {
  if (FUNC_20(VAR_25) < 0)
  {
   FUNC_21("\"%s\" is not a valid encoding name", VAR_25);
   FUNC_11(1);
  }
 }

 if (VAR_14 == ((void*)0))
 {
  if (FUNC_16("PGDATABASE"))
   VAR_14 = FUNC_16("PGDATABASE");
  else if (FUNC_16("PGUSER"))
   VAR_14 = FUNC_16("PGUSER");
  else
   VAR_14 = FUNC_15(VAR_11);
 }

 FUNC_19(&VAR_29);

 FUNC_7(&VAR_29, "CREATE DATABASE %s",
       FUNC_12(VAR_14));

 if (VAR_22)
  FUNC_7(&VAR_29, " OWNER %s", FUNC_12(VAR_22));
 if (VAR_23)
  FUNC_7(&VAR_29, " TABLESPACE %s", FUNC_12(VAR_23));
 if (VAR_25)
  FUNC_7(&VAR_29, " ENCODING '%s'", VAR_25);
 if (VAR_24)
  FUNC_7(&VAR_29, " TEMPLATE %s", FUNC_12(VAR_24));
 if (VAR_26)
  FUNC_7(&VAR_29, " LC_COLLATE '%s'", VAR_26);
 if (VAR_27)
  FUNC_7(&VAR_29, " LC_CTYPE '%s'", VAR_27);

 FUNC_8(&VAR_29, ';');


 if (VAR_15 == ((void*)0) && FUNC_27(VAR_14, "postgres") == 0)
  VAR_15 = "template1";

 VAR_30 = FUNC_10(VAR_15, VAR_17, VAR_18, VAR_19,
           VAR_20, VAR_11, VAR_21);

 if (VAR_21)
  FUNC_24("%s\n", VAR_29.data);
 VAR_31 = FUNC_3(VAR_30, VAR_29.data);

 if (FUNC_5(VAR_31) != VAR_0)
 {
  FUNC_21("database creation failed: %s", FUNC_2(VAR_30));
  FUNC_4(VAR_30);
  FUNC_11(1);
 }

 FUNC_1(VAR_31);

 if (VAR_16)
 {
  FUNC_25(&VAR_29, "COMMENT ON DATABASE %s IS ", FUNC_12(VAR_14));
  FUNC_9(&VAR_29, VAR_16, VAR_30);
  FUNC_8(&VAR_29, ';');

  if (VAR_21)
   FUNC_24("%s\n", VAR_29.data);
  VAR_31 = FUNC_3(VAR_30, VAR_29.data);

  if (FUNC_5(VAR_31) != VAR_0)
  {
   FUNC_21("comment creation failed (database was created): %s",
       FUNC_2(VAR_30));
   FUNC_4(VAR_30);
   FUNC_11(1);
  }

  FUNC_1(VAR_31);
 }

 FUNC_4(VAR_30);

 FUNC_11(0);
}
