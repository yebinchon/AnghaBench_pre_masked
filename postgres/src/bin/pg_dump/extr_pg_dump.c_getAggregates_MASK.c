
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {void* oid; void* tableoid; } ;
struct TYPE_29__ {int dump; void* name; int namespace; TYPE_1__ catId; int objType; } ;
struct TYPE_24__ {int nargs; TYPE_7__ dobj; int * argtypes; void* initrproacl; void* initproacl; void* rproacl; void* proacl; void* prorettype; void* lang; void* rolname; } ;
struct TYPE_28__ {TYPE_2__ aggfn; } ;
struct TYPE_27__ {int remoteVersion; TYPE_4__* dopt; } ;
struct TYPE_26__ {scalar_t__ binary_upgrade; } ;
struct TYPE_25__ {int data; } ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef int Oid ;
typedef TYPE_4__ DumpOptions ;
typedef TYPE_5__ Archive ;
typedef TYPE_6__ AggInfo ;


 int FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_5__*,int ,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,char*,int ,...) ;
 int FUNC_8 (TYPE_3__*,char) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,char*,char*,char*,scalar_t__) ;
 TYPE_3__* FUNC_13 () ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_5__*,void*) ;
 int FUNC_16 (int ,int *,int) ;
 int FUNC_17 (char*,void*) ;
 scalar_t__ FUNC_18 (int) ;
 void* FUNC_19 (int ) ;
 int FUNC_20 (TYPE_7__*,TYPE_5__*) ;
 scalar_t__ FUNC_21 (void*) ;
 int VAR_4 ;

