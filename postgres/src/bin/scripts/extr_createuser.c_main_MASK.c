
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
typedef int pw2 ;
typedef int newuser_buf ;
typedef int newpassword_buf ;
typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_13__ {char* data; } ;
struct TYPE_12__ {TYPE_1__* head; int * member_1; int * member_0; } ;
struct TYPE_11__ {char const* val; struct TYPE_11__* next; } ;
typedef TYPE_1__ SimpleStringListCell ;
typedef TYPE_2__ SimpleStringList ;
typedef TYPE_3__ PQExpBufferData ;
typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,char*,char const*,int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_3__*,char*,char*) ;
 int FUNC_10 (TYPE_3__*,char) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (TYPE_3__*,char*,int *) ;
 int * FUNC_13 (char*,char*,char*,char*,int,char const*,int,int,int) ;
 int FUNC_14 (int) ;
 char* FUNC_15 (char const*) ;
 int FUNC_16 (int ,char*,...) ;
 char* FUNC_17 (char*) ;
 char* FUNC_18 (char const*) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (int,char**,char*,struct option*,int*) ;
 int FUNC_21 (int,char**,char*,int ) ;
 int VAR_4 ;
 int FUNC_22 (TYPE_3__*) ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_23 (char*,char*) ;
 int FUNC_24 (char*) ;
 char* FUNC_25 (int ) ;
 int FUNC_26 (char*,char*) ;
 int FUNC_27 (TYPE_3__*,char*,char*) ;

 int FUNC_28 (char*,int ) ;
 int FUNC_29 (char*,char*,int,int) ;
 int FUNC_30 (TYPE_2__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_31 (char*,char*) ;
 scalar_t__ FUNC_32 (char*) ;

int
FUNC_33(int VAR_8, char *VAR_9[])
{
 static struct option VAR_10[] = {
  {"host", 128, ((void*)0), 'h'},
  {"port", 128, ((void*)0), 'p'},
  {"username", 128, ((void*)0), 'U'},
  {"role", 128, ((void*)0), 'g'},
  {"no-password", 129, ((void*)0), 'w'},
  {"password", 129, ((void*)0), 'W'},
  {"echo", 129, ((void*)0), 'e'},
  {"createdb", 129, ((void*)0), 'd'},
  {"no-createdb", 129, ((void*)0), 'D'},
  {"superuser", 129, ((void*)0), 's'},
  {"no-superuser", 129, ((void*)0), 'S'},
  {"createrole", 129, ((void*)0), 'r'},
  {"no-createrole", 129, ((void*)0), 'R'},
  {"inherit", 129, ((void*)0), 'i'},
  {"no-inherit", 129, ((void*)0), 'I'},
  {"login", 129, ((void*)0), 'l'},
  {"no-login", 129, ((void*)0), 'L'},
  {"replication", 129, ((void*)0), 1},
  {"no-replication", 129, ((void*)0), 2},
  {"interactive", 129, ((void*)0), 3},
  {"connection-limit", 128, ((void*)0), 'c'},
  {"pwprompt", 129, ((void*)0), 'P'},
  {"encrypted", 129, ((void*)0), 'E'},
  {((void*)0), 0, ((void*)0), 0}
 };

 const char *VAR_11;
 int VAR_12;
 int VAR_13;
 const char *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 SimpleStringList VAR_18 = {((void*)0), ((void*)0)};
 enum trivalue VAR_19 = VAR_1;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 char *VAR_22 = ((void*)0);
 bool VAR_23 = 0;
 char *VAR_24 = ((void*)0);
 char VAR_25[128];
 char VAR_26[100];


 enum trivalue VAR_27 = VAR_1,
    VAR_28 = VAR_1,
    VAR_29 = VAR_1,
    VAR_30 = VAR_1,
    VAR_31 = VAR_1,
    VAR_32 = VAR_1;

 PQExpBufferData VAR_33;

 PGconn *VAR_34;
 PGresult *VAR_35;

 FUNC_24(VAR_9[0]);
 VAR_11 = FUNC_17(VAR_9[0]);
 FUNC_28(VAR_9[0], FUNC_0("pgscripts"));

 FUNC_21(VAR_8, VAR_9, "createuser", VAR_4);

 while ((VAR_13 = FUNC_20(VAR_8, VAR_9, "h:p:U:g:wWedDsSrRiIlLc:PE",
       VAR_10, &VAR_12)) != -1)
 {
  switch (VAR_13)
  {
   case 'h':
    VAR_15 = FUNC_25(VAR_5);
    break;
   case 'p':
    VAR_16 = FUNC_25(VAR_5);
    break;
   case 'U':
    VAR_17 = FUNC_25(VAR_5);
    break;
   case 'g':
    FUNC_30(&VAR_18, VAR_5);
    break;
   case 'w':
    VAR_19 = VAR_2;
    break;
   case 'W':
    VAR_19 = VAR_3;
    break;
   case 'e':
    VAR_20 = 1;
    break;
   case 'd':
    VAR_27 = VAR_3;
    break;
   case 'D':
    VAR_27 = VAR_2;
    break;
   case 's':
    VAR_28 = VAR_3;
    break;
   case 'S':
    VAR_28 = VAR_2;
    break;
   case 'r':
    VAR_29 = VAR_3;
    break;
   case 'R':
    VAR_29 = VAR_2;
    break;
   case 'i':
    VAR_30 = VAR_3;
    break;
   case 'I':
    VAR_30 = VAR_2;
    break;
   case 'l':
    VAR_31 = VAR_3;
    break;
   case 'L':
    VAR_31 = VAR_2;
    break;
   case 'c':
    VAR_22 = FUNC_25(VAR_5);
    break;
   case 'P':
    VAR_23 = 1;
    break;
   case 'E':

    break;
   case 1:
    VAR_32 = VAR_3;
    break;
   case 2:
    VAR_32 = VAR_2;
    break;
   case 3:
    VAR_21 = 1;
    break;
   default:
    FUNC_16(VAR_7, FUNC_8("Try \"%s --help\" for more information.\n"), VAR_11);
    FUNC_14(1);
  }
 }

 switch (VAR_8 - VAR_6)
 {
  case 0:
   break;
  case 1:
   VAR_14 = VAR_9[VAR_6];
   break;
  default:
   FUNC_23("too many command-line arguments (first is \"%s\")",
       VAR_9[VAR_6 + 1]);
   FUNC_16(VAR_7, FUNC_8("Try \"%s --help\" for more information.\n"), VAR_11);
   FUNC_14(1);
 }

 if (VAR_14 == ((void*)0))
 {
  if (VAR_21)
  {
   FUNC_29("Enter name of role to add: ",
        VAR_25, sizeof(VAR_25), 1);
   VAR_14 = VAR_25;
  }
  else
  {
   if (FUNC_19("PGUSER"))
    VAR_14 = FUNC_19("PGUSER");
   else
    VAR_14 = FUNC_18(VAR_11);
  }
 }

 if (VAR_23)
 {
  char VAR_36[100];

  FUNC_29("Enter password for new role: ",
       VAR_26, sizeof(VAR_26), 0);
  FUNC_29("Enter it again: ", VAR_36, sizeof(VAR_36), 0);
  if (FUNC_31(VAR_26, VAR_36) != 0)
  {
   FUNC_16(VAR_7, "%s", FUNC_8("Passwords didn't match.\n"));
   FUNC_14(1);
  }
  VAR_24 = VAR_26;
 }

 if (VAR_28 == 0)
 {
  if (VAR_21 && FUNC_32("Shall the new role be a superuser?"))
   VAR_28 = VAR_3;
  else
   VAR_28 = VAR_2;
 }

 if (VAR_28 == VAR_3)
 {

  VAR_27 = VAR_3;
  VAR_29 = VAR_3;
 }

 if (VAR_27 == 0)
 {
  if (VAR_21 && FUNC_32("Shall the new role be allowed to create databases?"))
   VAR_27 = VAR_3;
  else
   VAR_27 = VAR_2;
 }

 if (VAR_29 == 0)
 {
  if (VAR_21 && FUNC_32("Shall the new role be allowed to create more new roles?"))
   VAR_29 = VAR_3;
  else
   VAR_29 = VAR_2;
 }

 if (VAR_30 == 0)
  VAR_30 = VAR_3;

 if (VAR_31 == 0)
  VAR_31 = VAR_3;

 VAR_34 = FUNC_13("postgres", VAR_15, VAR_16, VAR_17, VAR_19,
         VAR_11, VAR_20, 0, 0);

 FUNC_22(&VAR_33);

 FUNC_27(&VAR_33, "CREATE ROLE %s", FUNC_15(VAR_14));
 if (VAR_24)
 {
  char *VAR_37;

  FUNC_11(&VAR_33, " PASSWORD ");

  VAR_37 = FUNC_2(VAR_34,
               VAR_24,
               VAR_14,
               ((void*)0));
  if (!VAR_37)
  {
   FUNC_23("password encryption failed: %s",
       FUNC_3(VAR_34));
   FUNC_14(1);
  }
  FUNC_12(&VAR_33, VAR_37, VAR_34);
  FUNC_6(VAR_37);
 }
 if (VAR_28 == VAR_3)
  FUNC_11(&VAR_33, " SUPERUSER");
 if (VAR_28 == VAR_2)
  FUNC_11(&VAR_33, " NOSUPERUSER");
 if (VAR_27 == VAR_3)
  FUNC_11(&VAR_33, " CREATEDB");
 if (VAR_27 == VAR_2)
  FUNC_11(&VAR_33, " NOCREATEDB");
 if (VAR_29 == VAR_3)
  FUNC_11(&VAR_33, " CREATEROLE");
 if (VAR_29 == VAR_2)
  FUNC_11(&VAR_33, " NOCREATEROLE");
 if (VAR_30 == VAR_3)
  FUNC_11(&VAR_33, " INHERIT");
 if (VAR_30 == VAR_2)
  FUNC_11(&VAR_33, " NOINHERIT");
 if (VAR_31 == VAR_3)
  FUNC_11(&VAR_33, " LOGIN");
 if (VAR_31 == VAR_2)
  FUNC_11(&VAR_33, " NOLOGIN");
 if (VAR_32 == VAR_3)
  FUNC_11(&VAR_33, " REPLICATION");
 if (VAR_32 == VAR_2)
  FUNC_11(&VAR_33, " NOREPLICATION");
 if (VAR_22 != ((void*)0))
  FUNC_9(&VAR_33, " CONNECTION LIMIT %s", VAR_22);
 if (VAR_18.head != ((void*)0))
 {
  SimpleStringListCell *VAR_38;

  FUNC_11(&VAR_33, " IN ROLE ");

  for (VAR_38 = VAR_18.head; VAR_38; VAR_38 = VAR_38->next)
  {
   if (VAR_38->next)
    FUNC_9(&VAR_33, "%s,", FUNC_15(VAR_38->val));
   else
    FUNC_11(&VAR_33, FUNC_15(VAR_38->val));
  }
 }
 FUNC_10(&VAR_33, ';');

 if (VAR_20)
  FUNC_26("%s\n", VAR_33.data);
 VAR_35 = FUNC_4(VAR_34, VAR_33.data);

 if (FUNC_7(VAR_35) != VAR_0)
 {
  FUNC_23("creation of new role failed: %s", FUNC_3(VAR_34));
  FUNC_5(VAR_34);
  FUNC_14(1);
 }

 FUNC_1(VAR_35);
 FUNC_5(VAR_34);
 FUNC_14(0);
}
