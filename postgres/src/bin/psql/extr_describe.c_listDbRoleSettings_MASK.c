
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sverbuf ;
struct TYPE_10__ {int translate_header; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_12__ {int sversion; int logfile; int queryFout; int quiet; int db; TYPE_1__ popt; } ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_10 (TYPE_2__*,char*,int ,int ,int ) ;
 int FUNC_11 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_12 (TYPE_2__*) ;

bool
FUNC_13(const char *VAR_1, const char *VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;
 bool VAR_6;

 if (VAR_0.sversion < 90000)
 {
  char VAR_7[32];

  FUNC_8("The server (version %s) does not support per-database role settings.",
      FUNC_5(VAR_0.sversion, 0,
             VAR_7, sizeof(VAR_7)));
  return 1;
 }

 FUNC_7(&VAR_3);

 FUNC_10(&VAR_3, "SELECT rolname AS \"%s\", datname AS \"%s\",\n"
       "pg_catalog.array_to_string(setconfig, E'\\n') AS \"%s\"\n"
       "FROM pg_catalog.pg_db_role_setting s\n"
       "LEFT JOIN pg_catalog.pg_database d ON d.oid = setdatabase\n"
       "LEFT JOIN pg_catalog.pg_roles r ON r.oid = setrole\n",
       FUNC_6("Role"),
       FUNC_6("Database"),
       FUNC_6("Settings"));
 VAR_6 = FUNC_11(VAR_0.db, &VAR_3, VAR_1, 0, 0,
           ((void*)0), "r.rolname", ((void*)0), ((void*)0));
 FUNC_11(VAR_0.db, &VAR_3, VAR_2, VAR_6, 0,
        ((void*)0), "d.datname", ((void*)0), ((void*)0));
 FUNC_4(&VAR_3, "ORDER BY 1, 2;");

 VAR_4 = FUNC_2(VAR_3.data);
 FUNC_12(&VAR_3);
 if (!VAR_4)
  return 0;







 if (FUNC_1(VAR_4) == 0 && !VAR_0.quiet)
 {
  if (VAR_1 && VAR_2)
   FUNC_8("Did not find any settings for role \"%s\" and database \"%s\".",
       VAR_1, VAR_2);
  else if (VAR_1)
   FUNC_8("Did not find any settings for role \"%s\".",
       VAR_1);
  else
   FUNC_8("Did not find any settings.");
 }
 else
 {
  VAR_5.nullPrint = ((void*)0);
  VAR_5.title = FUNC_3("List of settings");
  VAR_5.translate_header = 1;

  FUNC_9(VAR_4, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);
 }

 FUNC_0(VAR_4);
 return 1;
}
