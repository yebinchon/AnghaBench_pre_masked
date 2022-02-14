
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int remoteVersion; } ;
struct TYPE_17__ {scalar_t__ tableoid; scalar_t__ oid; } ;
struct TYPE_14__ {scalar_t__ tableoid; scalar_t__ oid; } ;
struct TYPE_16__ {scalar_t__ objType; int dumpId; TYPE_1__ catId; } ;
struct TYPE_15__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ DumpableObject ;
typedef TYPE_4__ CatalogId ;
typedef TYPE_5__ Archive ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_5__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 void* FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_3__* FUNC_10 (TYPE_4__) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_13(Archive *VAR_3)
{
 PQExpBuffer VAR_4;
 PGresult *VAR_5;
 int VAR_6,
    VAR_7;
 int VAR_8,
    VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;
 DumpableObject *VAR_13,
      *VAR_14;

 FUNC_11("reading dependency data");

 VAR_4 = FUNC_8();
 FUNC_6(VAR_4, "SELECT "
       "classid, objid, refclassid, refobjid, deptype "
       "FROM pg_depend "
       "WHERE deptype != 'p' AND deptype != 'e'\n");
 if (VAR_3->remoteVersion >= 80300)
 {
  FUNC_6(VAR_4, "UNION ALL\n"
        "SELECT 'pg_opfamily'::regclass AS classid, amopfamily AS objid, refclassid, refobjid, deptype "
        "FROM pg_depend d, pg_amop o "
        "WHERE deptype NOT IN ('p', 'e', 'i') AND "
        "classid = 'pg_amop'::regclass AND objid = o.oid "
        "AND NOT (refclassid = 'pg_opfamily'::regclass AND amopfamily = refobjid)\n");


  FUNC_6(VAR_4, "UNION ALL\n"
        "SELECT 'pg_opfamily'::regclass AS classid, amprocfamily AS objid, refclassid, refobjid, deptype "
        "FROM pg_depend d, pg_amproc p "
        "WHERE deptype NOT IN ('p', 'e', 'i') AND "
        "classid = 'pg_amproc'::regclass AND objid = p.oid "
        "AND NOT (refclassid = 'pg_opfamily'::regclass AND amprocfamily = refobjid)\n");
 }


 FUNC_6(VAR_4, "ORDER BY 1,2");

 VAR_5 = FUNC_0(VAR_3, VAR_4->data, VAR_2);

 VAR_6 = FUNC_4(VAR_5);

 VAR_8 = FUNC_2(VAR_5, "classid");
 VAR_9 = FUNC_2(VAR_5, "objid");
 VAR_10 = FUNC_2(VAR_5, "refclassid");
 VAR_11 = FUNC_2(VAR_5, "refobjid");
 VAR_12 = FUNC_2(VAR_5, "deptype");






 VAR_13 = ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  CatalogId VAR_15;
  CatalogId VAR_16;
  char VAR_17;

  VAR_15.tableoid = FUNC_7(FUNC_3(VAR_5, VAR_7, VAR_8));
  VAR_15.oid = FUNC_7(FUNC_3(VAR_5, VAR_7, VAR_9));
  VAR_16.tableoid = FUNC_7(FUNC_3(VAR_5, VAR_7, VAR_10));
  VAR_16.oid = FUNC_7(FUNC_3(VAR_5, VAR_7, VAR_11));
  VAR_17 = *(FUNC_3(VAR_5, VAR_7, VAR_12));

  if (VAR_13 == ((void*)0) ||
   VAR_13->catId.tableoid != VAR_15.tableoid ||
   VAR_13->catId.oid != VAR_15.oid)
   VAR_13 = FUNC_10(VAR_15);





  if (VAR_13 == ((void*)0))
  {




   continue;
  }

  VAR_14 = FUNC_10(VAR_16);

  if (VAR_14 == ((void*)0))
  {




   continue;
  }
  if (VAR_17 == 'i' &&
   VAR_13->objType == VAR_0 &&
   VAR_14->objType == VAR_1)
   FUNC_5(VAR_14, VAR_13->dumpId);
  else

   FUNC_5(VAR_13, VAR_14->dumpId);
 }

 FUNC_1(VAR_5);

 FUNC_9(VAR_4);
}
