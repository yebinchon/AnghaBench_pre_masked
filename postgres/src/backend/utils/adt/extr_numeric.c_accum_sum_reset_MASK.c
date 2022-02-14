
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndigits; scalar_t__* neg_digits; scalar_t__* pos_digits; scalar_t__ dscale; } ;
typedef TYPE_1__ NumericSumAccum ;



__attribute__((used)) static void
FUNC_0(NumericSumAccum *VAR_0)
{
 int VAR_1;

 VAR_0->dscale = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->ndigits; VAR_1++)
 {
  VAR_0->pos_digits[VAR_1] = 0;
  VAR_0->neg_digits[VAR_1] = 0;
 }
}
