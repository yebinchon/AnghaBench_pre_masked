
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


struct TYPE_24__ {int remoteVersion; TYPE_4__* dopt; } ;
struct TYPE_23__ {int binary_upgrade; } ;
struct TYPE_22__ {int data; } ;
struct TYPE_20__ {void* oid; void* tableoid; } ;
struct TYPE_19__ {int dump; void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_21__ {int lanpltrusted; TYPE_18__ dobj; void* lanowner; void* initrlanacl; void* initlanacl; void* rlanacl; void* lanacl; void* lanvalidator; void* laninline; void* lanplcallfoid; } ;
typedef TYPE_2__ ProcLangInfo ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_4__ DumpOptions ;
typedef TYPE_5__ Archive ;


 int FUNC_0 (TYPE_18__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_5__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 char* FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,char*,int ,...) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,char*,char*,char*,int ) ;
 TYPE_3__* FUNC_10 () ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (char*) ;
 int FUNC_14 (TYPE_2__*,TYPE_5__*) ;
 int VAR_3 ;

ProcLangInfo *
FUNC_15(Archive *VAR_4, int *VAR_5)
{
 DumpOptions *VAR_6 = VAR_4->dopt;
 PGresult *VAR_7;
 int VAR_8;
 int VAR_9;
 PQExpBuffer VAR_10 = FUNC_10();
 ProcLangInfo *VAR_11;
 int VAR_12;
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

 if (VAR_4->remoteVersion >= 90600)
 {
  PQExpBuffer VAR_24 = FUNC_10();
  PQExpBuffer VAR_25 = FUNC_10();
  PQExpBuffer VAR_26 = FUNC_10();
  PQExpBuffer VAR_27 = FUNC_10();

  FUNC_9(VAR_24, VAR_25, VAR_26,
      VAR_27, "l.lanacl", "l.lanowner", "'l'",
      VAR_6->binary_upgrade);


  FUNC_7(VAR_10, "SELECT l.tableoid, l.oid, "
        "l.lanname, l.lanpltrusted, l.lanplcallfoid, "
        "l.laninline, l.lanvalidator, "
        "%s AS lanacl, "
        "%s AS rlanacl, "
        "%s AS initlanacl, "
        "%s AS initrlanacl, "
        "(%s l.lanowner) AS lanowner "
        "FROM pg_language l "
        "LEFT JOIN pg_init_privs pip ON "
        "(l.oid = pip.objoid "
        "AND pip.classoid = 'pg_language'::regclass "
        "AND pip.objsubid = 0) "
        "WHERE l.lanispl "
        "ORDER BY l.oid",
        VAR_24->data,
        VAR_25->data,
        VAR_26->data,
        VAR_27->data,
        VAR_3);

  FUNC_11(VAR_24);
  FUNC_11(VAR_25);
  FUNC_11(VAR_26);
  FUNC_11(VAR_27);
 }
 else if (VAR_4->remoteVersion >= 90000)
 {

  FUNC_7(VAR_10, "SELECT tableoid, oid, "
        "lanname, lanpltrusted, lanplcallfoid, "
        "laninline, lanvalidator, lanacl, NULL AS rlanacl, "
        "NULL AS initlanacl, NULL AS initrlanacl, "
        "(%s lanowner) AS lanowner "
        "FROM pg_language "
        "WHERE lanispl "
        "ORDER BY oid",
        VAR_3);
 }
 else if (VAR_4->remoteVersion >= 80300)
 {

  FUNC_7(VAR_10, "SELECT tableoid, oid, "
        "lanname, lanpltrusted, lanplcallfoid, "
        "0 AS laninline, lanvalidator, lanacl, "
        "NULL AS rlanacl, "
        "NULL AS initlanacl, NULL AS initrlanacl, "
        "(%s lanowner) AS lanowner "
        "FROM pg_language "
        "WHERE lanispl "
        "ORDER BY oid",
        VAR_3);
 }
 else if (VAR_4->remoteVersion >= 80100)
 {

  FUNC_7(VAR_10, "SELECT tableoid, oid, "
        "lanname, lanpltrusted, lanplcallfoid, "
        "0 AS laninline, lanvalidator, lanacl, "
        "NULL AS rlanacl, "
        "NULL AS initlanacl, NULL AS initrlanacl, "
        "(%s '10') AS lanowner "
        "FROM pg_language "
        "WHERE lanispl "
        "ORDER BY oid",
        VAR_3);
 }
 else
 {

  FUNC_7(VAR_10, "SELECT tableoid, oid, "
        "lanname, lanpltrusted, lanplcallfoid, "
        "0 AS laninline, lanvalidator, lanacl, "
        "NULL AS rlanacl, "
        "NULL AS initlanacl, NULL AS initrlanacl, "
        "(%s '1') AS lanowner "
        "FROM pg_language "
        "WHERE lanispl "
        "ORDER BY oid",
        VAR_3);
 }

 VAR_7 = FUNC_1(VAR_4, VAR_10->data, VAR_2);

 VAR_8 = FUNC_6(VAR_7);

 *VAR_5 = VAR_8;

 VAR_11 = (ProcLangInfo *) FUNC_12(VAR_8 * sizeof(ProcLangInfo));

 VAR_12 = FUNC_3(VAR_7, "tableoid");
 VAR_13 = FUNC_3(VAR_7, "oid");
 VAR_14 = FUNC_3(VAR_7, "lanname");
 VAR_15 = FUNC_3(VAR_7, "lanpltrusted");
 VAR_16 = FUNC_3(VAR_7, "lanplcallfoid");
 VAR_17 = FUNC_3(VAR_7, "laninline");
 VAR_18 = FUNC_3(VAR_7, "lanvalidator");
 VAR_19 = FUNC_3(VAR_7, "lanacl");
 VAR_20 = FUNC_3(VAR_7, "rlanacl");
 VAR_21 = FUNC_3(VAR_7, "initlanacl");
 VAR_22 = FUNC_3(VAR_7, "initrlanacl");
 VAR_23 = FUNC_3(VAR_7, "lanowner");

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
  VAR_11[VAR_9].dobj.objType = VAR_0;
  VAR_11[VAR_9].dobj.catId.tableoid = FUNC_8(FUNC_5(VAR_7, VAR_9, VAR_12));
  VAR_11[VAR_9].dobj.catId.oid = FUNC_8(FUNC_5(VAR_7, VAR_9, VAR_13));
  FUNC_0(&VAR_11[VAR_9].dobj);

  VAR_11[VAR_9].dobj.name = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_14));
  VAR_11[VAR_9].lanpltrusted = *(FUNC_5(VAR_7, VAR_9, VAR_15)) == 't';
  VAR_11[VAR_9].lanplcallfoid = FUNC_8(FUNC_5(VAR_7, VAR_9, VAR_16));
  VAR_11[VAR_9].laninline = FUNC_8(FUNC_5(VAR_7, VAR_9, VAR_17));
  VAR_11[VAR_9].lanvalidator = FUNC_8(FUNC_5(VAR_7, VAR_9, VAR_18));
  VAR_11[VAR_9].lanacl = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_19));
  VAR_11[VAR_9].rlanacl = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_20));
  VAR_11[VAR_9].initlanacl = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_21));
  VAR_11[VAR_9].initrlanacl = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_22));
  VAR_11[VAR_9].lanowner = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_23));


  FUNC_14(&(VAR_11[VAR_9]), VAR_4);


  if (FUNC_4(VAR_7, VAR_9, VAR_19) && FUNC_4(VAR_7, VAR_9, VAR_20) &&
   FUNC_4(VAR_7, VAR_9, VAR_21) &&
   FUNC_4(VAR_7, VAR_9, VAR_22))
   VAR_11[VAR_9].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_7);

 FUNC_11(VAR_10);

 return VAR_11;
}
