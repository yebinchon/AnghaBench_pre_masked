
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
struct TYPE_12__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int,int,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ,int ,int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_11 (TYPE_2__*) ;

bool
FUNC_12(const char *VAR_1)
{
 PQExpBufferData VAR_2;
 PGresult *VAR_3;
 printQueryOpt VAR_4 = VAR_0.popt;

 if (VAR_0.sversion < 90100)
 {
  char VAR_5[32];

  FUNC_7("The server (version %s) does not support extensions.",
      FUNC_4(VAR_0.sversion, 0,
             VAR_5, sizeof(VAR_5)));
  return 1;
 }

 FUNC_6(&VAR_2);
 FUNC_9(&VAR_2,
       "SELECT e.extname AS \"%s\", "
       "e.extversion AS \"%s\", n.nspname AS \"%s\", c.description AS \"%s\"\n"
       "FROM pg_catalog.pg_extension e "
       "LEFT JOIN pg_catalog.pg_namespace n ON n.oid = e.extnamespace "
       "LEFT JOIN pg_catalog.pg_description c ON c.objoid = e.oid "
       "AND c.classoid = 'pg_catalog.pg_extension'::pg_catalog.regclass\n",
       FUNC_5("Name"),
       FUNC_5("Version"),
       FUNC_5("Schema"),
       FUNC_5("Description"));

 FUNC_10(VAR_0.db, &VAR_2, VAR_1,
        0, 0,
        ((void*)0), "e.extname", ((void*)0),
        ((void*)0));

 FUNC_3(&VAR_2, "ORDER BY 1;");

 VAR_3 = FUNC_1(VAR_2.data);
 FUNC_11(&VAR_2);
 if (!VAR_3)
  return 0;

 VAR_4.nullPrint = ((void*)0);
 VAR_4.title = FUNC_2("List of installed extensions");
 VAR_4.translate_header = 1;

 FUNC_8(VAR_3, &VAR_4, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_3);
 return 1;
}
