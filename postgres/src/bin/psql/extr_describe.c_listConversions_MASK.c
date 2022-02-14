
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int translate_header; int const* translate_columns; int n_translate_columns; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_13__ {int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_11 (TYPE_2__*) ;

bool
FUNC_12(const char *VAR_1, bool VAR_2, bool VAR_3)
{
 PQExpBufferData VAR_4;
 PGresult *VAR_5;
 printQueryOpt VAR_6 = VAR_0.popt;
 static const bool VAR_7[] =
 {0, 0, 0, 0, 1, 0};

 FUNC_6(&VAR_4);

 FUNC_9(&VAR_4,
       "SELECT n.nspname AS \"%s\",\n"
       "       c.conname AS \"%s\",\n"
       "       pg_catalog.pg_encoding_to_char(c.conforencoding) AS \"%s\",\n"
       "       pg_catalog.pg_encoding_to_char(c.contoencoding) AS \"%s\",\n"
       "       CASE WHEN c.condefault THEN '%s'\n"
       "       ELSE '%s' END AS \"%s\"",
       FUNC_5("Schema"),
       FUNC_5("Name"),
       FUNC_5("Source"),
       FUNC_5("Destination"),
       FUNC_5("yes"), FUNC_5("no"),
       FUNC_5("Default?"));

 if (VAR_2)
  FUNC_3(&VAR_4,
        ",\n       d.description AS \"%s\"",
        FUNC_5("Description"));

 FUNC_4(&VAR_4,
       "\nFROM pg_catalog.pg_conversion c\n"
       "     JOIN pg_catalog.pg_namespace n "
       "ON n.oid = c.connamespace\n");

 if (VAR_2)
  FUNC_4(&VAR_4,
        "LEFT JOIN pg_catalog.pg_description d "
        "ON d.classoid = c.tableoid\n"
        "          AND d.objoid = c.oid "
        "AND d.objsubid = 0\n");

 FUNC_4(&VAR_4, "WHERE true\n");

 if (!VAR_3 && !VAR_1)
  FUNC_4(&VAR_4, "  AND n.nspname <> 'pg_catalog'\n"
        "  AND n.nspname <> 'information_schema'\n");

 FUNC_10(VAR_0.db, &VAR_4, VAR_1, 1, 0,
        "n.nspname", "c.conname", ((void*)0),
        "pg_catalog.pg_conversion_is_visible(c.oid)");

 FUNC_4(&VAR_4, "ORDER BY 1, 2;");

 VAR_5 = FUNC_1(VAR_4.data);
 FUNC_11(&VAR_4);
 if (!VAR_5)
  return 0;

 VAR_6.nullPrint = ((void*)0);
 VAR_6.title = FUNC_2("List of conversions");
 VAR_6.translate_header = 1;
 VAR_6.translate_columns = VAR_7;
 VAR_6.n_translate_columns = FUNC_7(VAR_7);

 FUNC_8(VAR_5, &VAR_6, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_5);
 return 1;
}
