
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ndigits; int* digits; int weight; int dscale; int* buf; } ;
typedef TYPE_1__ NumericVar ;
typedef int NumericDigit ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(const NumericVar *VAR_1, const NumericVar *VAR_2, NumericVar *VAR_3)
{
 NumericDigit *VAR_4;
 NumericDigit *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8,
    VAR_9,
    VAR_10;
 int VAR_11;
 int VAR_12,
    VAR_13,
    VAR_14;
 int VAR_15 = 0;


 int VAR_16 = VAR_1->ndigits;
 int VAR_17 = VAR_2->ndigits;
 NumericDigit *VAR_18 = VAR_1->digits;
 NumericDigit *VAR_19 = VAR_2->digits;

 VAR_7 = FUNC_1(VAR_1->weight, VAR_2->weight) + 1;

 VAR_11 = FUNC_1(VAR_1->dscale, VAR_2->dscale);


 VAR_9 = VAR_1->ndigits - VAR_1->weight - 1;
 VAR_10 = VAR_2->ndigits - VAR_2->weight - 1;
 VAR_8 = FUNC_1(VAR_9, VAR_10);

 VAR_6 = VAR_8 + VAR_7 + 1;
 if (VAR_6 <= 0)
  VAR_6 = 1;

 VAR_4 = FUNC_2(VAR_6 + 1);
 VAR_4[0] = 0;
 VAR_5 = VAR_4 + 1;

 VAR_13 = VAR_8 + VAR_1->weight + 1;
 VAR_14 = VAR_8 + VAR_2->weight + 1;
 for (VAR_12 = VAR_6 - 1; VAR_12 >= 0; VAR_12--)
 {
  VAR_13--;
  VAR_14--;
  if (VAR_13 >= 0 && VAR_13 < VAR_16)
   VAR_15 += VAR_18[VAR_13];
  if (VAR_14 >= 0 && VAR_14 < VAR_17)
   VAR_15 += VAR_19[VAR_14];

  if (VAR_15 >= VAR_0)
  {
   VAR_5[VAR_12] = VAR_15 - VAR_0;
   VAR_15 = 1;
  }
  else
  {
   VAR_5[VAR_12] = VAR_15;
   VAR_15 = 0;
  }
 }

 FUNC_0(VAR_15 == 0);

 FUNC_3(VAR_3->buf);
 VAR_3->ndigits = VAR_6;
 VAR_3->buf = VAR_4;
 VAR_3->digits = VAR_5;
 VAR_3->weight = VAR_7;
 VAR_3->dscale = VAR_11;


 FUNC_4(VAR_3);
}
