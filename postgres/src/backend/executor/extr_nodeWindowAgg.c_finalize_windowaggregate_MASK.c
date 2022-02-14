
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef TYPE_6__* WindowStatePerFunc ;
typedef TYPE_7__* WindowStatePerAgg ;
struct TYPE_19__ {TYPE_1__* ps_ExprContext; } ;
struct TYPE_20__ {TYPE_2__ ps; } ;
struct TYPE_25__ {int * curaggcontext; TYPE_3__ ss; } ;
typedef TYPE_8__ WindowAggState ;
struct TYPE_24__ {int numFinalArgs; int transValueIsNull; int resulttypeLen; int resulttypeByVal; scalar_t__ transValue; int * aggcontext; int transtypeLen; int finalfn; int finalfn_oid; } ;
struct TYPE_23__ {int winCollation; } ;
struct TYPE_22__ {scalar_t__ fn_strict; } ;
struct TYPE_21__ {int isnull; scalar_t__ value; } ;
struct TYPE_18__ {int ecxt_per_tuple_memory; } ;
struct TYPE_17__ {int isnull; TYPE_5__* flinfo; TYPE_4__* args; } ;
struct TYPE_16__ {int fcinfo; } ;
typedef int MemoryContext ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (int ,int *,int,int ,void*,int *) ;
 int FUNC_3 (TYPE_13__*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ) ;
 TYPE_13__* VAR_2 ;
 TYPE_12__ VAR_3 ;

__attribute__((used)) static void
FUNC_9(WindowAggState *VAR_4,
       WindowStatePerFunc VAR_5,
       WindowStatePerAgg VAR_6,
       Datum *VAR_7, bool *VAR_8)
{
 MemoryContext VAR_9;

 VAR_9 = FUNC_6(VAR_4->ss.ps.ps_ExprContext->ecxt_per_tuple_memory);




 if (FUNC_7(VAR_6->finalfn_oid))
 {
  FUNC_3(VAR_2, VAR_1);
  int VAR_10 = VAR_6->numFinalArgs;
  bool VAR_11;
  int VAR_12;

  FUNC_2(VAR_3.fcinfo, &(VAR_6->finalfn),
         VAR_10,
         VAR_5->winCollation,
         (void *) VAR_4, ((void*)0));
  VAR_2->args[0].value =
   FUNC_4(VAR_6->transValue,
            VAR_6->transValueIsNull,
            VAR_6->transtypeLen);
  VAR_2->args[0].isnull = VAR_6->transValueIsNull;
  VAR_11 = VAR_6->transValueIsNull;


  for (VAR_12 = 1; VAR_12 < VAR_10; VAR_12++)
  {
   VAR_2->args[VAR_12].value = (Datum) 0;
   VAR_2->args[VAR_12].isnull = 1;
   VAR_11 = 1;
  }

  if (VAR_2->flinfo->fn_strict && VAR_11)
  {

   *VAR_7 = (Datum) 0;
   *VAR_8 = 1;
  }
  else
  {
   VAR_4->curaggcontext = VAR_6->aggcontext;
   *VAR_7 = FUNC_1(VAR_2);
   VAR_4->curaggcontext = ((void*)0);
   *VAR_8 = VAR_2->isnull;
  }
 }
 else
 {

  *VAR_7 = VAR_6->transValue;
  *VAR_8 = VAR_6->transValueIsNull;
 }




 if (!VAR_6->resulttypeByVal && !*VAR_8 &&
  !FUNC_5(VAR_0,
          FUNC_0(*VAR_7)))
  *VAR_7 = FUNC_8(*VAR_7,
       VAR_6->resulttypeByVal,
       VAR_6->resulttypeLen);
 FUNC_6(VAR_9);
}
