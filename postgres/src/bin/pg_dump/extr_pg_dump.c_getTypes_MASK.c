
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_29__ {void* oid; void* tableoid; } ;
struct TYPE_24__ {void** name; int dump; int namespace; TYPE_8__ catId; int objType; } ;
struct TYPE_23__ {scalar_t__ typtype; int isDefined; int isArray; TYPE_22__ dobj; void* rolname; TYPE_2__* shellType; int * domChecks; scalar_t__ nDomChecks; void* typrelkind; void* typrelid; void* typelem; void* initrtypacl; void* inittypacl; void* rtypacl; void* typacl; } ;
typedef TYPE_1__ TypeInfo ;
struct TYPE_28__ {int remoteVersion; TYPE_4__* dopt; } ;
struct TYPE_27__ {int binary_upgrade; } ;
struct TYPE_26__ {int data; } ;
struct TYPE_25__ {TYPE_22__ dobj; TYPE_1__* baseType; } ;
typedef TYPE_2__ ShellTypeInfo ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_4__ DumpOptions ;
typedef TYPE_5__ Archive ;


 int FUNC_0 (TYPE_22__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_5__*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 void** FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (TYPE_3__*,char*,int ,...) ;
 void* FUNC_8 (void**) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,char*,char*,char*,int ) ;
 TYPE_3__* FUNC_10 () ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_5__*,void*) ;
 int FUNC_13 (TYPE_5__*,TYPE_1__*) ;
 TYPE_8__ VAR_9 ;
 int FUNC_14 (char*,void**) ;
 scalar_t__ FUNC_15 (int) ;
 void* FUNC_16 (void**) ;
 int FUNC_17 (TYPE_1__*,TYPE_5__*) ;
 scalar_t__ FUNC_18 (void**,char*) ;
 scalar_t__ FUNC_19 (void*) ;
 int VAR_10 ;

