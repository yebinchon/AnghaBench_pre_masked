
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {void* oid; void* tableoid; } ;
struct TYPE_27__ {void* name; int dump; int namespace; TYPE_1__ catId; int objType; } ;
struct TYPE_26__ {int remoteVersion; TYPE_4__* dopt; } ;
struct TYPE_25__ {scalar_t__ binary_upgrade; } ;
struct TYPE_24__ {int nargs; TYPE_6__ dobj; void* rolname; int * argtypes; void* initrproacl; void* initproacl; void* rproacl; void* proacl; void* prorettype; void* lang; } ;
struct TYPE_23__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef int Oid ;
typedef TYPE_3__ FuncInfo ;
typedef TYPE_4__ DumpOptions ;
typedef TYPE_5__ Archive ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_5__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,char*,int ,...) ;
 int FUNC_8 (TYPE_2__*,char) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,char*,char*,char*,scalar_t__) ;
 TYPE_2__* FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_5__*,void*) ;
 int VAR_3 ;
 int FUNC_16 (int ,int *,int) ;
 int FUNC_17 (char*,void*) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;
 void* FUNC_20 (int ) ;
 int FUNC_21 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_22 (void*) ;
 int VAR_4 ;

FuncInfo *
FUNC_23(Archive *VAR_5, int *VAR_6)
{
 DumpOptions *VAR_7 = VAR_5->dopt;
 PGresult *VAR_8;
 int VAR_9;
 int VAR_10;
 PQExpBuffer VAR_11 = FUNC_13();
 FuncInfo *VAR_12;
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
 int VAR_24;
 int VAR_25;
 if (VAR_5->remoteVersion >= 90600)
 {
  PQExpBuffer VAR_26 = FUNC_13();
  PQExpBuffer VAR_27 = FUNC_13();
  PQExpBuffer VAR_28 = FUNC_13();
  PQExpBuffer VAR_29 = FUNC_13();
  const char *VAR_30;

  FUNC_12(VAR_26, VAR_27, VAR_28,
      VAR_29, "p.proacl", "p.proowner", "'f'",
      VAR_7->binary_upgrade);

  VAR_30 = (VAR_5->remoteVersion >= 110000 ? "p.prokind <> 'a'"
       : "NOT p.proisagg");

  FUNC_7(VAR_11,
        "SELECT p.tableoid, p.oid, p.proname, p.prolang, "
        "p.pronargs, p.proargtypes, p.prorettype, "
        "%s AS proacl, "
        "%s AS rproacl, "
        "%s AS initproacl, "
        "%s AS initrproacl, "
        "p.pronamespace, "
        "(%s p.proowner) AS rolname "
        "FROM pg_proc p "
        "LEFT JOIN pg_init_privs pip ON "
        "(p.oid = pip.objoid "
        "AND pip.classoid = 'pg_proc'::regclass "
        "AND pip.objsubid = 0) "
        "WHERE %s"
        "\n  AND NOT EXISTS (SELECT 1 FROM pg_depend "
        "WHERE classid = 'pg_proc'::regclass AND "
        "objid = p.oid AND deptype = 'i')"
        "\n  AND ("
        "\n  pronamespace != "
        "(SELECT oid FROM pg_namespace "
        "WHERE nspname = 'pg_catalog')"
        "\n  OR EXISTS (SELECT 1 FROM pg_cast"
        "\n  WHERE pg_cast.oid > %u "
        "\n  AND p.oid = pg_cast.castfunc)"
        "\n  OR EXISTS (SELECT 1 FROM pg_transform"
        "\n  WHERE pg_transform.oid > %u AND "
        "\n  (p.oid = pg_transform.trffromsql"
        "\n  OR p.oid = pg_transform.trftosql))",
        VAR_26->data,
        VAR_27->data,
        VAR_28->data,
        VAR_29->data,
        VAR_4,
        VAR_30,
        VAR_3,
        VAR_3);
  if (VAR_7->binary_upgrade)
   FUNC_9(VAR_11,
         "\n  OR EXISTS(SELECT 1 FROM pg_depend WHERE "
         "classid = 'pg_proc'::regclass AND "
         "objid = p.oid AND "
         "refclassid = 'pg_extension'::regclass AND "
         "deptype = 'e')");
  FUNC_9(VAR_11,
        "\n  OR p.proacl IS DISTINCT FROM pip.initprivs");
  FUNC_8(VAR_11, ')');

  FUNC_14(VAR_26);
  FUNC_14(VAR_27);
  FUNC_14(VAR_28);
  FUNC_14(VAR_29);
 }
 else
 {
  FUNC_7(VAR_11,
        "SELECT tableoid, oid, proname, prolang, "
        "pronargs, proargtypes, prorettype, proacl, "
        "NULL as rproacl, "
        "NULL as initproacl, NULL AS initrproacl, "
        "pronamespace, "
        "(%s proowner) AS rolname "
        "FROM pg_proc p "
        "WHERE NOT proisagg",
        VAR_4);
  if (VAR_5->remoteVersion >= 90200)
   FUNC_9(VAR_11,
         "\n  AND NOT EXISTS (SELECT 1 FROM pg_depend "
         "WHERE classid = 'pg_proc'::regclass AND "
         "objid = p.oid AND deptype = 'i')");
  FUNC_7(VAR_11,
        "\n  AND ("
        "\n  pronamespace != "
        "(SELECT oid FROM pg_namespace "
        "WHERE nspname = 'pg_catalog')"
        "\n  OR EXISTS (SELECT 1 FROM pg_cast"
        "\n  WHERE pg_cast.oid > '%u'::oid"
        "\n  AND p.oid = pg_cast.castfunc)",
        VAR_3);

  if (VAR_5->remoteVersion >= 90500)
   FUNC_7(VAR_11,
         "\n  OR EXISTS (SELECT 1 FROM pg_transform"
         "\n  WHERE pg_transform.oid > '%u'::oid"
         "\n  AND (p.oid = pg_transform.trffromsql"
         "\n  OR p.oid = pg_transform.trftosql))",
         VAR_3);

  if (VAR_7->binary_upgrade && VAR_5->remoteVersion >= 90100)
   FUNC_9(VAR_11,
         "\n  OR EXISTS(SELECT 1 FROM pg_depend WHERE "
         "classid = 'pg_proc'::regclass AND "
         "objid = p.oid AND "
         "refclassid = 'pg_extension'::regclass AND "
         "deptype = 'e')");
  FUNC_8(VAR_11, ')');
 }

 VAR_8 = FUNC_1(VAR_5, VAR_11->data, VAR_2);

 VAR_9 = FUNC_6(VAR_8);

 *VAR_6 = VAR_9;

 VAR_12 = (FuncInfo *) FUNC_19(VAR_9 * sizeof(FuncInfo));

 VAR_13 = FUNC_3(VAR_8, "tableoid");
 VAR_14 = FUNC_3(VAR_8, "oid");
 VAR_15 = FUNC_3(VAR_8, "proname");
 VAR_16 = FUNC_3(VAR_8, "pronamespace");
 VAR_17 = FUNC_3(VAR_8, "rolname");
 VAR_18 = FUNC_3(VAR_8, "prolang");
 VAR_19 = FUNC_3(VAR_8, "pronargs");
 VAR_20 = FUNC_3(VAR_8, "proargtypes");
 VAR_21 = FUNC_3(VAR_8, "prorettype");
 VAR_22 = FUNC_3(VAR_8, "proacl");
 VAR_23 = FUNC_3(VAR_8, "rproacl");
 VAR_24 = FUNC_3(VAR_8, "initproacl");
 VAR_25 = FUNC_3(VAR_8, "initrproacl");

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  VAR_12[VAR_10].dobj.objType = VAR_0;
  VAR_12[VAR_10].dobj.catId.tableoid = FUNC_11(FUNC_5(VAR_8, VAR_10, VAR_13));
  VAR_12[VAR_10].dobj.catId.oid = FUNC_11(FUNC_5(VAR_8, VAR_10, VAR_14));
  FUNC_0(&VAR_12[VAR_10].dobj);
  VAR_12[VAR_10].dobj.name = FUNC_20(FUNC_5(VAR_8, VAR_10, VAR_15));
  VAR_12[VAR_10].dobj.namespace =
   FUNC_15(VAR_5,
        FUNC_11(FUNC_5(VAR_8, VAR_10, VAR_16)));
  VAR_12[VAR_10].rolname = FUNC_20(FUNC_5(VAR_8, VAR_10, VAR_17));
  VAR_12[VAR_10].lang = FUNC_11(FUNC_5(VAR_8, VAR_10, VAR_18));
  VAR_12[VAR_10].prorettype = FUNC_11(FUNC_5(VAR_8, VAR_10, VAR_21));
  VAR_12[VAR_10].proacl = FUNC_20(FUNC_5(VAR_8, VAR_10, VAR_22));
  VAR_12[VAR_10].rproacl = FUNC_20(FUNC_5(VAR_8, VAR_10, VAR_23));
  VAR_12[VAR_10].initproacl = FUNC_20(FUNC_5(VAR_8, VAR_10, VAR_24));
  VAR_12[VAR_10].initrproacl = FUNC_20(FUNC_5(VAR_8, VAR_10, VAR_25));
  VAR_12[VAR_10].nargs = FUNC_10(FUNC_5(VAR_8, VAR_10, VAR_19));
  if (VAR_12[VAR_10].nargs == 0)
   VAR_12[VAR_10].argtypes = ((void*)0);
  else
  {
   VAR_12[VAR_10].argtypes = (Oid *) FUNC_18(VAR_12[VAR_10].nargs * sizeof(Oid));
   FUNC_16(FUNC_5(VAR_8, VAR_10, VAR_20),
        VAR_12[VAR_10].argtypes, VAR_12[VAR_10].nargs);
  }


  FUNC_21(&(VAR_12[VAR_10].dobj), VAR_5);


  if (FUNC_4(VAR_8, VAR_10, VAR_22) && FUNC_4(VAR_8, VAR_10, VAR_23) &&
   FUNC_4(VAR_8, VAR_10, VAR_24) &&
   FUNC_4(VAR_8, VAR_10, VAR_25))
   VAR_12[VAR_10].dobj.dump &= ~VAR_1;

  if (FUNC_22(VAR_12[VAR_10].rolname) == 0)
   FUNC_17("owner of function \"%s\" appears to be invalid",
         VAR_12[VAR_10].dobj.name);
 }

 FUNC_2(VAR_8);

 FUNC_14(VAR_11);

 return VAR_12;
}
