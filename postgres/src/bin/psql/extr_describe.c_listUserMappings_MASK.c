
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
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_10 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_11 (int ,TYPE_2__*,char const*,int,int,int *,char*,char*,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_12 (TYPE_2__*) ;

bool
FUNC_13(const char *VAR_1, bool VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;

 if (VAR_0.sversion < 80400)
 {
  char VAR_6[32];

  FUNC_8("The server (version %s) does not support user mappings.",
      FUNC_5(VAR_0.sversion, 0,
             VAR_6, sizeof(VAR_6)));
  return 1;
 }

 FUNC_7(&VAR_3);
 FUNC_10(&VAR_3,
       "SELECT um.srvname AS \"%s\",\n"
       "  um.usename AS \"%s\"",
       FUNC_6("Server"),
       FUNC_6("User name"));

 if (VAR_2)
  FUNC_3(&VAR_3,
        ",\n CASE WHEN umoptions IS NULL THEN '' ELSE "
        "  '(' || pg_catalog.array_to_string(ARRAY(SELECT "
        "  pg_catalog.quote_ident(option_name) ||  ' ' || "
        "  pg_catalog.quote_literal(option_value)  FROM "
        "  pg_catalog.pg_options_to_table(umoptions)),  ', ') || ')' "
        "  END AS \"%s\"",
        FUNC_6("FDW options"));

 FUNC_4(&VAR_3, "\nFROM pg_catalog.pg_user_mappings um\n");

 FUNC_11(VAR_0.db, &VAR_3, VAR_1, 0, 0,
        ((void*)0), "um.srvname", "um.usename", ((void*)0));

 FUNC_4(&VAR_3, "ORDER BY 1, 2;");

 VAR_4 = FUNC_1(VAR_3.data);
 FUNC_12(&VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5.nullPrint = ((void*)0);
 VAR_5.title = FUNC_2("List of user mappings");
 VAR_5.translate_header = 1;

 FUNC_9(VAR_4, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_4);
 return 1;
}
