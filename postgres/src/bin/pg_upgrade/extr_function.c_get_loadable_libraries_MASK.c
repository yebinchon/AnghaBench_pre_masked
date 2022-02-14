
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ndbs; TYPE_3__* dbs; } ;
struct TYPE_11__ {TYPE_1__ dbarr; int major_version; } ;
struct TYPE_10__ {int num_libraries; TYPE_2__* libraries; } ;
struct TYPE_9__ {int db_name; } ;
struct TYPE_8__ {int dbnum; int name; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef TYPE_2__ LibraryInfo ;
typedef TYPE_3__ DbInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_5__*,int ) ;
 int * FUNC_6 (int *,char*,int ,int ) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (char*) ;

void
FUNC_12(void)
{
 PGresult **VAR_5;
 int VAR_6;
 int VAR_7;
 bool VAR_8 = 0;

 VAR_5 = (PGresult **) FUNC_10(VAR_3.dbarr.ndbs * sizeof(PGresult *));
 VAR_6 = 0;


 for (VAR_7 = 0; VAR_7 < VAR_3.dbarr.ndbs; VAR_7++)
 {
  DbInfo *VAR_9 = &VAR_3.dbarr.dbs[VAR_7];
  PGconn *VAR_10 = FUNC_5(&VAR_3, VAR_9->db_name);




  VAR_5[VAR_7] = FUNC_6(VAR_10,
          "SELECT DISTINCT probin "
          "FROM pg_catalog.pg_proc "
          "WHERE prolang = %u AND "
          "probin IS NOT NULL AND "
          "oid >= %u;",
          VAR_0,
          VAR_1);
  VAR_6 += FUNC_4(VAR_5[VAR_7]);
  if (FUNC_0(VAR_3.major_version) < 901)
  {
   PGresult *VAR_11;

   VAR_11 = FUNC_6(VAR_10,
         "SELECT 1 "
         "FROM pg_catalog.pg_proc p "
         "    JOIN pg_catalog.pg_namespace n "
         "    ON pronamespace = n.oid "
         "WHERE proname = 'plpython_call_handler' AND "
         "nspname = 'public' AND "
         "prolang = %u AND "
         "probin = '$libdir/plpython' AND "
         "p.oid >= %u;",
         VAR_0,
         VAR_1);
   if (FUNC_4(VAR_11) > 0)
   {
    if (!VAR_8)
    {
     FUNC_9(VAR_2,
         "\nThe old cluster has a \"plpython_call_handler\" function defined\n"
         "in the \"public\" schema which is a duplicate of the one defined\n"
         "in the \"pg_catalog\" schema.  You can confirm this by executing\n"
         "in psql:\n"
         "\n"
         "    \\df *.plpython_call_handler\n"
         "\n"
         "The \"public\" schema version of this function was created by a\n"
         "pre-8.1 install of plpython, and must be removed for pg_upgrade\n"
         "to complete because it references a now-obsolete \"plpython\"\n"
         "shared object file.  You can remove the \"public\" schema version\n"
         "of this function by running the following command:\n"
         "\n"
         "    DROP FUNCTION public.plpython_call_handler()\n"
         "\n"
         "in each affected database:\n"
         "\n");
    }
    FUNC_9(VAR_2, "    %s\n", VAR_9->db_name);
    VAR_8 = 1;
   }
   FUNC_1(VAR_11);
  }

  FUNC_2(VAR_10);
 }

 if (VAR_8)
  FUNC_7("Remove the problem functions from the old cluster to continue.\n");

 VAR_4.libraries = (LibraryInfo *) FUNC_10(VAR_6 * sizeof(LibraryInfo));
 VAR_6 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_3.dbarr.ndbs; VAR_7++)
 {
  PGresult *VAR_12 = VAR_5[VAR_7];
  int VAR_13;
  int VAR_14;

  VAR_13 = FUNC_4(VAR_12);
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  {
   char *VAR_15 = FUNC_3(VAR_12, VAR_14, 0);

   VAR_4.libraries[VAR_6].name = FUNC_11(VAR_15);
   VAR_4.libraries[VAR_6].dbnum = VAR_7;

   VAR_6++;
  }
  FUNC_1(VAR_12);
 }

 FUNC_8(VAR_5);

 VAR_4.num_libraries = VAR_6;
}
