
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int output_path ;
struct TYPE_10__ {int ndbs; TYPE_3__* dbs; } ;
struct TYPE_13__ {TYPE_1__ dbarr; } ;
struct TYPE_12__ {int db_name; } ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;
typedef int PGconn ;
typedef int FILE ;
typedef TYPE_3__ DbInfo ;
typedef TYPE_4__ ClusterInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int * FUNC_7 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int * FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (char*,char*,int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (char*,int,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_2__*) ;

void
FUNC_21(ClusterInfo *VAR_3, bool VAR_4)
{
 int VAR_5;
 FILE *VAR_6 = ((void*)0);
 bool VAR_7 = 0;
 char VAR_8[VAR_0];

 FUNC_16("Checking for large objects");

 FUNC_18(VAR_8, sizeof(VAR_8), "pg_largeobject.sql");

 for (VAR_5 = 0; VAR_5 < VAR_3->dbarr.ndbs; VAR_5++)
 {
  PGresult *VAR_9;
  int VAR_10;
  DbInfo *VAR_11 = &VAR_3->dbarr.dbs[VAR_5];
  PGconn *VAR_12 = FUNC_7(VAR_3, VAR_11->db_name);


  VAR_9 = FUNC_8(VAR_12,
        "SELECT count(*) "
        "FROM	pg_catalog.pg_largeobject ");

  VAR_10 = FUNC_2(VAR_9, "count");
  if (FUNC_5(FUNC_3(VAR_9, 0, VAR_10)) != 0)
  {
   VAR_7 = 1;
   if (!VAR_4)
   {
    PQExpBufferData VAR_13;

    if (VAR_6 == ((void*)0) && (VAR_6 = FUNC_10(VAR_8, "w")) == ((void*)0))
     FUNC_14("could not open file \"%s\": %s\n", VAR_8,
        FUNC_19(VAR_2));

    FUNC_13(&VAR_13);
    FUNC_4(&VAR_13, VAR_11->db_name);
    FUNC_12(VAR_13.data, VAR_6);
    FUNC_20(&VAR_13);

    FUNC_11(VAR_6,
      "SELECT pg_catalog.lo_create(t.loid)\n"
      "FROM (SELECT DISTINCT loid FROM pg_catalog.pg_largeobject) AS t;\n");
   }
  }

  FUNC_0(VAR_9);
  FUNC_1(VAR_12);
 }

 if (VAR_6)
  FUNC_9(VAR_6);

 if (VAR_7)
 {
  FUNC_17(VAR_1, "warning");
  if (VAR_4)
   FUNC_15(VAR_1, "\n"
       "Your installation contains large objects.  The new database has an\n"
       "additional large object permission table.  After upgrading, you will be\n"
       "given a command to populate the pg_largeobject_metadata table with\n"
       "default permissions.\n\n");
  else
   FUNC_15(VAR_1, "\n"
       "Your installation contains large objects.  The new database has an\n"
       "additional large object permission table, so default permissions must be\n"
       "defined for all large objects.  The file\n"
       "    %s\n"
       "when executed by psql by the database superuser will set the default\n"
       "permissions.\n\n",
       VAR_8);
 }
 else
  FUNC_6();
}
