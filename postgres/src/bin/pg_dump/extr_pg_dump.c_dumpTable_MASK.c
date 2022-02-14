
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_15__ ;


struct TYPE_24__ {int oid; } ;
struct TYPE_27__ {int dump; char* name; TYPE_2__* namespace; int dumpId; TYPE_15__ catId; } ;
struct TYPE_28__ {scalar_t__ relkind; char* relacl; char* rrelacl; char* initrelacl; char* initrrelacl; int rolname; TYPE_3__ dobj; } ;
typedef TYPE_4__ TableInfo ;
struct TYPE_31__ {int remoteVersion; TYPE_6__* dopt; } ;
struct TYPE_30__ {int binary_upgrade; scalar_t__ dataOnly; } ;
struct TYPE_29__ {int data; } ;
struct TYPE_25__ {int name; } ;
struct TYPE_26__ {TYPE_1__ dobj; } ;
typedef TYPE_5__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_6__ DumpOptions ;
typedef TYPE_7__ Archive ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_7__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_5__*,char*,int ,...) ;
 int FUNC_5 (TYPE_5__*,TYPE_5__*,TYPE_5__*,TYPE_5__*,char*,char*,char*,int ) ;
 TYPE_5__* FUNC_6 () ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_7__*,TYPE_15__,int ,char const*,char*,char*,int ,int ,char*,char*,char*,char*) ;
 int FUNC_9 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(Archive *VAR_3, TableInfo *VAR_4)
{
 DumpOptions *VAR_5 = VAR_3->dopt;
 char *VAR_6;





 if (!VAR_4->dobj.dump || VAR_5->dataOnly)
  return;

 if (VAR_4->relkind == VAR_2)
  FUNC_9(VAR_3, VAR_4);
 else
  FUNC_10(VAR_3, VAR_4);


 VAR_6 = FUNC_13(FUNC_11(VAR_4->dobj.name));
 if (VAR_4->dobj.dump & VAR_0)
 {
  const char *VAR_7 =
  (VAR_4->relkind == VAR_2) ? "SEQUENCE" : "TABLE";

  FUNC_8(VAR_3, VAR_4->dobj.catId, VAR_4->dobj.dumpId,
    VAR_7, VAR_6, ((void*)0),
    VAR_4->dobj.namespace->dobj.name, VAR_4->rolname,
    VAR_4->relacl, VAR_4->rrelacl,
    VAR_4->initrelacl, VAR_4->initrrelacl);
 }






 if (VAR_3->remoteVersion >= 80400 && VAR_4->dobj.dump & VAR_0)
 {
  PQExpBuffer VAR_8 = FUNC_6();
  PGresult *VAR_9;
  int VAR_10;

  if (VAR_3->remoteVersion >= 90600)
  {
   PQExpBuffer VAR_11 = FUNC_6();
   PQExpBuffer VAR_12 = FUNC_6();
   PQExpBuffer VAR_13 = FUNC_6();
   PQExpBuffer VAR_14 = FUNC_6();

   FUNC_5(VAR_11, VAR_12, VAR_13,
       VAR_14, "at.attacl", "c.relowner", "'c'",
       VAR_5->binary_upgrade);

   FUNC_4(VAR_8,
         "SELECT at.attname, "
         "%s AS attacl, "
         "%s AS rattacl, "
         "%s AS initattacl, "
         "%s AS initrattacl "
         "FROM pg_catalog.pg_attribute at "
         "JOIN pg_catalog.pg_class c ON (at.attrelid = c.oid) "
         "LEFT JOIN pg_catalog.pg_init_privs pip ON "
         "(at.attrelid = pip.objoid "
         "AND pip.classoid = 'pg_catalog.pg_class'::pg_catalog.regclass "
         "AND at.attnum = pip.objsubid) "
         "WHERE at.attrelid = '%u'::pg_catalog.oid AND "
         "NOT at.attisdropped "
         "AND ("
         "%s IS NOT NULL OR "
         "%s IS NOT NULL OR "
         "%s IS NOT NULL OR "
         "%s IS NOT NULL)"
         "ORDER BY at.attnum",
         VAR_11->data,
         VAR_12->data,
         VAR_13->data,
         VAR_14->data,
         VAR_4->dobj.catId.oid,
         VAR_11->data,
         VAR_12->data,
         VAR_13->data,
         VAR_14->data);

   FUNC_7(VAR_11);
   FUNC_7(VAR_12);
   FUNC_7(VAR_13);
   FUNC_7(VAR_14);
  }
  else
  {
   FUNC_4(VAR_8,
         "SELECT attname, attacl, NULL as rattacl, "
         "NULL AS initattacl, NULL AS initrattacl "
         "FROM pg_catalog.pg_attribute "
         "WHERE attrelid = '%u'::pg_catalog.oid AND NOT attisdropped "
         "AND attacl IS NOT NULL "
         "ORDER BY attnum",
         VAR_4->dobj.catId.oid);
  }

  VAR_9 = FUNC_0(VAR_3, VAR_8->data, VAR_1);

  for (VAR_10 = 0; VAR_10 < FUNC_3(VAR_9); VAR_10++)
  {
   char *VAR_15 = FUNC_2(VAR_9, VAR_10, 0);
   char *VAR_16 = FUNC_2(VAR_9, VAR_10, 1);
   char *VAR_17 = FUNC_2(VAR_9, VAR_10, 2);
   char *VAR_18 = FUNC_2(VAR_9, VAR_10, 3);
   char *VAR_19 = FUNC_2(VAR_9, VAR_10, 4);
   char *VAR_20;

   VAR_20 = FUNC_13(FUNC_11(VAR_15));

   FUNC_8(VAR_3, VAR_4->dobj.catId, VAR_4->dobj.dumpId,
     "TABLE", VAR_6, VAR_20,
     VAR_4->dobj.namespace->dobj.name, VAR_4->rolname,
     VAR_16, VAR_17, VAR_18, VAR_19);
   FUNC_12(VAR_20);
  }
  FUNC_1(VAR_9);
  FUNC_7(VAR_8);
 }

 FUNC_12(VAR_6);

 return;
}
