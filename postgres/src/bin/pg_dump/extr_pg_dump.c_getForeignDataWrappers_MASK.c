
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {void* oid; void* tableoid; } ;
struct TYPE_24__ {int dump; int * namespace; void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_23__ {int remoteVersion; TYPE_4__* dopt; } ;
struct TYPE_22__ {int binary_upgrade; } ;
struct TYPE_21__ {TYPE_6__ dobj; void* initrfdwacl; void* initfdwacl; void* rfdwacl; void* fdwacl; void* fdwoptions; void* fdwvalidator; void* fdwhandler; void* rolname; } ;
struct TYPE_20__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ FdwInfo ;
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
 void* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,char*,char*,char*,int ) ;
 TYPE_2__* FUNC_10 () ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (TYPE_6__*,TYPE_5__*) ;
 int VAR_3 ;

FdwInfo *
FUNC_15(Archive *VAR_4, int *VAR_5)
{
 DumpOptions *VAR_6 = VAR_4->dopt;
 PGresult *VAR_7;
 int VAR_8;
 int VAR_9;
 PQExpBuffer VAR_10;
 FdwInfo *VAR_11;
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


 if (VAR_4->remoteVersion < 80400)
 {
  *VAR_5 = 0;
  return ((void*)0);
 }

 VAR_10 = FUNC_10();

 if (VAR_4->remoteVersion >= 90600)
 {
  PQExpBuffer VAR_23 = FUNC_10();
  PQExpBuffer VAR_24 = FUNC_10();
  PQExpBuffer VAR_25 = FUNC_10();
  PQExpBuffer VAR_26 = FUNC_10();

  FUNC_9(VAR_23, VAR_24, VAR_25,
      VAR_26, "f.fdwacl", "f.fdwowner", "'F'",
      VAR_6->binary_upgrade);

  FUNC_7(VAR_10, "SELECT f.tableoid, f.oid, f.fdwname, "
        "(%s f.fdwowner) AS rolname, "
        "f.fdwhandler::pg_catalog.regproc, "
        "f.fdwvalidator::pg_catalog.regproc, "
        "%s AS fdwacl, "
        "%s AS rfdwacl, "
        "%s AS initfdwacl, "
        "%s AS initrfdwacl, "
        "array_to_string(ARRAY("
        "SELECT quote_ident(option_name) || ' ' || "
        "quote_literal(option_value) "
        "FROM pg_options_to_table(f.fdwoptions) "
        "ORDER BY option_name"
        "), E',\n    ') AS fdwoptions "
        "FROM pg_foreign_data_wrapper f "
        "LEFT JOIN pg_init_privs pip ON "
        "(f.oid = pip.objoid "
        "AND pip.classoid = 'pg_foreign_data_wrapper'::regclass "
        "AND pip.objsubid = 0) ",
        VAR_3,
        VAR_23->data,
        VAR_24->data,
        VAR_25->data,
        VAR_26->data);

  FUNC_11(VAR_23);
  FUNC_11(VAR_24);
  FUNC_11(VAR_25);
  FUNC_11(VAR_26);
 }
 else if (VAR_4->remoteVersion >= 90100)
 {
  FUNC_7(VAR_10, "SELECT tableoid, oid, fdwname, "
        "(%s fdwowner) AS rolname, "
        "fdwhandler::pg_catalog.regproc, "
        "fdwvalidator::pg_catalog.regproc, fdwacl, "
        "NULL as rfdwacl, "
        "NULL as initfdwacl, NULL AS initrfdwacl, "
        "array_to_string(ARRAY("
        "SELECT quote_ident(option_name) || ' ' || "
        "quote_literal(option_value) "
        "FROM pg_options_to_table(fdwoptions) "
        "ORDER BY option_name"
        "), E',\n    ') AS fdwoptions "
        "FROM pg_foreign_data_wrapper",
        VAR_3);
 }
 else
 {
  FUNC_7(VAR_10, "SELECT tableoid, oid, fdwname, "
        "(%s fdwowner) AS rolname, "
        "'-' AS fdwhandler, "
        "fdwvalidator::pg_catalog.regproc, fdwacl, "
        "NULL as rfdwacl, "
        "NULL as initfdwacl, NULL AS initrfdwacl, "
        "array_to_string(ARRAY("
        "SELECT quote_ident(option_name) || ' ' || "
        "quote_literal(option_value) "
        "FROM pg_options_to_table(fdwoptions) "
        "ORDER BY option_name"
        "), E',\n    ') AS fdwoptions "
        "FROM pg_foreign_data_wrapper",
        VAR_3);
 }

 VAR_7 = FUNC_1(VAR_4, VAR_10->data, VAR_2);

 VAR_8 = FUNC_6(VAR_7);
 *VAR_5 = VAR_8;

 VAR_11 = (FdwInfo *) FUNC_12(VAR_8 * sizeof(FdwInfo));

 VAR_12 = FUNC_3(VAR_7, "tableoid");
 VAR_13 = FUNC_3(VAR_7, "oid");
 VAR_14 = FUNC_3(VAR_7, "fdwname");
 VAR_15 = FUNC_3(VAR_7, "rolname");
 VAR_16 = FUNC_3(VAR_7, "fdwhandler");
 VAR_17 = FUNC_3(VAR_7, "fdwvalidator");
 VAR_18 = FUNC_3(VAR_7, "fdwacl");
 VAR_19 = FUNC_3(VAR_7, "rfdwacl");
 VAR_20 = FUNC_3(VAR_7, "initfdwacl");
 VAR_21 = FUNC_3(VAR_7, "initrfdwacl");
 VAR_22 = FUNC_3(VAR_7, "fdwoptions");

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
  VAR_11[VAR_9].dobj.objType = VAR_0;
  VAR_11[VAR_9].dobj.catId.tableoid = FUNC_8(FUNC_5(VAR_7, VAR_9, VAR_12));
  VAR_11[VAR_9].dobj.catId.oid = FUNC_8(FUNC_5(VAR_7, VAR_9, VAR_13));
  FUNC_0(&VAR_11[VAR_9].dobj);
  VAR_11[VAR_9].dobj.name = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_14));
  VAR_11[VAR_9].dobj.namespace = ((void*)0);
  VAR_11[VAR_9].rolname = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_15));
  VAR_11[VAR_9].fdwhandler = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_16));
  VAR_11[VAR_9].fdwvalidator = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_17));
  VAR_11[VAR_9].fdwoptions = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_22));
  VAR_11[VAR_9].fdwacl = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_18));
  VAR_11[VAR_9].rfdwacl = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_19));
  VAR_11[VAR_9].initfdwacl = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_20));
  VAR_11[VAR_9].initrfdwacl = FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_21));


  FUNC_14(&(VAR_11[VAR_9].dobj), VAR_4);


  if (FUNC_4(VAR_7, VAR_9, VAR_18) && FUNC_4(VAR_7, VAR_9, VAR_19) &&
   FUNC_4(VAR_7, VAR_9, VAR_20) &&
   FUNC_4(VAR_7, VAR_9, VAR_21))
   VAR_11[VAR_9].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_7);

 FUNC_11(VAR_10);

 return VAR_11;
}
