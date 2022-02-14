
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* ps_ExprContext; } ;
struct TYPE_18__ {TYPE_1__ ps; } ;
struct TYPE_22__ {int numtrans; scalar_t__ aggstrategy; int numaggs; int aggsplit; TYPE_4__* pertrans; TYPE_2__ ss; } ;
struct TYPE_21__ {int transno; } ;
struct TYPE_20__ {scalar_t__ numSortCols; int numInputs; } ;
struct TYPE_19__ {int* ecxt_aggnulls; int * ecxt_aggvalues; } ;
typedef TYPE_3__ ExprContext ;
typedef int Datum ;
typedef TYPE_4__* AggStatePerTrans ;
typedef int * AggStatePerGroup ;
typedef TYPE_5__* AggStatePerAgg ;
typedef TYPE_6__ AggState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*,int *,int *,int*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int *,int *,int*) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_6__*,TYPE_4__*,int *) ;

__attribute__((used)) static void
FUNC_6(AggState *VAR_2,
     AggStatePerAgg VAR_3,
     AggStatePerGroup VAR_4)
{
 ExprContext *VAR_5 = VAR_2->ss.ps.ps_ExprContext;
 Datum *VAR_6 = VAR_5->ecxt_aggvalues;
 bool *VAR_7 = VAR_5->ecxt_aggnulls;
 int VAR_8;
 int VAR_9;





 for (VAR_9 = 0; VAR_9 < VAR_2->numtrans; VAR_9++)
 {
  AggStatePerTrans VAR_10 = &VAR_2->pertrans[VAR_9];
  AggStatePerGroup VAR_11;

  VAR_11 = &VAR_4[VAR_9];

  if (VAR_10->numSortCols > 0)
  {
   FUNC_0(VAR_2->aggstrategy != VAR_0 &&
       VAR_2->aggstrategy != VAR_1);

   if (VAR_10->numInputs == 1)
    FUNC_5(VAR_2,
             VAR_10,
             VAR_11);
   else
    FUNC_4(VAR_2,
            VAR_10,
            VAR_11);
  }
 }




 for (VAR_8 = 0; VAR_8 < VAR_2->numaggs; VAR_8++)
 {
  AggStatePerAgg VAR_12 = &VAR_3[VAR_8];
  int VAR_13 = VAR_12->transno;
  AggStatePerGroup VAR_14;

  VAR_14 = &VAR_4[VAR_13];

  if (FUNC_1(VAR_2->aggsplit))
   FUNC_3(VAR_2, VAR_12, VAR_14,
           &VAR_6[VAR_8], &VAR_7[VAR_8]);
  else
   FUNC_2(VAR_2, VAR_12, VAR_14,
          &VAR_6[VAR_8], &VAR_7[VAR_8]);
 }
}
