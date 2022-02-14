
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ndigits; int* digits; int dscale; scalar_t__ sign; int weight; } ;
typedef TYPE_1__ NumericVar ;
typedef int NumericDigit ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(const NumericVar *VAR_6, const NumericVar *VAR_7, NumericVar *VAR_8,
  int VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 NumericDigit *VAR_20;
 NumericDigit *VAR_21;
 NumericDigit *VAR_22;
 int VAR_23,
    VAR_24,
    VAR_25;
 if (VAR_6->ndigits > VAR_7->ndigits)
 {
  const NumericVar *VAR_26 = VAR_6;

  VAR_6 = VAR_7;
  VAR_7 = VAR_26;
 }


 VAR_18 = VAR_6->ndigits;
 VAR_19 = VAR_7->ndigits;
 VAR_20 = VAR_6->digits;
 VAR_21 = VAR_7->digits;

 if (VAR_18 == 0 || VAR_19 == 0)
 {

  FUNC_7(VAR_8);
  VAR_8->dscale = VAR_9;
  return;
 }


 if (VAR_6->sign == VAR_7->sign)
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_4;
 VAR_12 = VAR_6->weight + VAR_7->weight + 2;
 VAR_10 = VAR_18 + VAR_19 + 1;
 VAR_13 = VAR_12 + 1 + (VAR_9 + VAR_0 - 1) / VAR_0 +
  VAR_2;
 VAR_10 = FUNC_1(VAR_10, VAR_13);

 if (VAR_10 < 3)
 {

  FUNC_7(VAR_8);
  VAR_8->dscale = VAR_9;
  return;
 }
 VAR_14 = (int *) FUNC_3(VAR_10 * sizeof(int));
 VAR_16 = 0;
 for (VAR_24 = FUNC_1(VAR_18 - 1, VAR_10 - 3); VAR_24 >= 0; VAR_24--)
 {
  int VAR_27 = VAR_20[VAR_24];

  if (VAR_27 == 0)
   continue;


  VAR_16 += VAR_27;
  if (VAR_16 > (VAR_1 - VAR_1 / VAR_3) / (VAR_3 - 1))
  {

   VAR_15 = 0;
   for (VAR_23 = VAR_10 - 1; VAR_23 >= 0; VAR_23--)
   {
    VAR_17 = VAR_14[VAR_23] + VAR_15;
    if (VAR_17 >= VAR_3)
    {
     VAR_15 = VAR_17 / VAR_3;
     VAR_17 -= VAR_15 * VAR_3;
    }
    else
     VAR_15 = 0;
    VAR_14[VAR_23] = VAR_17;
   }
   FUNC_0(VAR_15 == 0);

   VAR_16 = 1 + VAR_27;
  }







  for (VAR_25 = FUNC_1(VAR_19 - 1, VAR_10 - VAR_24 - 3), VAR_23 = VAR_24 + VAR_25 + 2;
    VAR_25 >= 0; VAR_25--)
   VAR_14[VAR_23--] += VAR_27 * VAR_21[VAR_25];
 }






 FUNC_2(VAR_8, VAR_10);
 VAR_22 = VAR_8->digits;
 VAR_15 = 0;
 for (VAR_23 = VAR_10 - 1; VAR_23 >= 0; VAR_23--)
 {
  VAR_17 = VAR_14[VAR_23] + VAR_15;
  if (VAR_17 >= VAR_3)
  {
   VAR_15 = VAR_17 / VAR_3;
   VAR_17 -= VAR_15 * VAR_3;
  }
  else
   VAR_15 = 0;
  VAR_22[VAR_23] = VAR_17;
 }
 FUNC_0(VAR_15 == 0);

 FUNC_4(VAR_14);




 VAR_8->weight = VAR_12;
 VAR_8->sign = VAR_11;


 FUNC_5(VAR_8, VAR_9);


 FUNC_6(VAR_8);
}
