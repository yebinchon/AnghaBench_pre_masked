
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int translate_header; int title; int * nullPrint; } ;
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
 int FUNC_7 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_8 (TYPE_2__*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_2__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_10 (TYPE_2__*) ;

bool
FUNC_11(const char *VAR_1, bool VAR_2, bool VAR_3)
{
 PQExpBufferData VAR_4;
 PGresult *VAR_5;
 printQueryOpt VAR_6 = VAR_0.popt;

 FUNC_6(&VAR_4);
 FUNC_8(&VAR_4,
       "SELECT n.nspname as \"%s\",\n"
       "  o.oprname AS \"%s\",\n"
       "  CASE WHEN o.oprkind='l' THEN NULL ELSE pg_catalog.format_type(o.oprleft, NULL) END AS \"%s\",\n"
       "  CASE WHEN o.oprkind='r' THEN NULL ELSE pg_catalog.format_type(o.oprright, NULL) END AS \"%s\",\n"
       "  pg_catalog.format_type(o.oprresult, NULL) AS \"%s\",\n",
       FUNC_5("Schema"),
       FUNC_5("Name"),
       FUNC_5("Left arg type"),
       FUNC_5("Right arg type"),
       FUNC_5("Result type"));

 if (VAR_2)
  FUNC_3(&VAR_4,
        "  o.oprcode AS \"%s\",\n",
        FUNC_5("Function"));

 FUNC_3(&VAR_4,
       "  coalesce(pg_catalog.obj_description(o.oid, 'pg_operator'),\n"
       "           pg_catalog.obj_description(o.oprcode, 'pg_proc')) AS \"%s\"\n"
       "FROM pg_catalog.pg_operator o\n"
       "     LEFT JOIN pg_catalog.pg_namespace n ON n.oid = o.oprnamespace\n",
       FUNC_5("Description"));

 if (!VAR_3 && !VAR_1)
  FUNC_4(&VAR_4, "WHERE n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");

 FUNC_9(VAR_0.db, &VAR_4, VAR_1, !VAR_3 && !VAR_1, 1,
        "n.nspname", "o.oprname", ((void*)0),
        "pg_catalog.pg_operator_is_visible(o.oid)");

 FUNC_4(&VAR_4, "ORDER BY 1, 2, 3, 4;");

 VAR_5 = FUNC_1(VAR_4.data);
 FUNC_10(&VAR_4);
 if (!VAR_5)
  return 0;

 VAR_6.nullPrint = ((void*)0);
 VAR_6.title = FUNC_2("List of operators");
 VAR_6.translate_header = 1;

 FUNC_7(VAR_5, &VAR_6, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_5);
 return 1;
}
