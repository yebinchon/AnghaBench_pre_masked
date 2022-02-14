
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sverbuf ;
struct TYPE_12__ {int translate_header; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_14__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_13__ {int data; } ;
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
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int ,int ,int ) ;
 int FUNC_12 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_13 (TYPE_2__*) ;

bool
FUNC_14(const char *VAR_1, bool VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;

 if (VAR_0.sversion < 80000)
 {
  char VAR_6[32];

  FUNC_8("The server (version %s) does not support tablespaces.",
     FUNC_5(VAR_0.sversion, 0,
            VAR_6, sizeof(VAR_6)));
  return 1;
 }

 FUNC_7(&VAR_3);

 if (VAR_0.sversion >= 90200)
  FUNC_11(&VAR_3,
        "SELECT spcname AS \"%s\",\n"
        "  pg_catalog.pg_get_userbyid(spcowner) AS \"%s\",\n"
        "  pg_catalog.pg_tablespace_location(oid) AS \"%s\"",
        FUNC_6("Name"),
        FUNC_6("Owner"),
        FUNC_6("Location"));
 else
  FUNC_11(&VAR_3,
        "SELECT spcname AS \"%s\",\n"
        "  pg_catalog.pg_get_userbyid(spcowner) AS \"%s\",\n"
        "  spclocation AS \"%s\"",
        FUNC_6("Name"),
        FUNC_6("Owner"),
        FUNC_6("Location"));

 if (VAR_2)
 {
  FUNC_4(&VAR_3, ",\n  ");
  FUNC_9(&VAR_3, "spcacl");
 }

 if (VAR_2 && VAR_0.sversion >= 90000)
  FUNC_3(&VAR_3,
        ",\n  spcoptions AS \"%s\"",
        FUNC_6("Options"));

 if (VAR_2 && VAR_0.sversion >= 90200)
  FUNC_3(&VAR_3,
        ",\n  pg_catalog.pg_size_pretty(pg_catalog.pg_tablespace_size(oid)) AS \"%s\"",
        FUNC_6("Size"));

 if (VAR_2 && VAR_0.sversion >= 80200)
  FUNC_3(&VAR_3,
        ",\n  pg_catalog.shobj_description(oid, 'pg_tablespace') AS \"%s\"",
        FUNC_6("Description"));

 FUNC_4(&VAR_3,
       "\nFROM pg_catalog.pg_tablespace\n");

 FUNC_12(VAR_0.db, &VAR_3, VAR_1, 0, 0,
        ((void*)0), "spcname", ((void*)0),
        ((void*)0));

 FUNC_4(&VAR_3, "ORDER BY 1;");

 VAR_4 = FUNC_1(VAR_3.data);
 FUNC_13(&VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5.nullPrint = ((void*)0);
 VAR_5.title = FUNC_2("List of tablespaces");
 VAR_5.translate_header = 1;

 FUNC_10(VAR_4, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_4);
 return 1;
}
