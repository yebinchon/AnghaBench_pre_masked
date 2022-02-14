
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
 int FUNC_3 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int ,int ,int ,int ) ;
 int FUNC_12 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_13 (TYPE_2__*) ;

bool
FUNC_14(const char *VAR_1, bool VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;
 static const bool VAR_6[] = {0, 0, 0, 0,
 0, 0};

 if (VAR_0.sversion < 100000)
 {
  char VAR_7[32];

  FUNC_9("The server (version %s) does not support subscriptions.",
      FUNC_5(VAR_0.sversion, 0,
             VAR_7, sizeof(VAR_7)));
  return 1;
 }

 FUNC_7(&VAR_3);

 FUNC_11(&VAR_3,
       "SELECT subname AS \"%s\"\n"
       ",  pg_catalog.pg_get_userbyid(subowner) AS \"%s\"\n"
       ",  subenabled AS \"%s\"\n"
       ",  subpublications AS \"%s\"\n",
       FUNC_6("Name"),
       FUNC_6("Owner"),
       FUNC_6("Enabled"),
       FUNC_6("Publication"));

 if (VAR_2)
 {
  FUNC_3(&VAR_3,
        ",  subsynccommit AS \"%s\"\n"
        ",  subconninfo AS \"%s\"\n",
        FUNC_6("Synchronous commit"),
        FUNC_6("Conninfo"));
 }


 FUNC_4(&VAR_3,
       "FROM pg_catalog.pg_subscription\n"
       "WHERE subdbid = (SELECT oid\n"
       "                 FROM pg_catalog.pg_database\n"
       "                 WHERE datname = pg_catalog.current_database())");

 FUNC_12(VAR_0.db, &VAR_3, VAR_1, 1, 0,
        ((void*)0), "subname", ((void*)0),
        ((void*)0));

 FUNC_4(&VAR_3, "ORDER BY 1;");

 VAR_4 = FUNC_1(VAR_3.data);
 FUNC_13(&VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5.nullPrint = ((void*)0);
 VAR_5.title = FUNC_2("List of subscriptions");
 VAR_5.translate_header = 1;
 VAR_5.translate_columns = VAR_6;
 VAR_5.n_translate_columns = FUNC_8(VAR_6);

 FUNC_10(VAR_4, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_4);
 return 1;
}