AggInfo *
FUNC_22(Archive *VAR_5, int *VAR_6)
{
 DumpOptions *VAR_7 = VAR_5->dopt;
 PGresult *VAR_8;
 int VAR_9;
 int VAR_10;
 PQExpBuffer VAR_11 = FUNC_13();
 AggInfo *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;





 if (VAR_5->remoteVersion >= 90600)
 {
  PQExpBuffer VAR_24 = FUNC_13();
  PQExpBuffer VAR_25 = FUNC_13();
  PQExpBuffer VAR_26 = FUNC_13();
  PQExpBuffer VAR_27 = FUNC_13();
  const char *VAR_28;

  FUNC_12(VAR_24, VAR_25, VAR_26,
      VAR_27, "p.proacl", "p.proowner", "'f'",
      VAR_7->binary_upgrade);

  VAR_28 = (VAR_5->remoteVersion >= 110000 ? "p.prokind = 'a'"
      : "p.proisagg");

  FUNC_7(VAR_11, "SELECT p.tableoid, p.oid, "
        "p.proname AS aggname, "
        "p.pronamespace AS aggnamespace, "
        "p.pronargs, p.proargtypes, "
        "(%s p.proowner) AS rolname, "
        "%s AS aggacl, "
        "%s AS raggacl, "
        "%s AS initaggacl, "
        "%s AS initraggacl "
        "FROM pg_proc p "
        "LEFT JOIN pg_init_privs pip ON "
        "(p.oid = pip.objoid "
        "AND pip.classoid = 'pg_proc'::regclass "
        "AND pip.objsubid = 0) "
        "WHERE %s AND ("
        "p.pronamespace != "
        "(SELECT oid FROM pg_namespace "
        "WHERE nspname = 'pg_catalog') OR "
        "p.proacl IS DISTINCT FROM pip.initprivs",
        VAR_4,
        VAR_24->data,
        VAR_25->data,
        VAR_26->data,
        VAR_27->data,
        VAR_28);
  if (VAR_7->binary_upgrade)
   FUNC_9(VAR_11,
         " OR EXISTS(SELECT 1 FROM pg_depend WHERE "
         "classid = 'pg_proc'::regclass AND "
         "objid = p.oid AND "
         "refclassid = 'pg_extension'::regclass AND "
         "deptype = 'e')");
  FUNC_8(VAR_11, ')');

  FUNC_14(VAR_24);
  FUNC_14(VAR_25);
  FUNC_14(VAR_26);
  FUNC_14(VAR_27);
 }
 else if (VAR_5->remoteVersion >= 80200)
 {
  FUNC_7(VAR_11, "SELECT tableoid, oid, proname AS aggname, "
        "pronamespace AS aggnamespace, "
        "pronargs, proargtypes, "
        "(%s proowner) AS rolname, "
        "proacl AS aggacl, "
        "NULL AS raggacl, "
        "NULL AS initaggacl, NULL AS initraggacl "
        "FROM pg_proc p "
        "WHERE proisagg AND ("
        "pronamespace != "
        "(SELECT oid FROM pg_namespace "
        "WHERE nspname = 'pg_catalog')",
        VAR_4);
  if (VAR_7->binary_upgrade && VAR_5->remoteVersion >= 90100)
   FUNC_9(VAR_11,
         " OR EXISTS(SELECT 1 FROM pg_depend WHERE "
         "classid = 'pg_proc'::regclass AND "
         "objid = p.oid AND "
         "refclassid = 'pg_extension'::regclass AND "
         "deptype = 'e')");
  FUNC_8(VAR_11, ')');
 }
 else
 {
  FUNC_7(VAR_11, "SELECT tableoid, oid, proname AS aggname, "
        "pronamespace AS aggnamespace, "
        "CASE WHEN proargtypes[0] = 'pg_catalog.\"any\"'::pg_catalog.regtype THEN 0 ELSE 1 END AS pronargs, "
        "proargtypes, "
        "(%s proowner) AS rolname, "
        "proacl AS aggacl, "
        "NULL AS raggacl, "
        "NULL AS initaggacl, NULL AS initraggacl "
        "FROM pg_proc "
        "WHERE proisagg "
        "AND pronamespace != "
        "(SELECT oid FROM pg_namespace WHERE nspname = 'pg_catalog')",
        VAR_4);
 }

 VAR_8 = FUNC_1(VAR_5, VAR_11->data, VAR_3);

 VAR_9 = FUNC_6(VAR_8);
 *VAR_6 = VAR_9;

 VAR_12 = (AggInfo *) FUNC_18(VAR_9 * sizeof(AggInfo));

 VAR_13 = FUNC_3(VAR_8, "tableoid");
 VAR_14 = FUNC_3(VAR_8, "oid");
 VAR_15 = FUNC_3(VAR_8, "aggname");
 VAR_16 = FUNC_3(VAR_8, "aggnamespace");
 VAR_17 = FUNC_3(VAR_8, "pronargs");
 VAR_18 = FUNC_3(VAR_8, "proargtypes");
 VAR_19 = FUNC_3(VAR_8, "rolname");
 VAR_20 = FUNC_3(VAR_8, "aggacl");
 VAR_21 = FUNC_3(VAR_8, "raggacl");
 VAR_22 = FUNC_3(VAR_8, "initaggacl");
 VAR_23 = FUNC_3(VAR_8, "initraggacl");

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  VAR_12[VAR_10].aggfn.dobj.objType = VAR_0;
  VAR_12[VAR_10].aggfn.dobj.catId.tableoid = FUNC_11(FUNC_5(VAR_8, VAR_10, VAR_13));
  VAR_12[VAR_10].aggfn.dobj.catId.oid = FUNC_11(FUNC_5(VAR_8, VAR_10, VAR_14));
  FUNC_0(&VAR_12[VAR_10].aggfn.dobj);
  VAR_12[VAR_10].aggfn.dobj.name = FUNC_19(FUNC_5(VAR_8, VAR_10, VAR_15));
  VAR_12[VAR_10].aggfn.dobj.namespace =
   FUNC_15(VAR_5,
        FUNC_11(FUNC_5(VAR_8, VAR_10, VAR_16)));
  VAR_12[VAR_10].aggfn.rolname = FUNC_19(FUNC_5(VAR_8, VAR_10, VAR_19));
  if (FUNC_21(VAR_12[VAR_10].aggfn.rolname) == 0)
   FUNC_17("owner of aggregate function \"%s\" appears to be invalid",
         VAR_12[VAR_10].aggfn.dobj.name);
  VAR_12[VAR_10].aggfn.lang = VAR_2;
  VAR_12[VAR_10].aggfn.prorettype = VAR_2;
  VAR_12[VAR_10].aggfn.proacl = FUNC_19(FUNC_5(VAR_8, VAR_10, VAR_20));
  VAR_12[VAR_10].aggfn.rproacl = FUNC_19(FUNC_5(VAR_8, VAR_10, VAR_21));
  VAR_12[VAR_10].aggfn.initproacl = FUNC_19(FUNC_5(VAR_8, VAR_10, VAR_22));
  VAR_12[VAR_10].aggfn.initrproacl = FUNC_19(FUNC_5(VAR_8, VAR_10, VAR_23));
  VAR_12[VAR_10].aggfn.nargs = FUNC_10(FUNC_5(VAR_8, VAR_10, VAR_17));
  if (VAR_12[VAR_10].aggfn.nargs == 0)
   VAR_12[VAR_10].aggfn.argtypes = ((void*)0);
  else
  {
   VAR_12[VAR_10].aggfn.argtypes = (Oid *) FUNC_18(VAR_12[VAR_10].aggfn.nargs * sizeof(Oid));
   FUNC_16(FUNC_5(VAR_8, VAR_10, VAR_18),
        VAR_12[VAR_10].aggfn.argtypes,
        VAR_12[VAR_10].aggfn.nargs);
  }


  FUNC_20(&(VAR_12[VAR_10].aggfn.dobj), VAR_5);


  if (FUNC_4(VAR_8, VAR_10, VAR_20) && FUNC_4(VAR_8, VAR_10, VAR_21) &&
   FUNC_4(VAR_8, VAR_10, VAR_22) &&
   FUNC_4(VAR_8, VAR_10, VAR_23))
   VAR_12[VAR_10].aggfn.dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_8);

 FUNC_14(VAR_11);

 return VAR_12;
}
