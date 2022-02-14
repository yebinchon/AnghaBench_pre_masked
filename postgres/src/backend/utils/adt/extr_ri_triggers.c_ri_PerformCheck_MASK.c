
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_10__ {int relowner; } ;
struct TYPE_9__ {int nkeys; int conname; } ;
struct TYPE_8__ {scalar_t__ constr_queryno; } ;
typedef int Snapshot ;
typedef int SPIPlanPtr ;
typedef int Relation ;
typedef TYPE_1__ RI_QueryKey ;
typedef TYPE_2__ RI_ConstraintInfo ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_7__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int *,char*,int ,int ,int,int,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ,int ,int ) ;
 int FUNC_16 (int ,int *,TYPE_2__ const*,int,int *,char*) ;
 int FUNC_17 (TYPE_2__ const*,int ,int ,int *,int *,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_18(const RI_ConstraintInfo *VAR_11,
    RI_QueryKey *VAR_12, SPIPlanPtr VAR_13,
    Relation VAR_14, Relation VAR_15,
    TupleTableSlot *VAR_16, TupleTableSlot *VAR_17,
    bool VAR_18, int VAR_19)
{
 Relation VAR_20,
    VAR_21;
 bool VAR_22;
 Snapshot VAR_23;
 Snapshot VAR_24;
 int VAR_25;
 int VAR_26;
 Oid VAR_27;
 int VAR_28;
 Datum VAR_29[VAR_3 * 2];
 char VAR_30[VAR_3 * 2];





 if (VAR_12->constr_queryno <= VAR_6)
  VAR_20 = VAR_15;
 else
  VAR_20 = VAR_14;
 if (VAR_12->constr_queryno == VAR_4)
 {
  VAR_21 = VAR_14;
  VAR_22 = 0;
 }
 else
 {
  VAR_21 = VAR_15;
  VAR_22 = 1;
 }


 if (VAR_17)
 {
  FUNC_16(VAR_21, VAR_17, VAR_11, VAR_22,
       VAR_29, VAR_30);
  if (VAR_16)
   FUNC_16(VAR_21, VAR_16, VAR_11, VAR_22,
        VAR_29 + VAR_11->nkeys, VAR_30 + VAR_11->nkeys);
 }
 else
 {
  FUNC_16(VAR_21, VAR_16, VAR_11, VAR_22,
       VAR_29, VAR_30);
 }
 if (FUNC_4() && VAR_18)
 {
  FUNC_0();
  VAR_23 = FUNC_1();
  VAR_24 = FUNC_2();
 }
 else
 {

  VAR_23 = VAR_2;
  VAR_24 = VAR_2;
 }







 VAR_25 = (VAR_19 == VAR_9) ? 1 : 0;


 FUNC_3(&VAR_27, &VAR_28);
 FUNC_10(FUNC_6(VAR_20)->relowner,
         VAR_28 | VAR_7 |
         VAR_8);


 VAR_26 = FUNC_8(VAR_13,
           VAR_29, VAR_30,
           VAR_23, VAR_24,
           0, 0, VAR_25);


 FUNC_10(VAR_27, VAR_28);


 if (VAR_26 < 0)
  FUNC_11(VAR_1, "SPI_execute_snapshot returned %s", FUNC_9(VAR_26));

 if (VAR_19 >= 0 && VAR_26 != VAR_19)
  FUNC_12(VAR_1,
    (FUNC_13(VAR_0),
     FUNC_15("referential integrity query on \"%s\" from constraint \"%s\" on \"%s\" gave unexpected result",
      FUNC_7(VAR_15),
      FUNC_5(VAR_11->conname),
      FUNC_7(VAR_14)),
     FUNC_14("This is most likely due to a rule having rewritten the query.")));


 if (VAR_12->constr_queryno != VAR_5 &&
  VAR_19 == VAR_9 &&
  (VAR_10 == 0) == (VAR_12->constr_queryno == VAR_4))
  FUNC_17(VAR_11,
         VAR_15, VAR_14,
         VAR_17 ? VAR_17 : VAR_16,
         ((void*)0),
         VAR_12->constr_queryno, 0);

 return VAR_10 != 0;
}
