
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_5__ {TYPE_1__* head; int * member_1; int * member_0; } ;
struct TYPE_4__ {int * val; struct TYPE_4__* next; } ;
typedef TYPE_1__ SimpleStringListCell ;
typedef TYPE_2__ SimpleStringList ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int,char const*,char*,char*,char*,int,char const*,int,int) ;
 int FUNC_3 (char const*,int,int *,char*,char*,char*,int,char const*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char const*) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int,char**,char*,struct option*,int*) ;
 int FUNC_10 (int,char**,char*,int ) ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*) ;
 void* FUNC_13 (int ) ;

 int FUNC_14 (char*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int VAR_6 ;

int
FUNC_17(int VAR_7, char *VAR_8[])
{
 static struct option VAR_9[] = {
  {"host", 128, ((void*)0), 'h'},
  {"port", 128, ((void*)0), 'p'},
  {"username", 128, ((void*)0), 'U'},
  {"no-password", 129, ((void*)0), 'w'},
  {"password", 129, ((void*)0), 'W'},
  {"echo", 129, ((void*)0), 'e'},
  {"quiet", 129, ((void*)0), 'q'},
  {"dbname", 128, ((void*)0), 'd'},
  {"all", 129, ((void*)0), 'a'},
  {"table", 128, ((void*)0), 't'},
  {"verbose", 129, ((void*)0), 'v'},
  {"maintenance-db", 128, ((void*)0), 2},
  {((void*)0), 0, ((void*)0), 0}
 };

 const char *VAR_10;
 int VAR_11;
 int VAR_12;

 const char *VAR_13 = ((void*)0);
 const char *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 enum trivalue VAR_18 = VAR_0;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 SimpleStringList VAR_23 = {((void*)0), ((void*)0)};

 FUNC_12(VAR_8[0]);
 VAR_10 = FUNC_6(VAR_8[0]);
 FUNC_14(VAR_8[0], FUNC_0("pgscripts"));

 FUNC_10(VAR_7, VAR_8, "clusterdb", VAR_3);

 while ((VAR_12 = FUNC_9(VAR_7, VAR_8, "h:p:U:wWeqd:at:v", VAR_9, &VAR_11)) != -1)
 {
  switch (VAR_12)
  {
   case 'h':
    VAR_15 = FUNC_13(VAR_4);
    break;
   case 'p':
    VAR_16 = FUNC_13(VAR_4);
    break;
   case 'U':
    VAR_17 = FUNC_13(VAR_4);
    break;
   case 'w':
    VAR_18 = VAR_1;
    break;
   case 'W':
    VAR_18 = VAR_2;
    break;
   case 'e':
    VAR_19 = 1;
    break;
   case 'q':
    VAR_20 = 1;
    break;
   case 'd':
    VAR_13 = FUNC_13(VAR_4);
    break;
   case 'a':
    VAR_21 = 1;
    break;
   case 't':
    FUNC_16(&VAR_23, VAR_4);
    break;
   case 'v':
    VAR_22 = 1;
    break;
   case 2:
    VAR_14 = FUNC_13(VAR_4);
    break;
   default:
    FUNC_5(VAR_6, FUNC_1("Try \"%s --help\" for more information.\n"), VAR_10);
    FUNC_4(1);
  }
 }





 if (VAR_5 < VAR_7 && VAR_13 == ((void*)0))
 {
  VAR_13 = VAR_8[VAR_5];
  VAR_5++;
 }

 if (VAR_5 < VAR_7)
 {
  FUNC_11("too many command-line arguments (first is \"%s\")",
      VAR_8[VAR_5]);
  FUNC_5(VAR_6, FUNC_1("Try \"%s --help\" for more information.\n"), VAR_10);
  FUNC_4(1);
 }

 FUNC_15();

 if (VAR_21)
 {
  if (VAR_13)
  {
   FUNC_11("cannot cluster all databases and a specific one at the same time");
   FUNC_4(1);
  }

  if (VAR_23.head != ((void*)0))
  {
   FUNC_11("cannot cluster specific table(s) in all databases");
   FUNC_4(1);
  }

  FUNC_2(VAR_22, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
         VAR_10, VAR_19, VAR_20);
 }
 else
 {
  if (VAR_13 == ((void*)0))
  {
   if (FUNC_8("PGDATABASE"))
    VAR_13 = FUNC_8("PGDATABASE");
   else if (FUNC_8("PGUSER"))
    VAR_13 = FUNC_8("PGUSER");
   else
    VAR_13 = FUNC_7(VAR_10);
  }

  if (VAR_23.head != ((void*)0))
  {
   SimpleStringListCell *VAR_24;

   for (VAR_24 = VAR_23.head; VAR_24; VAR_24 = VAR_24->next)
   {
    FUNC_3(VAR_13, VAR_22, VAR_24->val,
          VAR_15, VAR_16, VAR_17, VAR_18,
          VAR_10, VAR_19);
   }
  }
  else
   FUNC_3(VAR_13, VAR_22, ((void*)0),
         VAR_15, VAR_16, VAR_17, VAR_18,
         VAR_10, VAR_19);
 }

 FUNC_4(0);
}
