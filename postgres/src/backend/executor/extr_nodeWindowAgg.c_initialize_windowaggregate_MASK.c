
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WindowStatePerFunc ;
typedef TYPE_1__* WindowStatePerAgg ;
struct TYPE_6__ {scalar_t__ aggcontext; } ;
typedef TYPE_2__ WindowAggState ;
struct TYPE_5__ {scalar_t__ aggcontext; int resultValueIsNull; scalar_t__ resultValue; scalar_t__ transValueCount; scalar_t__ initValueIsNull; scalar_t__ transValueIsNull; int transtypeLen; int transtypeByVal; int initValue; int transValue; } ;
typedef scalar_t__ MemoryContext ;
typedef scalar_t__ Datum ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(WindowAggState *VAR_0,
         WindowStatePerFunc VAR_1,
         WindowStatePerAgg VAR_2)
{
 MemoryContext VAR_3;






 if (VAR_2->aggcontext != VAR_0->aggcontext)
  FUNC_0(VAR_2->aggcontext);

 if (VAR_2->initValueIsNull)
  VAR_2->transValue = VAR_2->initValue;
 else
 {
  VAR_3 = FUNC_1(VAR_2->aggcontext);
  VAR_2->transValue = FUNC_2(VAR_2->initValue,
           VAR_2->transtypeByVal,
           VAR_2->transtypeLen);
  FUNC_1(VAR_3);
 }
 VAR_2->transValueIsNull = VAR_2->initValueIsNull;
 VAR_2->transValueCount = 0;
 VAR_2->resultValue = (Datum) 0;
 VAR_2->resultValueIsNull = 1;
}
