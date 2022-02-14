
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


struct TYPE_25__ {int remoteVersion; TYPE_4__* dopt; } ;
struct TYPE_24__ {int binary_upgrade; } ;
struct TYPE_21__ {void* oid; void* tableoid; } ;
struct TYPE_20__ {void* name; int dump; TYPE_1__ catId; int objType; } ;
struct TYPE_23__ {TYPE_19__ dobj; void* rolname; void* initrnspacl; void* initnspacl; void* rnspacl; void* nspacl; } ;
struct TYPE_22__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ NamespaceInfo ;
typedef TYPE_4__ DumpOptions ;
typedef TYPE_5__ Archive ;


 int FUNC_0 (TYPE_19__*) ;
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
 int FUNC_8 (TYPE_2__*,char*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,char*,char*,char*,int ) ;
 TYPE_2__* FUNC_11 () ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (char*,void*) ;
 scalar_t__ FUNC_14 (int) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_17 (void*) ;
 int VAR_3 ;

NamespaceInfo *
FUNC_18(Archive *VAR_4, int *VAR_5)
{
 DumpOptions *VAR_6 = VAR_4->dopt;
 PGresult *VAR_7;
 int VAR_8;
 int VAR_9;
 PQExpBuffer VAR_10;
 NamespaceInfo *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_10 = FUNC_11();





 if (VAR_4->remoteVersion >= 90600)
 {
  PQExpBuffer VAR_20 = FUNC_11();
  PQExpBuffer VAR_21 = FUNC_11();
  PQExpBuffer VAR_22 = FUNC_11();
  PQExpBuffer VAR_23 = FUNC_11();

  FUNC_10(VAR_20, VAR_21, VAR_22,
      VAR_23, "n.nspacl", "n.nspowner", "'n'",
      VAR_6->binary_upgrade);

  FUNC_7(VAR_10, "SELECT n.tableoid, n.oid, n.nspname, "
        "(%s nspowner) AS rolname, "
        "%s as nspacl, "
        "%s as rnspacl, "
        "%s as initnspacl, "
        "%s as initrnspacl "
        "FROM pg_namespace n "
        "LEFT JOIN pg_init_privs pip "
        "ON (n.oid = pip.objoid "
        "AND pip.classoid = 'pg_namespace'::regclass "
        "AND pip.objsubid = 0",
        VAR_3,
        VAR_20->data,
        VAR_21->data,
        VAR_22->data,
        VAR_23->data);

  FUNC_8(VAR_10, ") ");

  FUNC_12(VAR_20);
  FUNC_12(VAR_21);
  FUNC_12(VAR_22);
  FUNC_12(VAR_23);
 }
 else
  FUNC_7(VAR_10, "SELECT tableoid, oid, nspname, "
        "(%s nspowner) AS rolname, "
        "nspacl, NULL as rnspacl, "
        "NULL AS initnspacl, NULL as initrnspacl "
        "FROM pg_namespace",
        VAR_3);

 VAR_7 = FUNC_1(VAR_4, VAR_10->data, VAR_2);

 VAR_8 = FUNC_6(VAR_7);

 VAR_11 = (NamespaceInfo *) FUNC_14(VAR_8 * sizeof(NamespaceInfo));

 VAR_12 = FUNC_3(VAR_7, "tableoid");
 VAR_13 = FUNC_3(VAR_7, "oid");
 VAR_14 = FUNC_3(VAR_7, "nspname");
 VAR_15 = FUNC_3(VAR_7, "rolname");
 VAR_16 = FUNC_3(VAR_7, "nspacl");
 VAR_17 = FUNC_3(VAR_7, "rnspacl");
 VAR_18 = FUNC_3(VAR_7, "initnspacl");
 VAR_19 = FUNC_3(VAR_7, "initrnspacl");

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
  VAR_11[VAR_9].dobj.objType = VAR_0;
  VAR_11[VAR_9].dobj.catId.tableoid = FUNC_9(FUNC_5(VAR_7, VAR_9, VAR_12));
  VAR_11[VAR_9].dobj.catId.oid = FUNC_9(FUNC_5(VAR_7, VAR_9, VAR_13));
  FUNC_0(&VAR_11[VAR_9].dobj);
  VAR_11[VAR_9].dobj.name = FUNC_15(FUNC_5(VAR_7, VAR_9, VAR_14));
  VAR_11[VAR_9].rolname = FUNC_15(FUNC_5(VAR_7, VAR_9, VAR_15));
  VAR_11[VAR_9].nspacl = FUNC_15(FUNC_5(VAR_7, VAR_9, VAR_16));
  VAR_11[VAR_9].rnspacl = FUNC_15(FUNC_5(VAR_7, VAR_9, VAR_17));
  VAR_11[VAR_9].initnspacl = FUNC_15(FUNC_5(VAR_7, VAR_9, VAR_18));
  VAR_11[VAR_9].initrnspacl = FUNC_15(FUNC_5(VAR_7, VAR_9, VAR_19));


  FUNC_16(&VAR_11[VAR_9], VAR_4);
  if (FUNC_4(VAR_7, VAR_9, VAR_16) && FUNC_4(VAR_7, VAR_9, VAR_17) &&
   FUNC_4(VAR_7, VAR_9, VAR_18) &&
   FUNC_4(VAR_7, VAR_9, VAR_19))
   VAR_11[VAR_9].dobj.dump &= ~VAR_1;

  if (FUNC_17(VAR_11[VAR_9].rolname) == 0)
   FUNC_13("owner of schema \"%s\" appears to be invalid",
         VAR_11[VAR_9].dobj.name);
 }

 FUNC_2(VAR_7);
 FUNC_12(VAR_10);

 *VAR_5 = VAR_8;

 return VAR_11;
}
