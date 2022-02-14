
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_6__ {int weight; int ndigits; int have_carry_space; scalar_t__* pos_digits; scalar_t__* neg_digits; scalar_t__ dscale; } ;
struct TYPE_5__ {int weight; int ndigits; scalar_t__ dscale; } ;
typedef TYPE_1__ NumericVar ;
typedef TYPE_2__ NumericSumAccum ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(NumericSumAccum *VAR_0, const NumericVar *VAR_1)
{
 int VAR_2 = VAR_0->weight;
 int VAR_3 = VAR_0->ndigits;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = VAR_2;
 VAR_4 = VAR_3;
 if (VAR_1->weight >= VAR_5)
 {
  VAR_5 = VAR_1->weight + 1;
  VAR_4 = VAR_4 + (VAR_5 - VAR_2);
 }






 else if (!VAR_0->have_carry_space)
 {
  VAR_5++;
  VAR_4++;
 }


 VAR_6 = VAR_4 - VAR_5 - 1;
 VAR_7 = VAR_1->ndigits - VAR_1->weight - 1;
 if (VAR_7 > VAR_6)
  VAR_4 = VAR_4 + (VAR_7 - VAR_6);

 if (VAR_4 != VAR_3 ||
  VAR_5 != VAR_2)
 {
  int32 *VAR_8;
  int32 *VAR_9;
  int VAR_10;

  VAR_10 = VAR_5 - VAR_2;

  VAR_8 = FUNC_2(VAR_4 * sizeof(int32));
  VAR_9 = FUNC_2(VAR_4 * sizeof(int32));

  if (VAR_0->pos_digits)
  {
   FUNC_1(&VAR_8[VAR_10], VAR_0->pos_digits,
       VAR_3 * sizeof(int32));
   FUNC_3(VAR_0->pos_digits);

   FUNC_1(&VAR_9[VAR_10], VAR_0->neg_digits,
       VAR_3 * sizeof(int32));
   FUNC_3(VAR_0->neg_digits);
  }

  VAR_0->pos_digits = VAR_8;
  VAR_0->neg_digits = VAR_9;

  VAR_0->weight = VAR_5;
  VAR_0->ndigits = VAR_4;

  FUNC_0(VAR_0->pos_digits[0] == 0 && VAR_0->neg_digits[0] == 0);
  VAR_0->have_carry_space = 1;
 }

 if (VAR_1->dscale > VAR_0->dscale)
  VAR_0->dscale = VAR_1->dscale;
}
