
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ndigits; int* digits; int dscale; scalar_t__ sign; int weight; } ;
typedef TYPE_1__ NumericVar ;
typedef int NumericDigit ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int FUNC_2 (int,int) ;
 double VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(const NumericVar *VAR_8, const NumericVar *VAR_9,
    NumericVar *VAR_10, int VAR_11, bool VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 NumericDigit *VAR_21;
 double VAR_22,
    VAR_23,
    VAR_24,
    VAR_25;
 int VAR_26;
 int VAR_27;


 int VAR_28 = VAR_8->ndigits;
 int VAR_29 = VAR_9->ndigits;
 NumericDigit *VAR_30 = VAR_8->digits;
 NumericDigit *VAR_31 = VAR_9->digits;





 if (VAR_29 == 0 || VAR_31[0] == 0)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("division by zero")));




 if (VAR_28 == 0)
 {
  FUNC_12(VAR_10);
  VAR_10->dscale = VAR_11;
  return;
 }




 if (VAR_8->sign == VAR_9->sign)
  VAR_14 = VAR_7;
 else
  VAR_14 = VAR_6;
 VAR_15 = VAR_8->weight - VAR_9->weight + 1;

 VAR_13 = VAR_15 + 1 + (VAR_11 + VAR_0 - 1) / VAR_0;

 VAR_13 += VAR_1;
 if (VAR_13 < VAR_1)
  VAR_13 = VAR_1;

 if (VAR_13 < VAR_28)
  VAR_13 = VAR_28;
 VAR_16 = (int *) FUNC_7((VAR_13 + 1) * sizeof(int));
 for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++)
  VAR_16[VAR_27 + 1] = VAR_30[VAR_27];







 VAR_23 = (double) VAR_31[0];
 for (VAR_27 = 1; VAR_27 < 4; VAR_27++)
 {
  VAR_23 *= VAR_5;
  if (VAR_27 < VAR_29)
   VAR_23 += (double) VAR_31[VAR_27];
 }
 VAR_24 = 1.0 / VAR_23;
 VAR_19 = 1;




 for (VAR_26 = 0; VAR_26 < VAR_13; VAR_26++)
 {

  VAR_22 = (double) VAR_16[VAR_26];
  for (VAR_27 = 1; VAR_27 < 4; VAR_27++)
  {
   VAR_22 *= VAR_5;
   if (VAR_26 + VAR_27 <= VAR_13)
    VAR_22 += (double) VAR_16[VAR_26 + VAR_27];
  }

  VAR_25 = VAR_22 * VAR_24;
  VAR_17 = (VAR_25 >= 0.0) ? ((int) VAR_25) :
   (((int) VAR_25) - 1);

  if (VAR_17 != 0)
  {

   VAR_19 += FUNC_0(VAR_17);
   if (VAR_19 > (VAR_4 - VAR_4 / VAR_5 - 1) / (VAR_5 - 1))
   {

    VAR_18 = 0;
    for (VAR_27 = VAR_13; VAR_27 > VAR_26; VAR_27--)
    {
     VAR_20 = VAR_16[VAR_27] + VAR_18;
     if (VAR_20 < 0)
     {
      VAR_18 = -((-VAR_20 - 1) / VAR_5) - 1;
      VAR_20 -= VAR_18 * VAR_5;
     }
     else if (VAR_20 >= VAR_5)
     {
      VAR_18 = VAR_20 / VAR_5;
      VAR_20 -= VAR_18 * VAR_5;
     }
     else
      VAR_18 = 0;
     VAR_16[VAR_27] = VAR_20;
    }
    VAR_20 = VAR_16[VAR_26] + VAR_18;
    VAR_16[VAR_26] = VAR_20;






    VAR_19 = 1;





    VAR_22 = (double) VAR_16[VAR_26];
    for (VAR_27 = 1; VAR_27 < 4; VAR_27++)
    {
     VAR_22 *= VAR_5;
     if (VAR_26 + VAR_27 <= VAR_13)
      VAR_22 += (double) VAR_16[VAR_26 + VAR_27];
    }

    VAR_25 = VAR_22 * VAR_24;
    VAR_17 = (VAR_25 >= 0.0) ? ((int) VAR_25) :
     (((int) VAR_25) - 1);
    VAR_19 += FUNC_0(VAR_17);
   }
   if (VAR_17 != 0)
   {
    int VAR_32 = FUNC_2(VAR_29, VAR_13 - VAR_26 + 1);

    for (VAR_27 = 0; VAR_27 < VAR_32; VAR_27++)
     VAR_16[VAR_26 + VAR_27] -= VAR_17 * VAR_31[VAR_27];
   }
  }
  VAR_16[VAR_26 + 1] += VAR_16[VAR_26] * VAR_5;

  VAR_16[VAR_26] = VAR_17;
 }




 VAR_22 = (double) VAR_16[VAR_26];
 for (VAR_27 = 1; VAR_27 < 4; VAR_27++)
  VAR_22 *= VAR_5;
 VAR_25 = VAR_22 * VAR_24;
 VAR_17 = (VAR_25 >= 0.0) ? ((int) VAR_25) :
  (((int) VAR_25) - 1);
 VAR_16[VAR_26] = VAR_17;
 FUNC_3(VAR_10, VAR_13 + 1);
 VAR_21 = VAR_10->digits;
 VAR_18 = 0;
 for (VAR_27 = VAR_13; VAR_27 >= 0; VAR_27--)
 {
  VAR_20 = VAR_16[VAR_27] + VAR_18;
  if (VAR_20 < 0)
  {
   VAR_18 = -((-VAR_20 - 1) / VAR_5) - 1;
   VAR_20 -= VAR_18 * VAR_5;
  }
  else if (VAR_20 >= VAR_5)
  {
   VAR_18 = VAR_20 / VAR_5;
   VAR_20 -= VAR_18 * VAR_5;
  }
  else
   VAR_18 = 0;
  VAR_21[VAR_27] = VAR_20;
 }
 FUNC_1(VAR_18 == 0);

 FUNC_8(VAR_16);




 VAR_10->weight = VAR_15;
 VAR_10->sign = VAR_14;


 if (VAR_12)
  FUNC_9(VAR_10, VAR_11);
 else
  FUNC_11(VAR_10, VAR_11);


 FUNC_10(VAR_10);
}
