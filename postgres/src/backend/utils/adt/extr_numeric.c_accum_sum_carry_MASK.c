
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {scalar_t__ num_uncarried; scalar_t__* pos_digits; scalar_t__* neg_digits; int ndigits; int have_carry_space; } ;
typedef TYPE_1__ NumericSumAccum ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(NumericSumAccum *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int32 *VAR_4;
 int32 VAR_5;
 int32 VAR_6 = 0;





 if (VAR_1->num_uncarried == 0)
  return;
 FUNC_0(VAR_1->pos_digits[0] == 0 && VAR_1->neg_digits[0] == 0);

 VAR_3 = VAR_1->ndigits;


 VAR_4 = VAR_1->pos_digits;
 VAR_5 = 0;
 for (VAR_2 = VAR_3 - 1; VAR_2 >= 0; VAR_2--)
 {
  VAR_6 = VAR_4[VAR_2] + VAR_5;
  if (VAR_6 >= VAR_0)
  {
   VAR_5 = VAR_6 / VAR_0;
   VAR_6 -= VAR_5 * VAR_0;
  }
  else
   VAR_5 = 0;
  VAR_4[VAR_2] = VAR_6;
 }

 if (VAR_6 > 0)
  VAR_1->have_carry_space = 0;


 VAR_4 = VAR_1->neg_digits;
 VAR_5 = 0;
 for (VAR_2 = VAR_3 - 1; VAR_2 >= 0; VAR_2--)
 {
  VAR_6 = VAR_4[VAR_2] + VAR_5;
  if (VAR_6 >= VAR_0)
  {
   VAR_5 = VAR_6 / VAR_0;
   VAR_6 -= VAR_5 * VAR_0;
  }
  else
   VAR_5 = 0;
  VAR_4[VAR_2] = VAR_6;
 }
 if (VAR_6 > 0)
  VAR_1->have_carry_space = 0;

 VAR_1->num_uncarried = 0;
}
