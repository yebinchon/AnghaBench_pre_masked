
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int maxScale; int maxScaleCount; int sumX2; scalar_t__ calcSumX2; int sumX; int N; int agg_context; int NaNcount; } ;
struct TYPE_10__ {int dscale; } ;
typedef TYPE_1__ NumericVar ;
typedef TYPE_2__ NumericAggState ;
typedef int Numeric ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(NumericAggState *VAR_0, Numeric VAR_1)
{
 NumericVar VAR_2;
 NumericVar VAR_3;
 MemoryContext VAR_4;


 if (FUNC_1(VAR_1))
 {
  VAR_0->NaNcount++;
  return;
 }


 FUNC_4(VAR_1, &VAR_2);





 if (VAR_2.dscale > VAR_0->maxScale)
 {
  VAR_0->maxScale = VAR_2.dscale;
  VAR_0->maxScaleCount = 1;
 }
 else if (VAR_2.dscale == VAR_0->maxScale)
  VAR_0->maxScaleCount++;


 if (VAR_0->calcSumX2)
 {
  FUNC_3(&VAR_3);
  FUNC_5(&VAR_2, &VAR_2, &VAR_3, VAR_2.dscale * 2);
 }


 VAR_4 = FUNC_0(VAR_0->agg_context);

 VAR_0->N++;


 FUNC_2(&(VAR_0->sumX), &VAR_2);

 if (VAR_0->calcSumX2)
  FUNC_2(&(VAR_0->sumX2), &VAR_3);

 FUNC_0(VAR_4);
}
