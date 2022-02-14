
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


struct TYPE_25__ {int remoteVersion; TYPE_3__* dopt; } ;
struct TYPE_21__ {void* oid; void* tableoid; } ;
struct TYPE_20__ {int * namespace; void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_24__ {void* initrdefaclacl; void* initdefaclacl; void* rdefaclacl; void* defaclacl; int defaclobjtype; void* defaclrole; TYPE_19__ dobj; } ;
struct TYPE_23__ {int binary_upgrade; } ;
struct TYPE_22__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ DumpOptions ;
typedef TYPE_4__ DefaultACLInfo ;
typedef TYPE_5__ Archive ;


 int FUNC_0 (TYPE_19__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_5__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*,int ,...) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,char*,char*,char*,int ) ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (TYPE_2__*) ;
 int * FUNC_11 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (int *) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*) ;
 int VAR_3 ;

DefaultACLInfo *
FUNC_15(Archive *VAR_4, int *VAR_5)
{
 DumpOptions *VAR_6 = VAR_4->dopt;
 DefaultACLInfo *VAR_7;
 PQExpBuffer VAR_8;
 PGresult *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19,
    VAR_20;

 if (VAR_4->remoteVersion < 90000)
 {
  *VAR_5 = 0;
  return ((void*)0);
 }

 VAR_8 = FUNC_9();

 if (VAR_4->remoteVersion >= 90600)
 {
  PQExpBuffer VAR_21 = FUNC_9();
  PQExpBuffer VAR_22 = FUNC_9();
  PQExpBuffer VAR_23 = FUNC_9();
  PQExpBuffer VAR_24 = FUNC_9();

  FUNC_8(VAR_21, VAR_22, VAR_23,
      VAR_24, "defaclacl", "defaclrole",
      "CASE WHEN defaclobjtype = 'S' THEN 's' ELSE defaclobjtype END::\"char\"",
      VAR_6->binary_upgrade);

  FUNC_6(VAR_8, "SELECT d.oid, d.tableoid, "
        "(%s d.defaclrole) AS defaclrole, "
        "d.defaclnamespace, "
        "d.defaclobjtype, "
        "%s AS defaclacl, "
        "%s AS rdefaclacl, "
        "%s AS initdefaclacl, "
        "%s AS initrdefaclacl "
        "FROM pg_default_acl d "
        "LEFT JOIN pg_init_privs pip ON "
        "(d.oid = pip.objoid "
        "AND pip.classoid = 'pg_default_acl'::regclass "
        "AND pip.objsubid = 0) ",
        VAR_3,
        VAR_21->data,
        VAR_22->data,
        VAR_23->data,
        VAR_24->data);
 }
 else
 {
  FUNC_6(VAR_8, "SELECT oid, tableoid, "
        "(%s defaclrole) AS defaclrole, "
        "defaclnamespace, "
        "defaclobjtype, "
        "defaclacl, "
        "NULL AS rdefaclacl, "
        "NULL AS initdefaclacl, "
        "NULL AS initrdefaclacl "
        "FROM pg_default_acl",
        VAR_3);
 }

 VAR_9 = FUNC_1(VAR_4, VAR_8->data, VAR_2);

 VAR_20 = FUNC_5(VAR_9);
 *VAR_5 = VAR_20;

 VAR_7 = (DefaultACLInfo *) FUNC_12(VAR_20 * sizeof(DefaultACLInfo));

 VAR_10 = FUNC_3(VAR_9, "oid");
 VAR_11 = FUNC_3(VAR_9, "tableoid");
 VAR_12 = FUNC_3(VAR_9, "defaclrole");
 VAR_13 = FUNC_3(VAR_9, "defaclnamespace");
 VAR_14 = FUNC_3(VAR_9, "defaclobjtype");
 VAR_15 = FUNC_3(VAR_9, "defaclacl");
 VAR_16 = FUNC_3(VAR_9, "rdefaclacl");
 VAR_17 = FUNC_3(VAR_9, "initdefaclacl");
 VAR_18 = FUNC_3(VAR_9, "initrdefaclacl");

 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
 {
  Oid VAR_25 = FUNC_7(FUNC_4(VAR_9, VAR_19, VAR_13));

  VAR_7[VAR_19].dobj.objType = VAR_0;
  VAR_7[VAR_19].dobj.catId.tableoid = FUNC_7(FUNC_4(VAR_9, VAR_19, VAR_11));
  VAR_7[VAR_19].dobj.catId.oid = FUNC_7(FUNC_4(VAR_9, VAR_19, VAR_10));
  FUNC_0(&VAR_7[VAR_19].dobj);

  VAR_7[VAR_19].dobj.name = FUNC_13(FUNC_4(VAR_9, VAR_19, VAR_14));

  if (VAR_25 != VAR_1)
   VAR_7[VAR_19].dobj.namespace = FUNC_11(VAR_4, VAR_25);
  else
   VAR_7[VAR_19].dobj.namespace = ((void*)0);

  VAR_7[VAR_19].defaclrole = FUNC_13(FUNC_4(VAR_9, VAR_19, VAR_12));
  VAR_7[VAR_19].defaclobjtype = *(FUNC_4(VAR_9, VAR_19, VAR_14));
  VAR_7[VAR_19].defaclacl = FUNC_13(FUNC_4(VAR_9, VAR_19, VAR_15));
  VAR_7[VAR_19].rdefaclacl = FUNC_13(FUNC_4(VAR_9, VAR_19, VAR_16));
  VAR_7[VAR_19].initdefaclacl = FUNC_13(FUNC_4(VAR_9, VAR_19, VAR_17));
  VAR_7[VAR_19].initrdefaclacl = FUNC_13(FUNC_4(VAR_9, VAR_19, VAR_18));


  FUNC_14(&(VAR_7[VAR_19]), VAR_6);
 }

 FUNC_2(VAR_9);

 FUNC_10(VAR_8);

 return VAR_7;
}
