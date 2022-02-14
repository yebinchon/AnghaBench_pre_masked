
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ aggtrue; scalar_t__ aggcount; } ;
typedef int MemoryContext ;
typedef int FunctionCallInfo ;
typedef TYPE_1__ BoolAggState ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static BoolAggState *
FUNC_3(FunctionCallInfo VAR_1)
{
 BoolAggState *VAR_2;
 MemoryContext VAR_3;

 if (!FUNC_0(VAR_1, &VAR_3))
  FUNC_2(VAR_0, "aggregate function called in non-aggregate context");

 VAR_2 = (BoolAggState *) FUNC_1(VAR_3,
            sizeof(BoolAggState));
 VAR_2->aggcount = 0;
 VAR_2->aggtrue = 0;

 return VAR_2;
}
