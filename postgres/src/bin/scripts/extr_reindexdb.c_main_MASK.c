
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_4__ {int * head; int * member_1; int * member_0; } ;
typedef TYPE_1__ SimpleStringList ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char const*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int,char**,char*,struct option*,int*) ;
 int FUNC_9 (int,char**,char*,int ) ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (char const*,char const*,char const*,char const*,int,char const*,int,int,int,int,int) ;
 int FUNC_14 (char const*,int ,TYPE_1__*,char const*,char const*,char const*,int,char const*,int,int,int,int) ;

 int FUNC_15 (char*,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int VAR_11 ;

int
FUNC_18(int VAR_12, char *VAR_13[])
{
 static struct option VAR_14[] = {
  {"host", 128, ((void*)0), 'h'},
  {"port", 128, ((void*)0), 'p'},
  {"username", 128, ((void*)0), 'U'},
  {"no-password", 129, ((void*)0), 'w'},
  {"password", 129, ((void*)0), 'W'},
  {"echo", 129, ((void*)0), 'e'},
  {"quiet", 129, ((void*)0), 'q'},
  {"schema", 128, ((void*)0), 'S'},
  {"dbname", 128, ((void*)0), 'd'},
  {"all", 129, ((void*)0), 'a'},
  {"system", 129, ((void*)0), 's'},
  {"table", 128, ((void*)0), 't'},
  {"index", 128, ((void*)0), 'i'},
  {"jobs", 128, ((void*)0), 'j'},
  {"verbose", 129, ((void*)0), 'v'},
  {"concurrently", 129, ((void*)0), 1},
  {"maintenance-db", 128, ((void*)0), 2},
  {((void*)0), 0, ((void*)0), 0}
 };

 const char *VAR_15;
 int VAR_16;
 int VAR_17;

 const char *VAR_18 = ((void*)0);
 const char *VAR_19 = ((void*)0);
 const char *VAR_20 = ((void*)0);
 const char *VAR_21 = ((void*)0);
 const char *VAR_22 = ((void*)0);
 enum trivalue VAR_23 = VAR_5;
 bool VAR_24 = 0;
 bool VAR_25 = 0;
 bool VAR_26 = 0;
 bool VAR_27 = 0;
 bool VAR_28 = 0;
 bool VAR_29 = 0;
 SimpleStringList VAR_30 = {((void*)0), ((void*)0)};
 SimpleStringList VAR_31 = {((void*)0), ((void*)0)};
 SimpleStringList VAR_32 = {((void*)0), ((void*)0)};
 int VAR_33 = 1;

 FUNC_11(VAR_13[0]);
 VAR_15 = FUNC_5(VAR_13[0]);
 FUNC_15(VAR_13[0], FUNC_0("pgscripts"));

 FUNC_9(VAR_12, VAR_13, "reindexdb", VAR_8);


 while ((VAR_17 = FUNC_8(VAR_12, VAR_13, "h:p:U:wWeqS:d:ast:i:j:v", VAR_14, &VAR_16)) != -1)
 {
  switch (VAR_17)
  {
   case 'h':
    VAR_20 = FUNC_12(VAR_9);
    break;
   case 'p':
    VAR_21 = FUNC_12(VAR_9);
    break;
   case 'U':
    VAR_22 = FUNC_12(VAR_9);
    break;
   case 'w':
    VAR_23 = VAR_6;
    break;
   case 'W':
    VAR_23 = VAR_7;
    break;
   case 'e':
    VAR_26 = 1;
    break;
   case 'q':
    VAR_27 = 1;
    break;
   case 'S':
    FUNC_17(&VAR_32, VAR_9);
    break;
   case 'd':
    VAR_18 = FUNC_12(VAR_9);
    break;
   case 'a':
    VAR_25 = 1;
    break;
   case 's':
    VAR_24 = 1;
    break;
   case 't':
    FUNC_17(&VAR_31, VAR_9);
    break;
   case 'i':
    FUNC_17(&VAR_30, VAR_9);
    break;
   case 'j':
    VAR_33 = FUNC_2(VAR_9);
    if (VAR_33 <= 0)
    {
     FUNC_10("number of parallel jobs must be at least 1");
     FUNC_3(1);
    }
    break;
   case 'v':
    VAR_28 = 1;
    break;
   case 1:
    VAR_29 = 1;
    break;
   case 2:
    VAR_19 = FUNC_12(VAR_9);
    break;
   default:
    FUNC_4(VAR_11, FUNC_1("Try \"%s --help\" for more information.\n"), VAR_15);
    FUNC_3(1);
  }
 }





 if (VAR_10 < VAR_12 && VAR_18 == ((void*)0))
 {
  VAR_18 = VAR_13[VAR_10];
  VAR_10++;
 }

 if (VAR_10 < VAR_12)
 {
  FUNC_10("too many command-line arguments (first is \"%s\")",
      VAR_13[VAR_10]);
  FUNC_4(VAR_11, FUNC_1("Try \"%s --help\" for more information.\n"), VAR_15);
  FUNC_3(1);
 }

 FUNC_16();

 if (VAR_25)
 {
  if (VAR_18)
  {
   FUNC_10("cannot reindex all databases and a specific one at the same time");
   FUNC_3(1);
  }
  if (VAR_24)
  {
   FUNC_10("cannot reindex all databases and system catalogs at the same time");
   FUNC_3(1);
  }
  if (VAR_32.head != ((void*)0))
  {
   FUNC_10("cannot reindex specific schema(s) in all databases");
   FUNC_3(1);
  }
  if (VAR_31.head != ((void*)0))
  {
   FUNC_10("cannot reindex specific table(s) in all databases");
   FUNC_3(1);
  }
  if (VAR_30.head != ((void*)0))
  {
   FUNC_10("cannot reindex specific index(es) in all databases");
   FUNC_3(1);
  }

  FUNC_13(VAR_19, VAR_20, VAR_21, VAR_22,
         VAR_23, VAR_15, VAR_26, VAR_27, VAR_28,
         VAR_29, VAR_33);
 }
 else if (VAR_24)
 {
  if (VAR_32.head != ((void*)0))
  {
   FUNC_10("cannot reindex specific schema(s) and system catalogs at the same time");
   FUNC_3(1);
  }
  if (VAR_31.head != ((void*)0))
  {
   FUNC_10("cannot reindex specific table(s) and system catalogs at the same time");
   FUNC_3(1);
  }
  if (VAR_30.head != ((void*)0))
  {
   FUNC_10("cannot reindex specific index(es) and system catalogs at the same time");
   FUNC_3(1);
  }

  if (VAR_33 > 1)
  {
   FUNC_10("cannot use multiple jobs to reindex system catalogs");
   FUNC_3(1);
  }

  if (VAR_18 == ((void*)0))
  {
   if (FUNC_7("PGDATABASE"))
    VAR_18 = FUNC_7("PGDATABASE");
   else if (FUNC_7("PGUSER"))
    VAR_18 = FUNC_7("PGUSER");
   else
    VAR_18 = FUNC_6(VAR_15);
  }

  FUNC_14(VAR_18, VAR_3, ((void*)0), VAR_20,
        VAR_21, VAR_22, VAR_23, VAR_15,
        VAR_26, VAR_28, VAR_29, 1);
 }
 else
 {





  if (VAR_33 > 1 && VAR_30.head != ((void*)0))
  {
   FUNC_10("cannot use multiple jobs to reindex indexes");
   FUNC_3(1);
  }

  if (VAR_18 == ((void*)0))
  {
   if (FUNC_7("PGDATABASE"))
    VAR_18 = FUNC_7("PGDATABASE");
   else if (FUNC_7("PGUSER"))
    VAR_18 = FUNC_7("PGUSER");
   else
    VAR_18 = FUNC_6(VAR_15);
  }

  if (VAR_32.head != ((void*)0))
   FUNC_14(VAR_18, VAR_2, &VAR_32, VAR_20,
         VAR_21, VAR_22, VAR_23, VAR_15,
         VAR_26, VAR_28, VAR_29, VAR_33);

  if (VAR_30.head != ((void*)0))
   FUNC_14(VAR_18, VAR_1, &VAR_30, VAR_20,
         VAR_21, VAR_22, VAR_23, VAR_15,
         VAR_26, VAR_28, VAR_29, 1);

  if (VAR_31.head != ((void*)0))
   FUNC_14(VAR_18, VAR_4, &VAR_31, VAR_20,
         VAR_21, VAR_22, VAR_23, VAR_15,
         VAR_26, VAR_28, VAR_29,
         VAR_33);





  if (VAR_30.head == ((void*)0) && VAR_31.head == ((void*)0) && VAR_32.head == ((void*)0))
   FUNC_14(VAR_18, VAR_0, ((void*)0), VAR_20,
         VAR_21, VAR_22, VAR_23, VAR_15,
         VAR_26, VAR_28, VAR_29, VAR_33);
 }

 FUNC_3(0);
}
