
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sverbuf ;
struct TYPE_11__ {int translate_header; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_13__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_10 (TYPE_2__*,char*,int ,int ,int ) ;
 int FUNC_11 (int ,TYPE_2__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_12 (TYPE_2__*) ;

bool
FUNC_13(const char *VAR_1, bool VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;

 if (VAR_0.sversion < 90100)
 {
  char VAR_6[32];

  FUNC_8("The server (version %s) does not support foreign tables.",
      FUNC_5(VAR_0.sversion, 0,
             VAR_6, sizeof(VAR_6)));
  return 1;
 }

 FUNC_7(&VAR_3);
 FUNC_10(&VAR_3,
       "SELECT n.nspname AS \"%s\",\n"
       "  c.relname AS \"%s\",\n"
       "  s.srvname AS \"%s\"",
       FUNC_6("Schema"),
       FUNC_6("Table"),
       FUNC_6("Server"));

 if (VAR_2)
  FUNC_3(&VAR_3,
        ",\n CASE WHEN ftoptions IS NULL THEN '' ELSE "
        "  '(' || pg_catalog.array_to_string(ARRAY(SELECT "
        "  pg_catalog.quote_ident(option_name) ||  ' ' || "
        "  pg_catalog.quote_literal(option_value)  FROM "
        "  pg_catalog.pg_options_to_table(ftoptions)),  ', ') || ')' "
        "  END AS \"%s\",\n"
        "  d.description AS \"%s\"",
        FUNC_6("FDW options"),
        FUNC_6("Description"));

 FUNC_4(&VAR_3,
       "\nFROM pg_catalog.pg_foreign_table ft\n"
       "  INNER JOIN pg_catalog.pg_class c"
       " ON c.oid = ft.ftrelid\n"
       "  INNER JOIN pg_catalog.pg_namespace n"
       " ON n.oid = c.relnamespace\n"
       "  INNER JOIN pg_catalog.pg_foreign_server s"
       " ON s.oid = ft.ftserver\n");
 if (VAR_2)
  FUNC_4(&VAR_3,
        "   LEFT JOIN pg_catalog.pg_description d\n"
        "          ON d.classoid = c.tableoid AND "
        "d.objoid = c.oid AND d.objsubid = 0\n");

 FUNC_11(VAR_0.db, &VAR_3, VAR_1, 0, 0,
        "n.nspname", "c.relname", ((void*)0),
        "pg_catalog.pg_table_is_visible(c.oid)");

 FUNC_4(&VAR_3, "ORDER BY 1, 2;");

 VAR_4 = FUNC_1(VAR_3.data);
 FUNC_12(&VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5.nullPrint = ((void*)0);
 VAR_5.title = FUNC_2("List of foreign tables");
 VAR_5.translate_header = 1;

 FUNC_9(VAR_4, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_4);
 return 1;
}
