
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int output_path ;
struct TYPE_11__ {scalar_t__ float8_pass_by_value; } ;
struct TYPE_16__ {TYPE_2__ controldata; } ;
struct TYPE_10__ {scalar_t__ float8_pass_by_value; } ;
struct TYPE_15__ {TYPE_1__ controldata; } ;
struct TYPE_12__ {int ndbs; TYPE_4__* dbs; } ;
struct TYPE_14__ {TYPE_3__ dbarr; } ;
struct TYPE_13__ {char* db_name; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef int FILE ;
typedef TYPE_4__ DbInfo ;
typedef TYPE_5__ ClusterInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int * FUNC_6 (TYPE_5__*,char*) ;
 int VAR_2 ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int *,char*,char*,...) ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int,char*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(ClusterInfo *VAR_5)
{
 int VAR_6;
 FILE *VAR_7 = ((void*)0);
 bool VAR_8 = 0;
 char VAR_9[VAR_0];

 FUNC_13("Checking for contrib/isn with bigint-passing mismatch");

 if (VAR_4.controldata.float8_pass_by_value ==
  VAR_3.controldata.float8_pass_by_value)
 {

  FUNC_5();
  return;
 }

 FUNC_14(VAR_9, sizeof(VAR_9),
    "contrib_isn_and_int8_pass_by_value.txt");

 for (VAR_6 = 0; VAR_6 < VAR_5->dbarr.ndbs; VAR_6++)
 {
  PGresult *VAR_10;
  bool VAR_11 = 0;
  int VAR_12;
  int VAR_13;
  int VAR_14,
     VAR_15;
  DbInfo *VAR_16 = &VAR_5->dbarr.dbs[VAR_6];
  PGconn *VAR_17 = FUNC_6(VAR_5, VAR_16->db_name);


  VAR_10 = FUNC_7(VAR_17,
        "SELECT n.nspname, p.proname "
        "FROM	pg_catalog.pg_proc p, "
        "		pg_catalog.pg_namespace n "
        "WHERE	p.pronamespace = n.oid AND "
        "		p.probin = '$libdir/isn'");

  VAR_12 = FUNC_4(VAR_10);
  VAR_14 = FUNC_2(VAR_10, "nspname");
  VAR_15 = FUNC_2(VAR_10, "proname");
  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  {
   VAR_8 = 1;
   if (VAR_7 == ((void*)0) && (VAR_7 = FUNC_9(VAR_9, "w")) == ((void*)0))
    FUNC_11("could not open file \"%s\": %s\n",
       VAR_9, FUNC_15(VAR_2));
   if (!VAR_11)
   {
    FUNC_10(VAR_7, "In database: %s\n", VAR_16->db_name);
    VAR_11 = 1;
   }
   FUNC_10(VAR_7, "  %s.%s\n",
     FUNC_3(VAR_10, VAR_13, VAR_14),
     FUNC_3(VAR_10, VAR_13, VAR_15));
  }

  FUNC_0(VAR_10);

  FUNC_1(VAR_17);
 }

 if (VAR_7)
  FUNC_8(VAR_7);

 if (VAR_8)
 {
  FUNC_12(VAR_1, "fatal\n");
  FUNC_11("Your installation contains \"contrib/isn\" functions which rely on the\n"
     "bigint data type.  Your old and new clusters pass bigint values\n"
     "differently so this cluster cannot currently be upgraded.  You can\n"
     "manually upgrade databases that use \"contrib/isn\" facilities and remove\n"
     "\"contrib/isn\" from the old cluster and restart the upgrade.  A list of\n"
     "the problem functions is in the file:\n"
     "    %s\n\n", VAR_9);
 }
 else
  FUNC_5();
}
