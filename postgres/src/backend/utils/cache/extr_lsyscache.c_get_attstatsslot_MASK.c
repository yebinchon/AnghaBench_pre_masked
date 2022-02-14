
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int float4 ;
struct TYPE_8__ {scalar_t__ staop; scalar_t__ stacoll; int nnumbers; int * numbers_arr; int * numbers; int * values_arr; int nvalues; int values; scalar_t__ valuetype; } ;
struct TYPE_7__ {int stakind1; scalar_t__ staop1; scalar_t__ stacoll1; } ;
struct TYPE_6__ {int typbyval; int typalign; int typlen; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;
typedef TYPE_2__* Form_pg_statistic ;
typedef int Datum ;
typedef TYPE_3__ AttStatsSlot ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_5 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,scalar_t__,int*) ;
 int VAR_10 ;
 int FUNC_12 (int *,scalar_t__,int ,int ,int ,int *,int *,int *) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (TYPE_3__*,int ,int) ;
 int FUNC_15 (int *) ;

bool
FUNC_16(AttStatsSlot *VAR_11, HeapTuple VAR_12,
     int VAR_13, Oid VAR_14, int VAR_15)
{
 Form_pg_statistic VAR_16 = (Form_pg_statistic) FUNC_6(VAR_12);
 int VAR_17;
 Datum VAR_18;
 bool VAR_19;
 ArrayType *VAR_20;
 Oid VAR_21;
 int VAR_22;
 HeapTuple VAR_23;
 Form_pg_type VAR_24;


 FUNC_14(VAR_11, 0, sizeof(AttStatsSlot));

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
 {
  if ((&VAR_16->stakind1)[VAR_17] == VAR_13 &&
   (VAR_14 == VAR_7 || (&VAR_16->staop1)[VAR_17] == VAR_14))
   break;
 }
 if (VAR_17 >= VAR_8)
  return 0;

 VAR_11->staop = (&VAR_16->staop1)[VAR_17];
 VAR_11->stacoll = (&VAR_16->stacoll1)[VAR_17];
 if (VAR_11->stacoll == VAR_7)
  VAR_11->stacoll = VAR_4;

 if (VAR_15 & VAR_1)
 {
  VAR_18 = FUNC_11(VAR_9, VAR_12,
         VAR_3 + VAR_17,
         &VAR_19);
  if (VAR_19)
   FUNC_13(VAR_5, "stavalues is null");





  VAR_20 = FUNC_5(VAR_18);





  VAR_11->valuetype = VAR_21 = FUNC_2(VAR_20);


  VAR_23 = FUNC_10(VAR_10, FUNC_8(VAR_21));
  if (!FUNC_7(VAR_23))
   FUNC_13(VAR_5, "cache lookup failed for type %u", VAR_21);
  VAR_24 = (Form_pg_type) FUNC_6(VAR_23);


  FUNC_12(VAR_20,
        VAR_21,
        VAR_24->typlen,
        VAR_24->typbyval,
        VAR_24->typalign,
        &VAR_11->values, ((void*)0), &VAR_11->nvalues);







  if (!VAR_24->typbyval)
   VAR_11->values_arr = VAR_20;
  else
   FUNC_15(VAR_20);

  FUNC_9(VAR_23);
 }

 if (VAR_15 & VAR_0)
 {
  VAR_18 = FUNC_11(VAR_9, VAR_12,
         VAR_2 + VAR_17,
         &VAR_19);
  if (VAR_19)
   FUNC_13(VAR_5, "stanumbers is null");





  VAR_20 = FUNC_5(VAR_18);






  VAR_22 = FUNC_1(VAR_20)[0];
  if (FUNC_4(VAR_20) != 1 || VAR_22 <= 0 ||
   FUNC_3(VAR_20) ||
   FUNC_2(VAR_20) != VAR_6)
   FUNC_13(VAR_5, "stanumbers is not a 1-D float4 array");


  VAR_11->numbers = (float4 *) FUNC_0(VAR_20);
  VAR_11->nnumbers = VAR_22;


  VAR_11->numbers_arr = VAR_20;
 }

 return 1;
}
