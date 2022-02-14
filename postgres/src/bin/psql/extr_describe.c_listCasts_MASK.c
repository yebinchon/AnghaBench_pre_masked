
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int translate_header; int const* translate_columns; int n_translate_columns; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_13__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*,char const*,int,int,char*,char*,char*,char*) ;
 TYPE_4__ VAR_4 ;
 int FUNC_11 (TYPE_2__*) ;

bool
FUNC_12(const char *VAR_5, bool VAR_6)
{
 PQExpBufferData VAR_7;
 PGresult *VAR_8;
 printQueryOpt VAR_9 = VAR_4.popt;
 static const bool VAR_10[] = {0, 0, 0, 1, 0};

 FUNC_6(&VAR_7);

 FUNC_9(&VAR_7,
       "SELECT pg_catalog.format_type(castsource, NULL) AS \"%s\",\n"
       "       pg_catalog.format_type(casttarget, NULL) AS \"%s\",\n",
       FUNC_5("Source type"),
       FUNC_5("Target type"));






 if (VAR_4.sversion >= 80400)
  FUNC_3(&VAR_7,
        "       CASE WHEN c.castmethod = '%c' THEN '(binary coercible)'\n"
        "            WHEN c.castmethod = '%c' THEN '(with inout)'\n"
        "            ELSE p.proname\n"
        "       END AS \"%s\",\n",
        VAR_2,
        VAR_3,
        FUNC_5("Function"));
 else
  FUNC_3(&VAR_7,
        "       CASE WHEN c.castfunc = 0 THEN '(binary coercible)'\n"
        "            ELSE p.proname\n"
        "       END AS \"%s\",\n",
        FUNC_5("Function"));

 FUNC_3(&VAR_7,
       "       CASE WHEN c.castcontext = '%c' THEN '%s'\n"
       "            WHEN c.castcontext = '%c' THEN '%s'\n"
       "            ELSE '%s'\n"
       "       END AS \"%s\"",
       VAR_1,
       FUNC_5("no"),
       VAR_0,
       FUNC_5("in assignment"),
       FUNC_5("yes"),
       FUNC_5("Implicit?"));

 if (VAR_6)
  FUNC_3(&VAR_7,
        ",\n       d.description AS \"%s\"",
        FUNC_5("Description"));





 FUNC_4(&VAR_7,
       "\nFROM pg_catalog.pg_cast c LEFT JOIN pg_catalog.pg_proc p\n"
       "     ON c.castfunc = p.oid\n"
       "     LEFT JOIN pg_catalog.pg_type ts\n"
       "     ON c.castsource = ts.oid\n"
       "     LEFT JOIN pg_catalog.pg_namespace ns\n"
       "     ON ns.oid = ts.typnamespace\n"
       "     LEFT JOIN pg_catalog.pg_type tt\n"
       "     ON c.casttarget = tt.oid\n"
       "     LEFT JOIN pg_catalog.pg_namespace nt\n"
       "     ON nt.oid = tt.typnamespace\n");

 if (VAR_6)
  FUNC_4(&VAR_7,
        "     LEFT JOIN pg_catalog.pg_description d\n"
        "     ON d.classoid = c.tableoid AND d.objoid = "
        "c.oid AND d.objsubid = 0\n");

 FUNC_4(&VAR_7, "WHERE ( (true");





 FUNC_10(VAR_4.db, &VAR_7, VAR_5, 1, 0,
        "ns.nspname", "ts.typname",
        "pg_catalog.format_type(ts.oid, NULL)",
        "pg_catalog.pg_type_is_visible(ts.oid)");

 FUNC_4(&VAR_7, ") OR (true");

 FUNC_10(VAR_4.db, &VAR_7, VAR_5, 1, 0,
        "nt.nspname", "tt.typname",
        "pg_catalog.format_type(tt.oid, NULL)",
        "pg_catalog.pg_type_is_visible(tt.oid)");

 FUNC_4(&VAR_7, ") )\nORDER BY 1, 2;");

 VAR_8 = FUNC_1(VAR_7.data);
 FUNC_11(&VAR_7);
 if (!VAR_8)
  return 0;

 VAR_9.nullPrint = ((void*)0);
 VAR_9.title = FUNC_2("List of casts");
 VAR_9.translate_header = 1;
 VAR_9.translate_columns = VAR_10;
 VAR_9.n_translate_columns = FUNC_7(VAR_10);

 FUNC_8(VAR_8, &VAR_9, VAR_4.queryFout, 0, VAR_4.logfile);

 FUNC_0(VAR_8);
 return 1;
}
