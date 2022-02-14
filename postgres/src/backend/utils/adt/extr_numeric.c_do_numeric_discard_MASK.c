
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int maxScale; int maxScaleCount; int N; int sumX2; scalar_t__ calcSumX2; int sumX; int agg_context; int NaNcount; } ;
struct TYPE_10__ {int dscale; scalar_t__ sign; } ;
typedef TYPE_1__ NumericVar ;
typedef TYPE_2__ NumericAggState ;
typedef int Numeric ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_8(NumericAggState *VAR_2, Numeric VAR_3)
{
 NumericVar VAR_4;
 NumericVar VAR_5;
 MemoryContext VAR_6;


 if (FUNC_2(VAR_3))
 {
  VAR_2->NaNcount--;
  return 1;
 }


 FUNC_6(VAR_3, &VAR_4);
 if (VAR_4.dscale == VAR_2->maxScale)
 {
  if (VAR_2->maxScaleCount > 1 || VAR_2->maxScale == 0)
  {




   VAR_2->maxScaleCount--;
  }
  else if (VAR_2->N == 1)
  {

   VAR_2->maxScale = 0;
   VAR_2->maxScaleCount = 0;
  }
  else
  {

   return 0;
  }
 }


 if (VAR_2->calcSumX2)
 {
  FUNC_5(&VAR_5);
  FUNC_7(&VAR_4, &VAR_4, &VAR_5, VAR_4.dscale * 2);
 }


 VAR_6 = FUNC_1(VAR_2->agg_context);

 if (VAR_2->N-- > 1)
 {

  VAR_4.sign = (VAR_4.sign == VAR_1 ? VAR_0 : VAR_1);
  FUNC_3(&(VAR_2->sumX), &VAR_4);

  if (VAR_2->calcSumX2)
  {

   VAR_5 = VAR_0;
   FUNC_3(&(VAR_2->sumX2), &VAR_5);
  }
 }
 else
 {

  FUNC_0(VAR_2->N == 0);

  FUNC_4(&VAR_2->sumX);
  if (VAR_2->calcSumX2)
   FUNC_4(&VAR_2->sumX2);
 }

 FUNC_1(VAR_6);

 return 1;
}
