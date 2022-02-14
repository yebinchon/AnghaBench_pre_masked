
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int calcSumX2; int agg_context; } ;
typedef TYPE_1__ NumericAggState ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static NumericAggState *
FUNC_1(bool VAR_1)
{
 NumericAggState *VAR_2;

 VAR_2 = (NumericAggState *) FUNC_0(sizeof(NumericAggState));
 VAR_2->calcSumX2 = VAR_1;
 VAR_2->agg_context = VAR_0;

 return VAR_2;
}
