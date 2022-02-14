
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sverbuf ;
struct TYPE_11__ {int translate_header; int const* translate_columns; int n_translate_columns; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_13__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int ,int ,int ,int ) ;
 int FUNC_12 (int ,TYPE_2__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_13 (TYPE_2__*) ;

bool
FUNC_14(const char *VAR_1, bool VAR_2, bool VAR_3)
{
 PQExpBufferData VAR_4;
 PGresult *VAR_5;
 printQueryOpt VAR_6 = VAR_0.popt;
 static const bool VAR_7[] = {0, 0, 0, 0, 0, 1, 0};

 if (VAR_0.sversion < 90100)
 {
  char VAR_8[32];

  FUNC_9("The server (version %s) does not support collations.",
      FUNC_5(VAR_0.sversion, 0,
             VAR_8, sizeof(VAR_8)));
  return 1;
 }

 FUNC_7(&VAR_4);

 FUNC_11(&VAR_4,
       "SELECT n.nspname AS \"%s\",\n"
       "       c.collname AS \"%s\",\n"
       "       c.collcollate AS \"%s\",\n"
       "       c.collctype AS \"%s\"",
       FUNC_6("Schema"),
       FUNC_6("Name"),
       FUNC_6("Collate"),
       FUNC_6("Ctype"));

 if (VAR_0.sversion >= 100000)
  FUNC_3(&VAR_4,
        ",\n       CASE c.collprovider WHEN 'd' THEN 'default' WHEN 'c' THEN 'libc' WHEN 'i' THEN 'icu' END AS \"%s\"",
        FUNC_6("Provider"));
 else
  FUNC_3(&VAR_4,
        ",\n       'libc' AS \"%s\"",
        FUNC_6("Provider"));

 if (VAR_0.sversion >= 120000)
  FUNC_3(&VAR_4,
        ",\n       CASE WHEN c.collisdeterministic THEN '%s' ELSE '%s' END AS \"%s\"",
        FUNC_6("yes"), FUNC_6("no"),
        FUNC_6("Deterministic?"));
 else
  FUNC_3(&VAR_4,
        ",\n       '%s' AS \"%s\"",
        FUNC_6("yes"),
        FUNC_6("Deterministic?"));

 if (VAR_2)
  FUNC_3(&VAR_4,
        ",\n       pg_catalog.obj_description(c.oid, 'pg_collation') AS \"%s\"",
        FUNC_6("Description"));

 FUNC_4(&VAR_4,
       "\nFROM pg_catalog.pg_collation c, pg_catalog.pg_namespace n\n"
       "WHERE n.oid = c.collnamespace\n");

 if (!VAR_3 && !VAR_1)
  FUNC_4(&VAR_4, "      AND n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");







 FUNC_4(&VAR_4, "      AND c.collencoding IN (-1, pg_catalog.pg_char_to_encoding(pg_catalog.getdatabaseencoding()))\n");

 FUNC_12(VAR_0.db, &VAR_4, VAR_1, 1, 0,
        "n.nspname", "c.collname", ((void*)0),
        "pg_catalog.pg_collation_is_visible(c.oid)");

 FUNC_4(&VAR_4, "ORDER BY 1, 2;");

 VAR_5 = FUNC_1(VAR_4.data);
 FUNC_13(&VAR_4);
 if (!VAR_5)
  return 0;

 VAR_6.nullPrint = ((void*)0);
 VAR_6.title = FUNC_2("List of collations");
 VAR_6.translate_header = 1;
 VAR_6.translate_columns = VAR_7;
 VAR_6.n_translate_columns = FUNC_8(VAR_7);

 FUNC_10(VAR_5, &VAR_6, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_5);
 return 1;
}
