
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_23__ {int oid; int tableoid; } ;
struct TYPE_22__ {int remoteVersion; TYPE_3__* dopt; } ;
struct TYPE_19__ {void* name; TYPE_6__ catId; int objType; int dump; } ;
struct TYPE_21__ {TYPE_2__ dobj; void* initrblobacl; void* initblobacl; void* rblobacl; void* blobacl; void* rolname; } ;
struct TYPE_20__ {scalar_t__ binary_upgrade; } ;
struct TYPE_18__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_2__ DumpableObject ;
typedef TYPE_3__ DumpOptions ;
typedef TYPE_4__ BlobInfo ;
typedef TYPE_5__ Archive ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_5__*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 char* FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,char*,int ,...) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,char*,char*,char*,scalar_t__) ;
 TYPE_1__* FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_6__ VAR_6 ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int) ;
 void* FUNC_15 (char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_16(Archive *VAR_8)
{
 DumpOptions *VAR_9 = VAR_8->dopt;
 PQExpBuffer VAR_10 = FUNC_11();
 BlobInfo *VAR_11;
 DumpableObject *VAR_12;
 PGresult *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 FUNC_13("reading large objects");


 if (VAR_8->remoteVersion >= 90600)
 {
  PQExpBuffer VAR_22 = FUNC_11();
  PQExpBuffer VAR_23 = FUNC_11();
  PQExpBuffer VAR_24 = FUNC_11();
  PQExpBuffer VAR_25 = FUNC_11();

  FUNC_10(VAR_22, VAR_23, VAR_24,
      VAR_25, "l.lomacl", "l.lomowner", "'L'",
      VAR_9->binary_upgrade);

  FUNC_7(VAR_10,
        "SELECT l.oid, (%s l.lomowner) AS rolname, "
        "%s AS lomacl, "
        "%s AS rlomacl, "
        "%s AS initlomacl, "
        "%s AS initrlomacl "
        "FROM pg_largeobject_metadata l "
        "LEFT JOIN pg_init_privs pip ON "
        "(l.oid = pip.objoid "
        "AND pip.classoid = 'pg_largeobject'::regclass "
        "AND pip.objsubid = 0) ",
        VAR_7,
        VAR_22->data,
        VAR_23->data,
        VAR_24->data,
        VAR_25->data);

  FUNC_12(VAR_22);
  FUNC_12(VAR_23);
  FUNC_12(VAR_24);
  FUNC_12(VAR_25);
 }
 else if (VAR_8->remoteVersion >= 90000)
  FUNC_7(VAR_10,
        "SELECT oid, (%s lomowner) AS rolname, lomacl, "
        "NULL AS rlomacl, NULL AS initlomacl, "
        "NULL AS initrlomacl "
        " FROM pg_largeobject_metadata",
        VAR_7);
 else
  FUNC_8(VAR_10,
        "SELECT DISTINCT loid AS oid, "
        "NULL::name AS rolname, NULL::oid AS lomacl, "
        "NULL::oid AS rlomacl, NULL::oid AS initlomacl, "
        "NULL::oid AS initrlomacl "
        " FROM pg_largeobject");

 VAR_13 = FUNC_1(VAR_8, VAR_10->data, VAR_5);

 VAR_16 = FUNC_3(VAR_13, "oid");
 VAR_17 = FUNC_3(VAR_13, "rolname");
 VAR_18 = FUNC_3(VAR_13, "lomacl");
 VAR_19 = FUNC_3(VAR_13, "rlomacl");
 VAR_20 = FUNC_3(VAR_13, "initlomacl");
 VAR_21 = FUNC_3(VAR_13, "initrlomacl");

 VAR_14 = FUNC_6(VAR_13);




 VAR_11 = (BlobInfo *) FUNC_14(VAR_14 * sizeof(BlobInfo));

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
  VAR_11[VAR_15].dobj.objType = VAR_0;
  VAR_11[VAR_15].dobj.catId.tableoid = VAR_4;
  VAR_11[VAR_15].dobj.catId.oid = FUNC_9(FUNC_5(VAR_13, VAR_15, VAR_16));
  FUNC_0(&VAR_11[VAR_15].dobj);

  VAR_11[VAR_15].dobj.name = FUNC_15(FUNC_5(VAR_13, VAR_15, VAR_16));
  VAR_11[VAR_15].rolname = FUNC_15(FUNC_5(VAR_13, VAR_15, VAR_17));
  VAR_11[VAR_15].blobacl = FUNC_15(FUNC_5(VAR_13, VAR_15, VAR_18));
  VAR_11[VAR_15].rblobacl = FUNC_15(FUNC_5(VAR_13, VAR_15, VAR_19));
  VAR_11[VAR_15].initblobacl = FUNC_15(FUNC_5(VAR_13, VAR_15, VAR_20));
  VAR_11[VAR_15].initrblobacl = FUNC_15(FUNC_5(VAR_13, VAR_15, VAR_21));

  if (FUNC_4(VAR_13, VAR_15, VAR_18) &&
   FUNC_4(VAR_13, VAR_15, VAR_19) &&
   FUNC_4(VAR_13, VAR_15, VAR_20) &&
   FUNC_4(VAR_13, VAR_15, VAR_21))
   VAR_11[VAR_15].dobj.dump &= ~VAR_2;
  if (VAR_9->binary_upgrade)
   VAR_11[VAR_15].dobj.dump &= ~VAR_3;
 }





 if (VAR_14 > 0)
 {
  VAR_12 = (DumpableObject *) FUNC_14(sizeof(DumpableObject));
  VAR_12->objType = VAR_1;
  VAR_12->catId = VAR_6;
  FUNC_0(VAR_12);
  VAR_12->name = FUNC_15("BLOBS");
 }

 FUNC_2(VAR_13);
 FUNC_12(VAR_10);
}