TypeInfo *
FUNC_20(Archive *VAR_11, int *VAR_12)
{
 DumpOptions *VAR_13 = VAR_11->dopt;
 PGresult *VAR_14;
 int VAR_15;
 int VAR_16;
 PQExpBuffer VAR_17 = FUNC_10();
 TypeInfo *VAR_18;
 ShellTypeInfo *VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 if (VAR_11->remoteVersion >= 90600)
 {
  PQExpBuffer VAR_35 = FUNC_10();
  PQExpBuffer VAR_36 = FUNC_10();
  PQExpBuffer VAR_37 = FUNC_10();
  PQExpBuffer VAR_38 = FUNC_10();

  FUNC_9(VAR_35, VAR_36, VAR_37,
      VAR_38, "t.typacl", "t.typowner", "'T'",
      VAR_13->binary_upgrade);

  FUNC_7(VAR_17, "SELECT t.tableoid, t.oid, t.typname, "
        "t.typnamespace, "
        "%s AS typacl, "
        "%s AS rtypacl, "
        "%s AS inittypacl, "
        "%s AS initrtypacl, "
        "(%s t.typowner) AS rolname, "
        "t.typelem, t.typrelid, "
        "CASE WHEN t.typrelid = 0 THEN ' '::\"char\" "
        "ELSE (SELECT relkind FROM pg_class WHERE oid = t.typrelid) END AS typrelkind, "
        "t.typtype, t.typisdefined, "
        "t.typname[0] = '_' AND t.typelem != 0 AND "
        "(SELECT typarray FROM pg_type te WHERE oid = t.typelem) = t.oid AS isarray "
        "FROM pg_type t "
        "LEFT JOIN pg_init_privs pip ON "
        "(t.oid = pip.objoid "
        "AND pip.classoid = 'pg_type'::regclass "
        "AND pip.objsubid = 0) ",
        VAR_35->data,
        VAR_36->data,
        VAR_37->data,
        VAR_38->data,
        VAR_10);

  FUNC_11(VAR_35);
  FUNC_11(VAR_36);
  FUNC_11(VAR_37);
  FUNC_11(VAR_38);
 }
 else if (VAR_11->remoteVersion >= 90200)
 {
  FUNC_7(VAR_17, "SELECT tableoid, oid, typname, "
        "typnamespace, typacl, NULL as rtypacl, "
        "NULL AS inittypacl, NULL AS initrtypacl, "
        "(%s typowner) AS rolname, "
        "typelem, typrelid, "
        "CASE WHEN typrelid = 0 THEN ' '::\"char\" "
        "ELSE (SELECT relkind FROM pg_class WHERE oid = typrelid) END AS typrelkind, "
        "typtype, typisdefined, "
        "typname[0] = '_' AND typelem != 0 AND "
        "(SELECT typarray FROM pg_type te WHERE oid = pg_type.typelem) = oid AS isarray "
        "FROM pg_type",
        VAR_10);
 }
 else if (VAR_11->remoteVersion >= 80300)
 {
  FUNC_7(VAR_17, "SELECT tableoid, oid, typname, "
        "typnamespace, NULL AS typacl, NULL as rtypacl, "
        "NULL AS inittypacl, NULL AS initrtypacl, "
        "(%s typowner) AS rolname, "
        "typelem, typrelid, "
        "CASE WHEN typrelid = 0 THEN ' '::\"char\" "
        "ELSE (SELECT relkind FROM pg_class WHERE oid = typrelid) END AS typrelkind, "
        "typtype, typisdefined, "
        "typname[0] = '_' AND typelem != 0 AND "
        "(SELECT typarray FROM pg_type te WHERE oid = pg_type.typelem) = oid AS isarray "
        "FROM pg_type",
        VAR_10);
 }
 else
 {
  FUNC_7(VAR_17, "SELECT tableoid, oid, typname, "
        "typnamespace, NULL AS typacl, NULL as rtypacl, "
        "NULL AS inittypacl, NULL AS initrtypacl, "
        "(%s typowner) AS rolname, "
        "typelem, typrelid, "
        "CASE WHEN typrelid = 0 THEN ' '::\"char\" "
        "ELSE (SELECT relkind FROM pg_class WHERE oid = typrelid) END AS typrelkind, "
        "typtype, typisdefined, "
        "typname[0] = '_' AND typelem != 0 AS isarray "
        "FROM pg_type",
        VAR_10);
 }

 VAR_14 = FUNC_1(VAR_11, VAR_17->data, VAR_5);

 VAR_15 = FUNC_6(VAR_14);

 VAR_18 = (TypeInfo *) FUNC_15(VAR_15 * sizeof(TypeInfo));

 VAR_20 = FUNC_3(VAR_14, "tableoid");
 VAR_21 = FUNC_3(VAR_14, "oid");
 VAR_22 = FUNC_3(VAR_14, "typname");
 VAR_23 = FUNC_3(VAR_14, "typnamespace");
 VAR_24 = FUNC_3(VAR_14, "typacl");
 VAR_25 = FUNC_3(VAR_14, "rtypacl");
 VAR_26 = FUNC_3(VAR_14, "inittypacl");
 VAR_27 = FUNC_3(VAR_14, "initrtypacl");
 VAR_28 = FUNC_3(VAR_14, "rolname");
 VAR_29 = FUNC_3(VAR_14, "typelem");
 VAR_30 = FUNC_3(VAR_14, "typrelid");
 VAR_31 = FUNC_3(VAR_14, "typrelkind");
 VAR_32 = FUNC_3(VAR_14, "typtype");
 VAR_33 = FUNC_3(VAR_14, "typisdefined");
 VAR_34 = FUNC_3(VAR_14, "isarray");

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
 {
  VAR_18[VAR_16].dobj.objType = VAR_1;
  VAR_18[VAR_16].dobj.catId.tableoid = FUNC_8(FUNC_5(VAR_14, VAR_16, VAR_20));
  VAR_18[VAR_16].dobj.catId.oid = FUNC_8(FUNC_5(VAR_14, VAR_16, VAR_21));
  FUNC_0(&VAR_18[VAR_16].dobj);
  VAR_18[VAR_16].dobj.name = FUNC_16(FUNC_5(VAR_14, VAR_16, VAR_22));
  VAR_18[VAR_16].dobj.namespace =
   FUNC_12(VAR_11,
        FUNC_8(FUNC_5(VAR_14, VAR_16, VAR_23)));
  VAR_18[VAR_16].rolname = FUNC_16(FUNC_5(VAR_14, VAR_16, VAR_28));
  VAR_18[VAR_16].typacl = FUNC_16(FUNC_5(VAR_14, VAR_16, VAR_24));
  VAR_18[VAR_16].rtypacl = FUNC_16(FUNC_5(VAR_14, VAR_16, VAR_25));
  VAR_18[VAR_16].inittypacl = FUNC_16(FUNC_5(VAR_14, VAR_16, VAR_26));
  VAR_18[VAR_16].initrtypacl = FUNC_16(FUNC_5(VAR_14, VAR_16, VAR_27));
  VAR_18[VAR_16].typelem = FUNC_8(FUNC_5(VAR_14, VAR_16, VAR_29));
  VAR_18[VAR_16].typrelid = FUNC_8(FUNC_5(VAR_14, VAR_16, VAR_30));
  VAR_18[VAR_16].typrelkind = *FUNC_5(VAR_14, VAR_16, VAR_31);
  VAR_18[VAR_16].typtype = *FUNC_5(VAR_14, VAR_16, VAR_32);
  VAR_18[VAR_16].shellType = ((void*)0);

  if (FUNC_18(FUNC_5(VAR_14, VAR_16, VAR_33), "t") == 0)
   VAR_18[VAR_16].isDefined = 1;
  else
   VAR_18[VAR_16].isDefined = 0;

  if (FUNC_18(FUNC_5(VAR_14, VAR_16, VAR_34), "t") == 0)
   VAR_18[VAR_16].isArray = 1;
  else
   VAR_18[VAR_16].isArray = 0;


  FUNC_17(&VAR_18[VAR_16], VAR_11);


  if (FUNC_4(VAR_14, VAR_16, VAR_24) && FUNC_4(VAR_14, VAR_16, VAR_25) &&
   FUNC_4(VAR_14, VAR_16, VAR_26) &&
   FUNC_4(VAR_14, VAR_16, VAR_27))
   VAR_18[VAR_16].dobj.dump &= ~VAR_2;




  VAR_18[VAR_16].nDomChecks = 0;
  VAR_18[VAR_16].domChecks = ((void*)0);
  if ((VAR_18[VAR_16].dobj.dump & VAR_3) &&
   VAR_18[VAR_16].typtype == VAR_7)
   FUNC_13(VAR_11, &(VAR_18[VAR_16]));
  if ((VAR_18[VAR_16].dobj.dump & VAR_3) &&
   (VAR_18[VAR_16].typtype == VAR_6 ||
    VAR_18[VAR_16].typtype == VAR_8))
  {
   VAR_19 = (ShellTypeInfo *) FUNC_15(sizeof(ShellTypeInfo));
   VAR_19->dobj.objType = VAR_0;
   VAR_19->dobj.catId = VAR_9;
   FUNC_0(&VAR_19->dobj);
   VAR_19->dobj.name = FUNC_16(VAR_18[VAR_16].dobj.name);
   VAR_19->dobj.namespace = VAR_18[VAR_16].dobj.namespace;
   VAR_19->baseType = &(VAR_18[VAR_16]);
   VAR_18[VAR_16].shellType = VAR_19;






   VAR_19->dobj.dump = VAR_4;
  }

  if (FUNC_19(VAR_18[VAR_16].rolname) == 0)
   FUNC_14("owner of data type \"%s\" appears to be invalid",
         VAR_18[VAR_16].dobj.name);
 }

 *VAR_12 = VAR_15;

 FUNC_2(VAR_14);

 FUNC_11(VAR_17);

 return VAR_18;
}
