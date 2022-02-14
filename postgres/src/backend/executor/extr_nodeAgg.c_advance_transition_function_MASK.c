
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_22__ {TYPE_4__* curaggcontext; TYPE_6__* curpertrans; TYPE_2__* tmpcontext; } ;
struct TYPE_21__ {int noTransValue; int transValueIsNull; void* transValue; } ;
struct TYPE_15__ {scalar_t__ fn_strict; } ;
struct TYPE_20__ {int numTransInputs; int transtypeLen; int transtypeByVal; TYPE_1__ transfn; TYPE_5__* transfn_fcinfo; } ;
struct TYPE_19__ {int isnull; TYPE_3__* args; } ;
struct TYPE_18__ {int ecxt_per_tuple_memory; } ;
struct TYPE_17__ {int isnull; void* value; } ;
struct TYPE_16__ {int ecxt_per_tuple_memory; } ;
struct TYPE_14__ {int eoh_context; } ;
typedef int MemoryContext ;
typedef TYPE_5__* FunctionCallInfo ;
typedef void* Datum ;
typedef TYPE_6__* AggStatePerTrans ;
typedef TYPE_7__* AggStatePerGroup ;
typedef TYPE_8__ AggState ;


 scalar_t__ VAR_0 ;
 TYPE_13__* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*,int,int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(AggState *VAR_1,
       AggStatePerTrans VAR_2,
       AggStatePerGroup VAR_3)
{
 FunctionCallInfo VAR_4 = VAR_2->transfn_fcinfo;
 MemoryContext VAR_5;
 Datum VAR_6;

 if (VAR_2->transfn.fn_strict)
 {




  int VAR_7 = VAR_2->numTransInputs;
  int VAR_8;

  for (VAR_8 = 1; VAR_8 <= VAR_7; VAR_8++)
  {
   if (VAR_4->args[VAR_8].isnull)
    return;
  }
  if (VAR_3->noTransValue)
  {
   VAR_5 = FUNC_6(
              VAR_1->curaggcontext->ecxt_per_tuple_memory);
   VAR_3->transValue = FUNC_7(VAR_4->args[1].value,
              VAR_2->transtypeByVal,
              VAR_2->transtypeLen);
   VAR_3->transValueIsNull = 0;
   VAR_3->noTransValue = 0;
   FUNC_6(VAR_5);
   return;
  }
  if (VAR_3->transValueIsNull)
  {






   return;
  }
 }


 VAR_5 = FUNC_6(VAR_1->tmpcontext->ecxt_per_tuple_memory);


 VAR_1->curpertrans = VAR_2;




 VAR_4->args[0].value = VAR_3->transValue;
 VAR_4->args[0].isnull = VAR_3->transValueIsNull;
 VAR_4->isnull = 0;

 VAR_6 = FUNC_4(VAR_4);

 VAR_1->curpertrans = ((void*)0);
 if (!VAR_2->transtypeByVal &&
  FUNC_1(VAR_6) != FUNC_1(VAR_3->transValue))
 {
  if (!VAR_4->isnull)
  {
   FUNC_6(VAR_1->curaggcontext->ecxt_per_tuple_memory);
   if (FUNC_2(VAR_6,
              0,
              VAR_2->transtypeLen) &&
    FUNC_5(FUNC_0(VAR_6)->eoh_context) == VAR_0)
                      ;
   else
    VAR_6 = FUNC_7(VAR_6,
           VAR_2->transtypeByVal,
           VAR_2->transtypeLen);
  }
  if (!VAR_3->transValueIsNull)
  {
   if (FUNC_2(VAR_3->transValue,
              0,
              VAR_2->transtypeLen))
    FUNC_3(VAR_3->transValue);
   else
    FUNC_8(FUNC_1(VAR_3->transValue));
  }
 }

 VAR_3->transValue = VAR_6;
 VAR_3->transValueIsNull = VAR_4->isnull;

 FUNC_6(VAR_5);
}
