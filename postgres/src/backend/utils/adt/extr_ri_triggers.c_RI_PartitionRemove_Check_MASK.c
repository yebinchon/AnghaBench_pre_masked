
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_21__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int workmembuf ;
struct TYPE_32__ {int tts_isnull; int tts_values; } ;
typedef TYPE_2__ TupleTableSlot ;
typedef int TupleDesc ;
typedef int Trigger ;
struct TYPE_35__ {int nkeys; int* fk_attnums; int* pk_attnums; int confmatchtype; int * pf_eq_oprs; } ;
struct TYPE_34__ {TYPE_1__* rd_rel; } ;
struct TYPE_33__ {int data; } ;
struct TYPE_31__ {int tupdesc; int * vals; } ;
struct TYPE_30__ {scalar_t__ relkind; } ;
typedef TYPE_3__ StringInfoData ;
typedef int * SPIPlanPtr ;
typedef TYPE_4__* Relation ;
typedef TYPE_5__ RI_ConstraintInfo ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;


 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *,int *,int *,int ,int ,int,int,int) ;
 scalar_t__ FUNC_11 () ;
 int * FUNC_12 (int ,int ,int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (int) ;
 TYPE_21__* VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (TYPE_3__*,char*,...) ;
 int FUNC_15 (TYPE_3__*,char) ;
 int FUNC_16 (TYPE_3__*,char*) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (TYPE_3__*) ;
 int VAR_15 ;
 int FUNC_20 (TYPE_5__*,TYPE_5__ const*,int) ;
 char* FUNC_21 (int ,char*) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (char*,TYPE_4__*) ;
 TYPE_5__* FUNC_24 (int *,TYPE_4__*,int) ;
 int FUNC_25 (TYPE_3__*,char const*,char*,scalar_t__,int ,char*,scalar_t__) ;
 int FUNC_26 (TYPE_3__*,scalar_t__) ;
 int FUNC_27 (TYPE_5__*,TYPE_4__*,TYPE_4__*,TYPE_2__*,int ,int ,int) ;
 int FUNC_28 (char*,char*,int ,int ,int ,int,int ,int) ;
 int FUNC_29 (char*,int,char*,int) ;
 int FUNC_30 (char*,char*) ;

void
FUNC_31(Trigger *VAR_16, Relation VAR_17, Relation VAR_18)
{
 const RI_ConstraintInfo *VAR_19;
 StringInfoData VAR_20;
 char *VAR_21;
 char VAR_22[VAR_4];
 char VAR_23[VAR_4];
 char VAR_24[VAR_3 + 3];
 char VAR_25[VAR_3 + 3];
 const char *VAR_26;
 const char *VAR_27;
 int VAR_28;
 char VAR_29[32];
 int VAR_30;
 SPIPlanPtr VAR_31;
 int VAR_32;

 VAR_19 = FUNC_24(VAR_16, VAR_17, 0);
 FUNC_19(&VAR_20);
 FUNC_16(&VAR_20, "SELECT ");
 VAR_26 = "";
 for (VAR_32 = 0; VAR_32 < VAR_19->nkeys; VAR_32++)
 {
  FUNC_22(VAR_25,
      FUNC_6(VAR_17, VAR_19->fk_attnums[VAR_32]));
  FUNC_14(&VAR_20, "%sfk.%s", VAR_26, VAR_25);
  VAR_26 = ", ";
 }

 FUNC_23(VAR_22, VAR_18);
 FUNC_23(VAR_23, VAR_17);
 VAR_27 = VAR_17->rd_rel->relkind == VAR_7 ?
  "" : "ONLY ";
 FUNC_14(&VAR_20,
      " FROM %s%s fk JOIN %s pk ON",
      VAR_27, VAR_23, VAR_22);
 FUNC_30(VAR_24, "pk.");
 FUNC_30(VAR_25, "fk.");
 VAR_26 = "(";
 for (VAR_32 = 0; VAR_32 < VAR_19->nkeys; VAR_32++)
 {
  Oid VAR_33 = FUNC_7(VAR_18, VAR_19->pk_attnums[VAR_32]);
  Oid VAR_34 = FUNC_7(VAR_17, VAR_19->fk_attnums[VAR_32]);
  Oid VAR_35 = FUNC_5(VAR_18, VAR_19->pk_attnums[VAR_32]);
  Oid VAR_36 = FUNC_5(VAR_17, VAR_19->fk_attnums[VAR_32]);

  FUNC_22(VAR_24 + 3,
      FUNC_6(VAR_18, VAR_19->pk_attnums[VAR_32]));
  FUNC_22(VAR_25 + 3,
      FUNC_6(VAR_17, VAR_19->fk_attnums[VAR_32]));
  FUNC_25(&VAR_20, VAR_26,
      VAR_24, VAR_33,
      VAR_19->pf_eq_oprs[VAR_32],
      VAR_25, VAR_34);
  if (VAR_35 != VAR_36)
   FUNC_26(&VAR_20, VAR_35);
  VAR_26 = "AND";
 }






 VAR_21 = FUNC_21(FUNC_8(VAR_18), "pk");
 if (VAR_21 && VAR_21[0] != '\0')
  FUNC_14(&VAR_20, ") WHERE %s AND (",
       VAR_21);
 else
  FUNC_14(&VAR_20, ") WHERE (");

 VAR_26 = "";
 for (VAR_32 = 0; VAR_32 < VAR_19->nkeys; VAR_32++)
 {
  FUNC_22(VAR_25, FUNC_6(VAR_17, VAR_19->fk_attnums[VAR_32]));
  FUNC_14(&VAR_20,
       "%sfk.%s IS NOT NULL",
       VAR_26, VAR_25);
  switch (VAR_19->confmatchtype)
  {
   case 128:
    VAR_26 = " AND ";
    break;
   case 129:
    VAR_26 = " OR ";
    break;
  }
 }
 FUNC_15(&VAR_20, ')');
 VAR_28 = FUNC_4();

 FUNC_29(VAR_29, sizeof(VAR_29), "%d", VAR_15);
 (void) FUNC_28("work_mem", VAR_29,
        VAR_6, VAR_5,
        VAR_1, 1, 0, 0);

 if (FUNC_9() != VAR_8)
  FUNC_17(VAR_0, "SPI_connect failed");





 VAR_31 = FUNC_12(VAR_20.data, 0, ((void*)0));

 if (VAR_31 == ((void*)0))
  FUNC_17(VAR_0, "SPI_prepare returned %s for %s",
    FUNC_13(VAR_12), VAR_20.data);
 VAR_30 = FUNC_10(VAR_31,
           ((void*)0), ((void*)0),
           FUNC_2(),
           VAR_2,
           1, 0, 1);


 if (VAR_30 != VAR_10)
  FUNC_17(VAR_0, "SPI_execute_snapshot returned %s", FUNC_13(VAR_30));


 if (VAR_11 > 0)
 {
  TupleTableSlot *VAR_37;
  HeapTuple VAR_38 = VAR_13->vals[0];
  TupleDesc VAR_39 = VAR_13->tupdesc;
  RI_ConstraintInfo VAR_40;

  VAR_37 = FUNC_3(VAR_39, &VAR_14);

  FUNC_18(VAR_38, VAR_39,
        VAR_37->tts_values, VAR_37->tts_isnull);
  FUNC_1(VAR_37);
  FUNC_20(&VAR_40, VAR_19, sizeof(RI_ConstraintInfo));
  for (VAR_32 = 0; VAR_32 < VAR_40.nkeys; VAR_32++)
   VAR_40.pk_attnums[VAR_32] = VAR_32 + 1;

  FUNC_27(&VAR_40, VAR_18, VAR_17,
         VAR_37, VAR_39, 0, 1);
 }

 if (FUNC_11() != VAR_9)
  FUNC_17(VAR_0, "SPI_finish failed");




 FUNC_0(1, VAR_28);
}
