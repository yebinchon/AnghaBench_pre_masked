
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int weight; int ndigits; scalar_t__* digits; } ;
typedef TYPE_1__ numeric ;



__attribute__((used)) static int
FUNC_0(numeric *VAR_0, numeric *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4 = VAR_0->weight;
 int VAR_5 = VAR_1->weight;
 int VAR_6;

 while (VAR_4 > VAR_5 && VAR_2 < VAR_0->ndigits)
 {
  if (VAR_0->digits[VAR_2++] != 0)
   return 1;
  VAR_4--;
 }
 while (VAR_5 > VAR_4 && VAR_3 < VAR_1->ndigits)
 {
  if (VAR_1->digits[VAR_3++] != 0)
   return -1;
  VAR_5--;
 }

 if (VAR_4 == VAR_5)
 {
  while (VAR_2 < VAR_0->ndigits && VAR_3 < VAR_1->ndigits)
  {
   VAR_6 = VAR_0->digits[VAR_2++] - VAR_1->digits[VAR_3++];
   if (VAR_6)
   {
    if (VAR_6 > 0)
     return 1;
    return -1;
   }
  }
 }

 while (VAR_2 < VAR_0->ndigits)
 {
  if (VAR_0->digits[VAR_2++] != 0)
   return 1;
 }
 while (VAR_3 < VAR_1->ndigits)
 {
  if (VAR_1->digits[VAR_3++] != 0)
   return -1;
 }

 return 0;
}
