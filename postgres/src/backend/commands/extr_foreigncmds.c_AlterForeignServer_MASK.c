
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int repl_val ;
typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_18__ {scalar_t__ options; scalar_t__ version; scalar_t__ has_version; int servername; } ;
struct TYPE_17__ {int fdwvalidator; } ;
struct TYPE_16__ {int srvfdw; int oid; } ;
struct TYPE_15__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_foreign_server ;
typedef TYPE_3__ ForeignDataWrapper ;
typedef int Datum ;
typedef TYPE_4__ AlterForeignServerStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_10 ;
 TYPE_1__* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,TYPE_1__*,int,int*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 TYPE_1__* FUNC_20 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_21 (int*,int,int) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int,scalar_t__,int ) ;

ObjectAddress
FUNC_26(AlterForeignServerStmt *VAR_11)
{
 Relation VAR_12;
 HeapTuple VAR_13;
 Datum VAR_14[VAR_8];
 bool VAR_15[VAR_8];
 bool VAR_16[VAR_8];
 Oid VAR_17;
 Form_pg_foreign_server VAR_18;
 ObjectAddress VAR_19;

 VAR_12 = FUNC_24(VAR_7, VAR_10);

 VAR_13 = FUNC_13(VAR_5,
        FUNC_0(VAR_11->servername));

 if (!FUNC_7(VAR_13))
  FUNC_16(VAR_4,
    (FUNC_17(VAR_3),
     FUNC_18("server \"%s\" does not exist", VAR_11->servername)));

 VAR_18 = (Form_pg_foreign_server) FUNC_4(VAR_13);
 VAR_17 = VAR_18->oid;




 if (!FUNC_22(VAR_17, FUNC_6()))
  FUNC_15(VAR_0, VAR_9,
        VAR_11->servername);

 FUNC_21(VAR_14, 0, sizeof(VAR_14));
 FUNC_21(VAR_15, 0, sizeof(VAR_15));
 FUNC_21(VAR_16, 0, sizeof(VAR_16));

 if (VAR_11->has_version)
 {



  if (VAR_11->version)
   VAR_14[VAR_2 - 1] =
    FUNC_1(VAR_11->version);
  else
   VAR_15[VAR_2 - 1] = 1;

  VAR_16[VAR_2 - 1] = 1;
 }

 if (VAR_11->options)
 {
  ForeignDataWrapper *VAR_20 = FUNC_5(VAR_18->srvfdw);
  Datum VAR_21;
  bool VAR_22;


  VAR_21 = FUNC_14(VAR_6,
        VAR_13,
        VAR_1,
        &VAR_22);
  if (VAR_22)
   VAR_21 = FUNC_10(((void*)0));


  VAR_21 = FUNC_25(VAR_7,
          VAR_21,
          VAR_11->options,
          VAR_20->fdwvalidator);

  if (FUNC_11(FUNC_3(VAR_21)))
   VAR_14[VAR_1 - 1] = VAR_21;
  else
   VAR_15[VAR_1 - 1] = 1;

  VAR_16[VAR_1 - 1] = 1;
 }


 VAR_13 = FUNC_20(VAR_13, FUNC_12(VAR_12),
         VAR_14, VAR_15, VAR_16);

 FUNC_2(VAR_12, &VAR_13->t_self, VAR_13);

 FUNC_8(VAR_7, VAR_17, 0);

 FUNC_9(VAR_19, VAR_7, VAR_17);

 FUNC_19(VAR_13);

 FUNC_23(VAR_12, VAR_10);

 return VAR_19;
}
