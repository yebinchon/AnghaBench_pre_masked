
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int output_path ;
struct TYPE_6__ {int ndbs; TYPE_2__* dbs; } ;
struct TYPE_8__ {TYPE_1__ dbarr; } ;
struct TYPE_7__ {char* db_name; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef int FILE ;
typedef TYPE_2__ DbInfo ;
typedef TYPE_3__ ClusterInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int * FUNC_6 (TYPE_3__*,char*) ;
 int VAR_2 ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int *,char*,char*,...) ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int,char*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(ClusterInfo *VAR_3)
{
 int VAR_4;
 FILE *VAR_5 = ((void*)0);
 bool VAR_6 = 0;
 char VAR_7[VAR_0];

 FUNC_13("Checking for reg* data types in user tables");

 FUNC_14(VAR_7, sizeof(VAR_7), "tables_using_reg.txt");

 for (VAR_4 = 0; VAR_4 < VAR_3->dbarr.ndbs; VAR_4++)
 {
  PGresult *VAR_8;
  bool VAR_9 = 0;
  int VAR_10;
  int VAR_11;
  int VAR_12,
     VAR_13,
     VAR_14;
  DbInfo *VAR_15 = &VAR_3->dbarr.dbs[VAR_4];
  PGconn *VAR_16 = FUNC_6(VAR_3, VAR_15->db_name);






  VAR_8 = FUNC_7(VAR_16,
        "SELECT n.nspname, c.relname, a.attname "
        "FROM	pg_catalog.pg_class c, "
        "		pg_catalog.pg_namespace n, "
        "		pg_catalog.pg_attribute a, "
        "		pg_catalog.pg_type t "
        "WHERE	c.oid = a.attrelid AND "
        "		NOT a.attisdropped AND "
        "       a.atttypid = t.oid AND "
        "       t.typnamespace = "
        "           (SELECT oid FROM pg_namespace "
        "            WHERE nspname = 'pg_catalog') AND"
        "		t.typname IN ( "

        "           'regconfig', "
        "           'regdictionary', "
        "           'regnamespace', "
        "           'regoper', "
        "           'regoperator', "
        "           'regproc', "
        "           'regprocedure' "


        "			) AND "
        "		c.relnamespace = n.oid AND "
        "		n.nspname NOT IN ('pg_catalog', 'information_schema')");

  VAR_10 = FUNC_4(VAR_8);
  VAR_12 = FUNC_2(VAR_8, "nspname");
  VAR_13 = FUNC_2(VAR_8, "relname");
  VAR_14 = FUNC_2(VAR_8, "attname");
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  {
   VAR_6 = 1;
   if (VAR_5 == ((void*)0) && (VAR_5 = FUNC_9(VAR_7, "w")) == ((void*)0))
    FUNC_11("could not open file \"%s\": %s\n",
       VAR_7, FUNC_15(VAR_2));
   if (!VAR_9)
   {
    FUNC_10(VAR_5, "In database: %s\n", VAR_15->db_name);
    VAR_9 = 1;
   }
   FUNC_10(VAR_5, "  %s.%s.%s\n",
     FUNC_3(VAR_8, VAR_11, VAR_12),
     FUNC_3(VAR_8, VAR_11, VAR_13),
     FUNC_3(VAR_8, VAR_11, VAR_14));
  }

  FUNC_0(VAR_8);

  FUNC_1(VAR_16);
 }

 if (VAR_5)
  FUNC_8(VAR_5);

 if (VAR_6)
 {
  FUNC_12(VAR_1, "fatal\n");
  FUNC_11("Your installation contains one of the reg* data types in user tables.\n"
     "These data types reference system OIDs that are not preserved by\n"
     "pg_upgrade, so this cluster cannot currently be upgraded.  You can\n"
     "remove the problem tables and restart the upgrade.  A list of the problem\n"
     "columns is in the file:\n"
     "    %s\n\n", VAR_7);
 }
 else
  FUNC_5();
}
