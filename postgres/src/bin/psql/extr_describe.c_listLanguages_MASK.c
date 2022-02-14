
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
 int FUNC_9 (TYPE_2__*,char*,int ) ;
 int FUNC_10 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_11 (TYPE_2__*) ;

bool
FUNC_12(const char *VAR_1, bool VAR_2, bool VAR_3)
{
 PQExpBufferData VAR_4;
 PGresult *VAR_5;
 printQueryOpt VAR_6 = VAR_0.popt;

 FUNC_6(&VAR_4);

 FUNC_9(&VAR_4,
       "SELECT l.lanname AS \"%s\",\n",
       FUNC_5("Name"));
 if (VAR_0.sversion >= 80300)
  FUNC_3(&VAR_4,
        "       pg_catalog.pg_get_userbyid(l.lanowner) as \"%s\",\n",
        FUNC_5("Owner"));

 FUNC_3(&VAR_4,
       "       l.lanpltrusted AS \"%s\"",
       FUNC_5("Trusted"));

 if (VAR_2)
 {
  FUNC_3(&VAR_4,
        ",\n       NOT l.lanispl AS \"%s\",\n"
        "       l.lanplcallfoid::pg_catalog.regprocedure AS \"%s\",\n"
        "       l.lanvalidator::pg_catalog.regprocedure AS \"%s\",\n       ",
        FUNC_5("Internal language"),
        FUNC_5("Call handler"),
        FUNC_5("Validator"));
  if (VAR_0.sversion >= 90000)
   FUNC_3(&VAR_4, "l.laninline::pg_catalog.regprocedure AS \"%s\",\n       ",
         FUNC_5("Inline handler"));
  FUNC_7(&VAR_4, "l.lanacl");
 }

 FUNC_3(&VAR_4,
       ",\n       d.description AS \"%s\""
       "\nFROM pg_catalog.pg_language l\n"
       "LEFT JOIN pg_catalog.pg_description d\n"
       "  ON d.classoid = l.tableoid AND d.objoid = l.oid\n"
       "  AND d.objsubid = 0\n",
       FUNC_5("Description"));

 if (VAR_1)
  FUNC_10(VAR_0.db, &VAR_4, VAR_1, 0, 0,
         ((void*)0), "l.lanname", ((void*)0), ((void*)0));

 if (!VAR_3 && !VAR_1)
  FUNC_4(&VAR_4, "WHERE l.lanplcallfoid != 0\n");


 FUNC_4(&VAR_4, "ORDER BY 1;");

 VAR_5 = FUNC_1(VAR_4.data);
 FUNC_11(&VAR_4);
 if (!VAR_5)
  return 0;

 VAR_6.nullPrint = ((void*)0);
 VAR_6.title = FUNC_2("List of languages");
 VAR_6.translate_header = 1;

 FUNC_8(VAR_5, &VAR_6, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_5);
 return 1;
}
