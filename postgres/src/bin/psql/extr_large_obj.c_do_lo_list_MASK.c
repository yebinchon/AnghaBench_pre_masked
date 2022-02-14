
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tuples_only; } ;
struct TYPE_6__ {int translate_header; int title; int * nullPrint; TYPE_1__ topt; } ;
typedef TYPE_2__ printQueryOpt ;
typedef int buf ;
struct TYPE_7__ {int sversion; int logfile; int queryFout; TYPE_2__ popt; } ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int *,TYPE_2__*,int ,int,int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_5 (char*,int,char*,char*,char*,...) ;

bool
FUNC_6(void)
{
 PGresult *VAR_1;
 char VAR_2[1024];
 printQueryOpt VAR_3 = VAR_0.popt;

 if (VAR_0.sversion >= 90000)
 {
  FUNC_5(VAR_2, sizeof(VAR_2),
     "SELECT oid as \"%s\",\n"
     "  pg_catalog.pg_get_userbyid(lomowner) as \"%s\",\n"
     "  pg_catalog.obj_description(oid, 'pg_largeobject') as \"%s\"\n"
     "  FROM pg_catalog.pg_largeobject_metadata "
     "  ORDER BY oid",
     FUNC_3("ID"),
     FUNC_3("Owner"),
     FUNC_3("Description"));
 }
 else
 {
  FUNC_5(VAR_2, sizeof(VAR_2),
     "SELECT loid as \"%s\",\n"
     "  pg_catalog.obj_description(loid, 'pg_largeobject') as \"%s\"\n"
     "FROM (SELECT DISTINCT loid FROM pg_catalog.pg_largeobject) x\n"
     "ORDER BY 1",
     FUNC_3("ID"),
     FUNC_3("Description"));
 }

 VAR_1 = FUNC_1(VAR_2);
 if (!VAR_1)
  return 0;

 VAR_3.topt.tuples_only = 0;
 VAR_3.nullPrint = ((void*)0);
 VAR_3.title = FUNC_2("Large objects");
 VAR_3.translate_header = 1;

 FUNC_4(VAR_1, &VAR_3, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_1);
 return 1;
}
