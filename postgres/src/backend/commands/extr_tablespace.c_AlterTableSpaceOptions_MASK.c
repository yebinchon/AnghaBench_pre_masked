
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int repl_repl ;
typedef int repl_null ;
typedef int TableScanDesc ;
struct TYPE_15__ {int isReset; int options; int tablespacename; } ;
struct TYPE_14__ {int oid; } ;
struct TYPE_13__ {int t_self; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_tablespace ;
typedef scalar_t__ Datum ;
typedef TYPE_3__ AlterTableSpaceOptionsStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int,int ,int*) ;
 TYPE_1__* FUNC_14 (int ,int ) ;
 TYPE_1__* FUNC_15 (TYPE_1__*,int ,scalar_t__*,int*,int*) ;
 int FUNC_16 (int*,int,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int,int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (scalar_t__,int) ;
 scalar_t__ FUNC_23 (scalar_t__,int ,int *,int *,int,int ) ;

Oid
FUNC_24(AlterTableSpaceOptionsStmt *VAR_13)
{
 Relation VAR_14;
 ScanKeyData VAR_15[1];
 TableScanDesc VAR_16;
 HeapTuple VAR_17;
 Oid VAR_18;
 Datum VAR_19;
 Datum VAR_20;
 Datum VAR_21[VAR_8];
 bool VAR_22;
 bool VAR_23[VAR_8];
 bool VAR_24[VAR_8];
 HeapTuple VAR_25;


 VAR_14 = FUNC_21(VAR_12, VAR_11);

 FUNC_7(&VAR_15[0],
    VAR_1,
    VAR_3, VAR_6,
    FUNC_0(VAR_13->tablespacename));
 VAR_16 = FUNC_18(VAR_14, 1, VAR_15);
 VAR_17 = FUNC_14(VAR_16, VAR_7);
 if (!FUNC_4(VAR_17))
  FUNC_9(VAR_5,
    (FUNC_10(VAR_4),
     FUNC_11("tablespace \"%s\" does not exist",
      VAR_13->tablespacename)));

 VAR_18 = ((Form_pg_tablespace) FUNC_2(VAR_17))->oid;


 if (!FUNC_17(VAR_18, FUNC_3()))
  FUNC_8(VAR_0, VAR_10,
        VAR_13->tablespacename);


 VAR_19 = FUNC_13(VAR_17, VAR_2,
       FUNC_6(VAR_14), &VAR_22);
 VAR_20 = FUNC_23(VAR_22 ? (Datum) 0 : VAR_19,
          VAR_13->options, ((void*)0), ((void*)0), 0,
          VAR_13->isReset);
 (void) FUNC_22(VAR_20, 1);


 FUNC_16(VAR_23, 0, sizeof(VAR_23));
 FUNC_16(VAR_24, 0, sizeof(VAR_24));
 if (VAR_20 != (Datum) 0)
  VAR_21[VAR_2 - 1] = VAR_20;
 else
  VAR_23[VAR_2 - 1] = 1;
 VAR_24[VAR_2 - 1] = 1;
 VAR_25 = FUNC_15(VAR_17, FUNC_6(VAR_14), VAR_21,
         VAR_23, VAR_24);


 FUNC_1(VAR_14, &VAR_25->t_self, VAR_25);

 FUNC_5(VAR_12, VAR_18, 0);

 FUNC_12(VAR_25);


 FUNC_20(VAR_16);
 FUNC_19(VAR_14, VAR_9);

 return VAR_18;
}
