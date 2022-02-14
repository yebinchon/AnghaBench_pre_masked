
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rscale; int weight; int ndigits; scalar_t__ sign; int* digits; int* buf; scalar_t__ dscale; } ;
typedef TYPE_1__ numeric ;
typedef int NumericDigit ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int) ;

int
FUNC_3(numeric *VAR_2, numeric *VAR_3, numeric *VAR_4)
{
 NumericDigit *VAR_5;
 NumericDigit *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10,
    VAR_11,
    VAR_12,
    VAR_13;
 long VAR_14 = 0;
 int VAR_15 = VAR_2->rscale + VAR_3->rscale;

 VAR_8 = VAR_2->weight + VAR_3->weight + 2;
 VAR_7 = VAR_2->ndigits + VAR_3->ndigits + 1;
 if (VAR_2->sign == VAR_3->sign)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;

 if ((VAR_5 = FUNC_0(VAR_7)) == ((void*)0))
  return -1;
 VAR_6 = VAR_5;
 FUNC_2(VAR_6, 0, VAR_7);

 VAR_11 = VAR_7;
 for (VAR_12 = VAR_2->ndigits - 1; VAR_12 >= 0; VAR_12--)
 {
  VAR_14 = 0;
  VAR_10 = --VAR_11;

  for (VAR_13 = VAR_3->ndigits - 1; VAR_13 >= 0; VAR_13--)
  {
   VAR_14 += VAR_6[VAR_10] + VAR_2->digits[VAR_12] * VAR_3->digits[VAR_13];
   VAR_6[VAR_10--] = VAR_14 % 10;
   VAR_14 /= 10;
  }
  VAR_6[VAR_10] = VAR_14;
 }

 VAR_10 = VAR_8 + VAR_15 + 2;
 if (VAR_10 >= 0 && VAR_10 < VAR_7)
 {
  VAR_14 = (VAR_6[VAR_10] > 4) ? 1 : 0;
  VAR_7 = VAR_10;
  VAR_10--;
  while (VAR_14)
  {
   VAR_14 += VAR_6[VAR_10];
   VAR_6[VAR_10--] = VAR_14 % 10;
   VAR_14 /= 10;
  }
 }

 while (VAR_7 > 0 && *VAR_6 == 0)
 {
  VAR_6++;
  VAR_8--;
  VAR_7--;
 }
 while (VAR_7 > 0 && VAR_6[VAR_7 - 1] == 0)
  VAR_7--;

 if (VAR_7 == 0)
 {
  VAR_9 = VAR_1;
  VAR_8 = 0;
 }

 FUNC_1(VAR_4->buf);
 VAR_4->buf = VAR_5;
 VAR_4->digits = VAR_6;
 VAR_4->ndigits = VAR_7;
 VAR_4->weight = VAR_8;
 VAR_4->rscale = VAR_15;
 VAR_4->sign = VAR_9;
 VAR_4->dscale = VAR_2->dscale + VAR_3->dscale;

 return 0;
}
