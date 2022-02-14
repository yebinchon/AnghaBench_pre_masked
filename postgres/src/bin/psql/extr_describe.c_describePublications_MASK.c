
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sverbuf ;
typedef int printTableOpt ;
typedef int printTableContent ;
struct TYPE_9__ {int topt; } ;
struct TYPE_11__ {int sversion; int logfile; int queryFout; TYPE_1__ popt; int quiet; int db; } ;
struct TYPE_10__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (int,int,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *,int ,int,int ) ;
 int FUNC_11 (int *,char*,int,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,int,char const) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int ,int,int) ;
 int FUNC_16 (TYPE_2__*,char*,...) ;
 int FUNC_17 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (TYPE_2__*) ;

bool
FUNC_20(const char *VAR_1)
{
 PQExpBufferData VAR_2;
 int VAR_3;
 PGresult *VAR_4;
 bool VAR_5;

 if (VAR_0.sversion < 100000)
 {
  char VAR_6[32];

  FUNC_9("The server (version %s) does not support publications.",
      FUNC_6(VAR_0.sversion, 0,
             VAR_6, sizeof(VAR_6)));
  return 1;
 }

 VAR_5 = (VAR_0.sversion >= 110000);

 FUNC_8(&VAR_2);

 FUNC_16(&VAR_2,
       "SELECT oid, pubname,\n"
       "  pg_catalog.pg_get_userbyid(pubowner) AS owner,\n"
       "  puballtables, pubinsert, pubupdate, pubdelete");
 if (VAR_5)
  FUNC_5(&VAR_2,
        ", pubtruncate");
 FUNC_5(&VAR_2,
       "\nFROM pg_catalog.pg_publication\n");

 FUNC_17(VAR_0.db, &VAR_2, VAR_1, 0, 0,
        ((void*)0), "pubname", ((void*)0),
        ((void*)0));

 FUNC_5(&VAR_2, "ORDER BY 2;");

 VAR_4 = FUNC_3(VAR_2.data);
 if (!VAR_4)
 {
  FUNC_19(&VAR_2);
  return 0;
 }

 if (FUNC_2(VAR_4) == 0)
 {
  if (!VAR_0.quiet)
  {
   if (VAR_1)
    FUNC_9("Did not find any publication named \"%s\".",
        VAR_1);
   else
    FUNC_9("Did not find any publications.");
  }

  FUNC_19(&VAR_2);
  FUNC_0(VAR_4);
  return 0;
 }

 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_4); VAR_3++)
 {
  const char VAR_7 = 'l';
  int VAR_8 = 5;
  int VAR_9 = 1;
  int VAR_10 = 0;
  PGresult *VAR_11;
  char *VAR_12 = FUNC_1(VAR_4, VAR_3, 0);
  char *VAR_13 = FUNC_1(VAR_4, VAR_3, 1);
  bool VAR_14 = FUNC_18(FUNC_1(VAR_4, VAR_3, 3), "t") == 0;
  int VAR_15;
  PQExpBufferData VAR_16;
  printTableOpt VAR_17 = VAR_0.popt.topt;
  printTableContent VAR_18;

  if (VAR_5)
   VAR_8++;

  FUNC_8(&VAR_16);
  FUNC_16(&VAR_16, FUNC_4("Publication %s"), VAR_13);
  FUNC_15(&VAR_18, &VAR_17, VAR_16.data, VAR_8, VAR_9);

  FUNC_13(&VAR_18, FUNC_7("Owner"), 1, VAR_7);
  FUNC_13(&VAR_18, FUNC_7("All tables"), 1, VAR_7);
  FUNC_13(&VAR_18, FUNC_7("Inserts"), 1, VAR_7);
  FUNC_13(&VAR_18, FUNC_7("Updates"), 1, VAR_7);
  FUNC_13(&VAR_18, FUNC_7("Deletes"), 1, VAR_7);
  if (VAR_5)
   FUNC_13(&VAR_18, FUNC_7("Truncates"), 1, VAR_7);

  FUNC_11(&VAR_18, FUNC_1(VAR_4, VAR_3, 2), 0, 0);
  FUNC_11(&VAR_18, FUNC_1(VAR_4, VAR_3, 3), 0, 0);
  FUNC_11(&VAR_18, FUNC_1(VAR_4, VAR_3, 4), 0, 0);
  FUNC_11(&VAR_18, FUNC_1(VAR_4, VAR_3, 5), 0, 0);
  FUNC_11(&VAR_18, FUNC_1(VAR_4, VAR_3, 6), 0, 0);
  if (VAR_5)
   FUNC_11(&VAR_18, FUNC_1(VAR_4, VAR_3, 7), 0, 0);

  if (!VAR_14)
  {
   FUNC_16(&VAR_2,
         "SELECT n.nspname, c.relname\n"
         "FROM pg_catalog.pg_class c,\n"
         "     pg_catalog.pg_namespace n,\n"
         "     pg_catalog.pg_publication_rel pr\n"
         "WHERE c.relnamespace = n.oid\n"
         "  AND c.oid = pr.prrelid\n"
         "  AND pr.prpubid = '%s'\n"
         "ORDER BY 1,2", VAR_12);

   VAR_11 = FUNC_3(VAR_2.data);
   if (!VAR_11)
   {
    FUNC_14(&VAR_18);
    FUNC_0(VAR_4);
    FUNC_19(&VAR_2);
    FUNC_19(&VAR_16);
    return 0;
   }
   else
    VAR_10 = FUNC_2(VAR_11);

   if (VAR_10 > 0)
    FUNC_12(&VAR_18, FUNC_4("Tables:"));

   for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
   {
    FUNC_16(&VAR_2, "    \"%s.%s\"",
          FUNC_1(VAR_11, VAR_15, 0),
          FUNC_1(VAR_11, VAR_15, 1));

    FUNC_12(&VAR_18, VAR_2.data);
   }
   FUNC_0(VAR_11);
  }

  FUNC_10(&VAR_18, VAR_0.queryFout, 0, VAR_0.logfile);
  FUNC_14(&VAR_18);

  FUNC_19(&VAR_16);
 }

 FUNC_19(&VAR_2);
 FUNC_0(VAR_4);

 return 1;
}
