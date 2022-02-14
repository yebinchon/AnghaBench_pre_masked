
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_30__ {int * tg_trigslot; TYPE_4__* tg_relation; int tg_trigger; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_33__ {int nkeys; int * pf_eq_oprs; int * fk_attnums; int * pk_attnums; int fk_relid; } ;
struct TYPE_32__ {TYPE_1__* rd_rel; } ;
struct TYPE_31__ {int data; } ;
struct TYPE_29__ {scalar_t__ relkind; } ;
typedef TYPE_3__ StringInfoData ;
typedef int * SPIPlanPtr ;
typedef TYPE_4__* Relation ;
typedef int RI_QueryKey ;
typedef TYPE_5__ RI_ConstraintInfo ;
typedef scalar_t__ Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,char*,char const*,char*) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,TYPE_4__*) ;
 int FUNC_13 (int *,TYPE_5__ const*,int ) ;
 scalar_t__ FUNC_14 (TYPE_4__*,TYPE_4__*,int *,TYPE_5__ const*) ;
 TYPE_5__* FUNC_15 (int ,TYPE_4__*,int) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*,char const*,char*,scalar_t__,int ,char*,scalar_t__) ;
 int FUNC_18 (TYPE_3__*,scalar_t__) ;
 int FUNC_19 (TYPE_5__ const*,int *,int *,TYPE_4__*,TYPE_4__*,int *,int *,int,int ) ;
 int * FUNC_20 (int ,int,scalar_t__*,int *,TYPE_4__*,TYPE_4__*) ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_23 (int ,int ) ;

__attribute__((used)) static Datum
FUNC_24(TriggerData *VAR_10, bool VAR_11)
{
 const RI_ConstraintInfo *VAR_12;
 Relation VAR_13;
 Relation VAR_14;
 TupleTableSlot *VAR_15;
 RI_QueryKey VAR_16;
 SPIPlanPtr VAR_17;

 VAR_12 = FUNC_15(VAR_10->tg_trigger,
         VAR_10->tg_relation, 1);







 VAR_13 = FUNC_23(VAR_12->fk_relid, VAR_6);
 VAR_14 = VAR_10->tg_relation;
 VAR_15 = VAR_10->tg_trigslot;







 if (VAR_11 &&
  FUNC_14(VAR_14, VAR_13, VAR_15, VAR_12))
 {
  FUNC_22(VAR_13, VAR_6);
  return FUNC_0(((void*)0));
 }

 if (FUNC_4() != VAR_7)
  FUNC_8(VAR_0, "SPI_connect failed");





 FUNC_13(&VAR_16, VAR_12, VAR_5);

 if ((VAR_17 = FUNC_16(&VAR_16)) == ((void*)0))
 {
  StringInfoData VAR_18;
  char VAR_19[VAR_2];
  char VAR_20[VAR_1];
  char VAR_21[16];
  const char *VAR_22;
  Oid VAR_23[VAR_4];
  const char *VAR_24;
  FUNC_10(&VAR_18);
  VAR_24 = VAR_13->rd_rel->relkind == VAR_3 ?
   "" : "ONLY ";
  FUNC_12(VAR_19, VAR_13);
  FUNC_6(&VAR_18, "SELECT 1 FROM %s%s x",
       VAR_24, VAR_19);
  VAR_22 = "WHERE";
  for (int VAR_25 = 0; VAR_25 < VAR_12->nkeys; VAR_25++)
  {
   Oid VAR_26 = FUNC_3(VAR_14, VAR_12->pk_attnums[VAR_25]);
   Oid VAR_27 = FUNC_3(VAR_13, VAR_12->fk_attnums[VAR_25]);
   Oid VAR_28 = FUNC_1(VAR_14, VAR_12->pk_attnums[VAR_25]);
   Oid VAR_29 = FUNC_1(VAR_13, VAR_12->fk_attnums[VAR_25]);

   FUNC_11(VAR_20,
       FUNC_2(VAR_13, VAR_12->fk_attnums[VAR_25]));
   FUNC_21(VAR_21, "$%d", VAR_25 + 1);
   FUNC_17(&VAR_18, VAR_22,
       VAR_21, VAR_26,
       VAR_12->pf_eq_oprs[VAR_25],
       VAR_20, VAR_27);
   if (VAR_28 != VAR_29 && !FUNC_9(VAR_28))
    FUNC_18(&VAR_18, VAR_28);
   VAR_22 = "AND";
   VAR_23[VAR_25] = VAR_26;
  }
  FUNC_7(&VAR_18, " FOR KEY SHARE OF x");


  VAR_17 = FUNC_20(VAR_18.data, VAR_12->nkeys, VAR_23,
        &VAR_16, VAR_13, VAR_14);
 }




 FUNC_19(VAR_12, &VAR_16, VAR_17,
     VAR_13, VAR_14,
     VAR_15, ((void*)0),
     1,
     VAR_9);

 if (FUNC_5() != VAR_8)
  FUNC_8(VAR_0, "SPI_finish failed");

 FUNC_22(VAR_13, VAR_6);

 return FUNC_0(((void*)0));
}
