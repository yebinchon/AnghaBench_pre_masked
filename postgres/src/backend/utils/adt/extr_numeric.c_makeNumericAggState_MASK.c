
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int calcSumX2; int agg_context; } ;
typedef TYPE_1__ NumericAggState ;
typedef int MemoryContext ;
typedef int FunctionCallInfo ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static NumericAggState *
FUNC_4(FunctionCallInfo VAR_1, bool VAR_2)
{
 NumericAggState *VAR_3;
 MemoryContext VAR_4;
 MemoryContext VAR_5;

 if (!FUNC_0(VAR_1, &VAR_4))
  FUNC_2(VAR_0, "aggregate function called in non-aggregate context");

 VAR_5 = FUNC_1(VAR_4);

 VAR_3 = (NumericAggState *) FUNC_3(sizeof(NumericAggState));
 VAR_3->calcSumX2 = VAR_2;
 VAR_3->agg_context = VAR_4;

 FUNC_1(VAR_5);

 return VAR_3;
}
