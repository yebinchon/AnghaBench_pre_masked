
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
 int FUNC_3 (TYPE_2__*,char*,int ,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_10 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_11 (int ,TYPE_2__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_12 (TYPE_2__*) ;

bool
FUNC_13(const char *VAR_1, bool VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;

 if (VAR_0.sversion < 80300)
 {
  char VAR_6[32];

  FUNC_8("The server (version %s) does not support full text search.",
      FUNC_5(VAR_0.sversion, 0,
             VAR_6, sizeof(VAR_6)));
  return 1;
 }

 FUNC_7(&VAR_3);

 FUNC_10(&VAR_3,
       "SELECT\n"
       "  n.nspname as \"%s\",\n"
       "  d.dictname as \"%s\",\n",
       FUNC_6("Schema"),
       FUNC_6("Name"));

 if (VAR_2)
 {
  FUNC_3(&VAR_3,
        "  ( SELECT COALESCE(nt.nspname, '(null)')::pg_catalog.text || '.' || t.tmplname FROM\n"
        "    pg_catalog.pg_ts_template t\n"
        "    LEFT JOIN pg_catalog.pg_namespace nt ON nt.oid = t.tmplnamespace\n"
        "    WHERE d.dicttemplate = t.oid ) AS  \"%s\",\n"
        "  d.dictinitoption as \"%s\",\n",
        FUNC_6("Template"),
        FUNC_6("Init options"));
 }

 FUNC_3(&VAR_3,
       "  pg_catalog.obj_description(d.oid, 'pg_ts_dict') as \"%s\"\n",
       FUNC_6("Description"));

 FUNC_4(&VAR_3, "FROM pg_catalog.pg_ts_dict d\n"
       "LEFT JOIN pg_catalog.pg_namespace n ON n.oid = d.dictnamespace\n");

 FUNC_11(VAR_0.db, &VAR_3, VAR_1, 0, 0,
        "n.nspname", "d.dictname", ((void*)0),
        "pg_catalog.pg_ts_dict_is_visible(d.oid)");

 FUNC_4(&VAR_3, "ORDER BY 1, 2;");

 VAR_4 = FUNC_1(VAR_3.data);
 FUNC_12(&VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5.nullPrint = ((void*)0);
 VAR_5.title = FUNC_2("List of text search dictionaries");
 VAR_5.translate_header = 1;

 FUNC_9(VAR_4, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_4);
 return 1;
}
