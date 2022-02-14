
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int translate_header; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_10__ {int logfile; int queryFout; TYPE_1__ popt; } ;
struct TYPE_9__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,char*,char const*,...) ;
 TYPE_4__ VAR_0 ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_8(const char *VAR_1, const char *VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 PQExpBufferData VAR_5;
 printQueryOpt VAR_6 = VAR_0.popt;

 FUNC_4(&VAR_3);
 FUNC_6(&VAR_3,
       "SELECT pg_catalog.pg_describe_object(classid, objid, 0) AS \"%s\"\n"
       "FROM pg_catalog.pg_depend\n"
       "WHERE refclassid = 'pg_catalog.pg_extension'::pg_catalog.regclass AND refobjid = '%s' AND deptype = 'e'\n"
       "ORDER BY 1;",
       FUNC_3("Object description"),
       VAR_2);

 VAR_4 = FUNC_1(VAR_3.data);
 FUNC_7(&VAR_3);
 if (!VAR_4)
  return 0;

 VAR_6.nullPrint = ((void*)0);
 FUNC_4(&VAR_5);
 FUNC_6(&VAR_5, FUNC_2("Objects in extension \"%s\""), VAR_1);
 VAR_6.title = VAR_5.data;
 VAR_6.translate_header = 1;

 FUNC_5(VAR_4, &VAR_6, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_7(&VAR_5);
 FUNC_0(VAR_4);
 return 1;
}
