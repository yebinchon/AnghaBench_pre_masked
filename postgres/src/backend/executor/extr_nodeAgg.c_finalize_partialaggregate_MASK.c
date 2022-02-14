
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_24__ {size_t transno; int resulttypeLen; int resulttypeByVal; } ;
struct TYPE_23__ {int transValueIsNull; scalar_t__ transValue; } ;
struct TYPE_19__ {scalar_t__ fn_strict; } ;
struct TYPE_22__ {int transtypeLen; TYPE_6__* serialfn_fcinfo; TYPE_4__ serialfn; int serialfn_oid; } ;
struct TYPE_21__ {int isnull; TYPE_5__* args; } ;
struct TYPE_20__ {int isnull; int value; } ;
struct TYPE_17__ {TYPE_1__* ps_ExprContext; } ;
struct TYPE_18__ {TYPE_2__ ps; } ;
struct TYPE_16__ {int ecxt_per_tuple_memory; } ;
struct TYPE_15__ {TYPE_3__ ss; TYPE_7__* pertrans; } ;
typedef int MemoryContext ;
typedef TYPE_6__* FunctionCallInfo ;
typedef scalar_t__ Datum ;
typedef TYPE_7__* AggStatePerTrans ;
typedef TYPE_8__* AggStatePerGroup ;
typedef TYPE_9__* AggStatePerAgg ;
typedef TYPE_10__ AggState ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_7(AggState *VAR_1,
        AggStatePerAgg VAR_2,
        AggStatePerGroup VAR_3,
        Datum *VAR_4, bool *VAR_5)
{
 AggStatePerTrans VAR_6 = &VAR_1->pertrans[VAR_2->transno];
 MemoryContext VAR_7;

 VAR_7 = FUNC_4(VAR_1->ss.ps.ps_ExprContext->ecxt_per_tuple_memory);





 if (FUNC_5(VAR_6->serialfn_oid))
 {

  if (VAR_6->serialfn.fn_strict && VAR_3->transValueIsNull)
  {
   *VAR_4 = (Datum) 0;
   *VAR_5 = 1;
  }
  else
  {
   FunctionCallInfo VAR_8 = VAR_6->serialfn_fcinfo;

   VAR_8->args[0].value =
    FUNC_2(VAR_3->transValue,
             VAR_3->transValueIsNull,
             VAR_6->transtypeLen);
   VAR_8->args[0].isnull = VAR_3->transValueIsNull;

   *VAR_4 = FUNC_1(VAR_8);
   *VAR_5 = VAR_8->isnull;
  }
 }
 else
 {

  *VAR_4 = VAR_3->transValue;
  *VAR_5 = VAR_3->transValueIsNull;
 }


 if (!VAR_2->resulttypeByVal && !*VAR_5 &&
  !FUNC_3(VAR_0,
          FUNC_0(*VAR_4)))
  *VAR_4 = FUNC_6(*VAR_4,
          VAR_2->resulttypeByVal,
          VAR_2->resulttypeLen);

 FUNC_4(VAR_7);
}
