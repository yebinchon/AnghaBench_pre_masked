
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int translate_header; int const* translate_columns; int n_translate_columns; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_12__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_9 (int ,TYPE_2__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_10 (TYPE_2__*) ;

bool
FUNC_11(const char *VAR_1, bool VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;
 static const bool VAR_6[] = {0, 0, 1, 0};

 FUNC_6(&VAR_3);

 FUNC_3(&VAR_3,
       "SELECT DISTINCT tt.nspname AS \"%s\", tt.name AS \"%s\", tt.object AS \"%s\", d.description AS \"%s\"\n"
       "FROM (\n",
       FUNC_5("Schema"),
       FUNC_5("Name"),
       FUNC_5("Object"),
       FUNC_5("Description"));


 FUNC_3(&VAR_3,
       "  SELECT pgc.oid as oid, pgc.tableoid AS tableoid,\n"
       "  n.nspname as nspname,\n"
       "  CAST(pgc.conname AS pg_catalog.text) as name,"
       "  CAST('%s' AS pg_catalog.text) as object\n"
       "  FROM pg_catalog.pg_constraint pgc\n"
       "    JOIN pg_catalog.pg_class c "
       "ON c.oid = pgc.conrelid\n"
       "    LEFT JOIN pg_catalog.pg_namespace n "
       "    ON n.oid = c.relnamespace\n",
       FUNC_5("table constraint"));

 if (!VAR_2 && !VAR_1)
  FUNC_4(&VAR_3, "WHERE n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");

 FUNC_9(VAR_0.db, &VAR_3, VAR_1, !VAR_2 && !VAR_1,
        0, "n.nspname", "pgc.conname", ((void*)0),
        "pg_catalog.pg_table_is_visible(c.oid)");


 FUNC_3(&VAR_3,
       "UNION ALL\n"
       "  SELECT pgc.oid as oid, pgc.tableoid AS tableoid,\n"
       "  n.nspname as nspname,\n"
       "  CAST(pgc.conname AS pg_catalog.text) as name,"
       "  CAST('%s' AS pg_catalog.text) as object\n"
       "  FROM pg_catalog.pg_constraint pgc\n"
       "    JOIN pg_catalog.pg_type t "
       "ON t.oid = pgc.contypid\n"
       "    LEFT JOIN pg_catalog.pg_namespace n "
       "    ON n.oid = t.typnamespace\n",
       FUNC_5("domain constraint"));

 if (!VAR_2 && !VAR_1)
  FUNC_4(&VAR_3, "WHERE n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");

 FUNC_9(VAR_0.db, &VAR_3, VAR_1, !VAR_2 && !VAR_1,
        0, "n.nspname", "pgc.conname", ((void*)0),
        "pg_catalog.pg_type_is_visible(t.oid)");





 if (VAR_0.sversion >= 80300)
 {

  FUNC_3(&VAR_3,
        "UNION ALL\n"
        "  SELECT o.oid as oid, o.tableoid as tableoid,\n"
        "  n.nspname as nspname,\n"
        "  CAST(o.opcname AS pg_catalog.text) as name,\n"
        "  CAST('%s' AS pg_catalog.text) as object\n"
        "  FROM pg_catalog.pg_opclass o\n"
        "    JOIN pg_catalog.pg_am am ON "
        "o.opcmethod = am.oid\n"
        "    JOIN pg_catalog.pg_namespace n ON "
        "n.oid = o.opcnamespace\n",
        FUNC_5("operator class"));

  if (!VAR_2 && !VAR_1)
   FUNC_4(&VAR_3, "      AND n.nspname <> 'pg_catalog'\n"
         "      AND n.nspname <> 'information_schema'\n");

  FUNC_9(VAR_0.db, &VAR_3, VAR_1, 1, 0,
         "n.nspname", "o.opcname", ((void*)0),
         "pg_catalog.pg_opclass_is_visible(o.oid)");
 }





 if (VAR_0.sversion >= 90200)
 {

  FUNC_3(&VAR_3,
        "UNION ALL\n"
        "  SELECT opf.oid as oid, opf.tableoid as tableoid,\n"
        "  n.nspname as nspname,\n"
        "  CAST(opf.opfname AS pg_catalog.text) AS name,\n"
        "  CAST('%s' AS pg_catalog.text) as object\n"
        "  FROM pg_catalog.pg_opfamily opf\n"
        "    JOIN pg_catalog.pg_am am "
        "ON opf.opfmethod = am.oid\n"
        "    JOIN pg_catalog.pg_namespace n "
        "ON opf.opfnamespace = n.oid\n",
        FUNC_5("operator family"));

  if (!VAR_2 && !VAR_1)
   FUNC_4(&VAR_3, "      AND n.nspname <> 'pg_catalog'\n"
         "      AND n.nspname <> 'information_schema'\n");

  FUNC_9(VAR_0.db, &VAR_3, VAR_1, 1, 0,
         "n.nspname", "opf.opfname", ((void*)0),
         "pg_catalog.pg_opfamily_is_visible(opf.oid)");
 }


 FUNC_3(&VAR_3,
       "UNION ALL\n"
       "  SELECT r.oid as oid, r.tableoid as tableoid,\n"
       "  n.nspname as nspname,\n"
       "  CAST(r.rulename AS pg_catalog.text) as name,"
       "  CAST('%s' AS pg_catalog.text) as object\n"
       "  FROM pg_catalog.pg_rewrite r\n"
       "       JOIN pg_catalog.pg_class c ON c.oid = r.ev_class\n"
       "       LEFT JOIN pg_catalog.pg_namespace n ON n.oid = c.relnamespace\n"
       "  WHERE r.rulename != '_RETURN'\n",
       FUNC_5("rule"));

 if (!VAR_2 && !VAR_1)
  FUNC_4(&VAR_3, "      AND n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");

 FUNC_9(VAR_0.db, &VAR_3, VAR_1, 1, 0,
        "n.nspname", "r.rulename", ((void*)0),
        "pg_catalog.pg_table_is_visible(c.oid)");


 FUNC_3(&VAR_3,
       "UNION ALL\n"
       "  SELECT t.oid as oid, t.tableoid as tableoid,\n"
       "  n.nspname as nspname,\n"
       "  CAST(t.tgname AS pg_catalog.text) as name,"
       "  CAST('%s' AS pg_catalog.text) as object\n"
       "  FROM pg_catalog.pg_trigger t\n"
       "       JOIN pg_catalog.pg_class c ON c.oid = t.tgrelid\n"
       "       LEFT JOIN pg_catalog.pg_namespace n ON n.oid = c.relnamespace\n",
       FUNC_5("trigger"));

 if (!VAR_2 && !VAR_1)
  FUNC_4(&VAR_3, "WHERE n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");

 FUNC_9(VAR_0.db, &VAR_3, VAR_1, !VAR_2 && !VAR_1, 0,
        "n.nspname", "t.tgname", ((void*)0),
        "pg_catalog.pg_table_is_visible(c.oid)");

 FUNC_4(&VAR_3,
       ") AS tt\n"
       "  JOIN pg_catalog.pg_description d ON (tt.oid = d.objoid AND tt.tableoid = d.classoid AND d.objsubid = 0)\n");

 FUNC_4(&VAR_3, "ORDER BY 1, 2, 3;");

 VAR_4 = FUNC_1(VAR_3.data);
 FUNC_10(&VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5.nullPrint = ((void*)0);
 VAR_5.title = FUNC_2("Object descriptions");
 VAR_5.translate_header = 1;
 VAR_5.translate_columns = VAR_6;
 VAR_5.n_translate_columns = FUNC_7(VAR_6);

 FUNC_8(VAR_4, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_4);
 return 1;
}
