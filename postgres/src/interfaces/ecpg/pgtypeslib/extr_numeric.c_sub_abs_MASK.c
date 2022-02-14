
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ndigits; scalar_t__* digits; int weight; int rscale; int dscale; scalar_t__* buf; } ;
typedef TYPE_1__ numeric ;
typedef scalar_t__ NumericDigit ;


 int FUNC_0 (int,int) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(numeric *VAR_0, numeric *VAR_1, numeric *VAR_2)
{
 NumericDigit *VAR_3;
 NumericDigit *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9,
    VAR_10,
    VAR_11;
 int VAR_12 = 0;


 int VAR_13 = VAR_0->ndigits;
 int VAR_14 = VAR_1->ndigits;
 NumericDigit *VAR_15 = VAR_0->digits;
 NumericDigit *VAR_16 = VAR_1->digits;

 VAR_6 = VAR_0->weight;
 VAR_7 = FUNC_0(VAR_0->rscale, VAR_1->rscale);
 VAR_8 = FUNC_0(VAR_0->dscale, VAR_1->dscale);
 VAR_5 = VAR_7 + VAR_6 + 1;
 if (VAR_5 <= 0)
  VAR_5 = 1;

 if ((VAR_3 = FUNC_1(VAR_5)) == ((void*)0))
  return -1;
 VAR_4 = VAR_3;

 VAR_10 = VAR_7 + VAR_0->weight + 1;
 VAR_11 = VAR_7 + VAR_1->weight + 1;
 for (VAR_9 = VAR_5 - 1; VAR_9 >= 0; VAR_9--)
 {
  VAR_10--;
  VAR_11--;
  if (VAR_10 >= 0 && VAR_10 < VAR_13)
   VAR_12 += VAR_15[VAR_10];
  if (VAR_11 >= 0 && VAR_11 < VAR_14)
   VAR_12 -= VAR_16[VAR_11];

  if (VAR_12 < 0)
  {
   VAR_4[VAR_9] = VAR_12 + 10;
   VAR_12 = -1;
  }
  else
  {
   VAR_4[VAR_9] = VAR_12;
   VAR_12 = 0;
  }
 }

 while (VAR_5 > 0 && *VAR_4 == 0)
 {
  VAR_4++;
  VAR_6--;
  VAR_5--;
 }
 while (VAR_5 > 0 && VAR_4[VAR_5 - 1] == 0)
  VAR_5--;

 if (VAR_5 == 0)
  VAR_6 = 0;

 FUNC_2(VAR_2->buf);
 VAR_2->ndigits = VAR_5;
 VAR_2->buf = VAR_3;
 VAR_2->digits = VAR_4;
 VAR_2->weight = VAR_6;
 VAR_2->rscale = VAR_7;
 VAR_2->dscale = VAR_8;

 return 0;
}
