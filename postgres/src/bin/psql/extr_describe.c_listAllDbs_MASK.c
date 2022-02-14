
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int translate_header; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_14__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_13__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ,int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_11 (TYPE_2__*) ;

bool
FUNC_12(const char *VAR_1, bool VAR_2)
{
 PGresult *VAR_3;
 PQExpBufferData VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;

 FUNC_6(&VAR_4);

 FUNC_9(&VAR_4,
       "SELECT d.datname as \"%s\",\n"
       "       pg_catalog.pg_get_userbyid(d.datdba) as \"%s\",\n"
       "       pg_catalog.pg_encoding_to_char(d.encoding) as \"%s\",\n",
       FUNC_5("Name"),
       FUNC_5("Owner"),
       FUNC_5("Encoding"));
 if (VAR_0.sversion >= 80400)
  FUNC_3(&VAR_4,
        "       d.datcollate as \"%s\",\n"
        "       d.datctype as \"%s\",\n",
        FUNC_5("Collate"),
        FUNC_5("Ctype"));
 FUNC_4(&VAR_4, "       ");
 FUNC_7(&VAR_4, "d.datacl");
 if (VAR_2 && VAR_0.sversion >= 80200)
  FUNC_3(&VAR_4,
        ",\n       CASE WHEN pg_catalog.has_database_privilege(d.datname, 'CONNECT')\n"
        "            THEN pg_catalog.pg_size_pretty(pg_catalog.pg_database_size(d.datname))\n"
        "            ELSE 'No Access'\n"
        "       END as \"%s\"",
        FUNC_5("Size"));
 if (VAR_2 && VAR_0.sversion >= 80000)
  FUNC_3(&VAR_4,
        ",\n       t.spcname as \"%s\"",
        FUNC_5("Tablespace"));
 if (VAR_2 && VAR_0.sversion >= 80200)
  FUNC_3(&VAR_4,
        ",\n       pg_catalog.shobj_description(d.oid, 'pg_database') as \"%s\"",
        FUNC_5("Description"));
 FUNC_4(&VAR_4,
       "\nFROM pg_catalog.pg_database d\n");
 if (VAR_2 && VAR_0.sversion >= 80000)
  FUNC_4(&VAR_4,
        "  JOIN pg_catalog.pg_tablespace t on d.dattablespace = t.oid\n");

 if (VAR_1)
  FUNC_10(VAR_0.db, &VAR_4, VAR_1, 0, 0,
         ((void*)0), "d.datname", ((void*)0), ((void*)0));

 FUNC_4(&VAR_4, "ORDER BY 1;");
 VAR_3 = FUNC_1(VAR_4.data);
 FUNC_11(&VAR_4);
 if (!VAR_3)
  return 0;

 VAR_5.nullPrint = ((void*)0);
 VAR_5.title = FUNC_2("List of databases");
 VAR_5.translate_header = 1;

 FUNC_8(VAR_3, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_3);
 return 1;
}
