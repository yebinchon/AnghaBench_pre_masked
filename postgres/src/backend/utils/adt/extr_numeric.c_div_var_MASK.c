
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ndigits; scalar_t__* digits; int dscale; scalar_t__ sign; int weight; } ;
typedef TYPE_1__ NumericVar ;
typedef int NumericDigit ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int*,scalar_t__*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(const NumericVar *VAR_7, const NumericVar *VAR_8, NumericVar *VAR_9,
  int VAR_10, bool VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 NumericDigit *VAR_20;
 NumericDigit *VAR_21;
 NumericDigit *VAR_22;
 int VAR_23;
 int VAR_24;


 int VAR_25 = VAR_7->ndigits;
 int VAR_26 = VAR_8->ndigits;





 if (VAR_26 == 0 || VAR_8->digits[0] == 0)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("division by zero")));




 if (VAR_25 == 0)
 {
  FUNC_12(VAR_9);
  VAR_9->dscale = VAR_10;
  return;
 }






 if (VAR_7->sign == VAR_8->sign)
  VAR_14 = VAR_6;
 else
  VAR_14 = VAR_5;
 VAR_15 = VAR_7->weight - VAR_8->weight;

 VAR_13 = VAR_15 + 1 + (VAR_10 + VAR_0 - 1) / VAR_0;

 VAR_13 = FUNC_1(VAR_13, 1);

 if (VAR_11)
  VAR_13++;
 VAR_12 = VAR_13 + VAR_26;
 VAR_12 = FUNC_1(VAR_12, VAR_25);
 VAR_20 = (NumericDigit *)
  FUNC_7((VAR_12 + VAR_26 + 2) * sizeof(NumericDigit));
 VAR_21 = VAR_20 + (VAR_12 + 1);
 FUNC_6(VAR_20 + 1, VAR_7->digits, VAR_25 * sizeof(NumericDigit));
 FUNC_6(VAR_21 + 1, VAR_8->digits, VAR_26 * sizeof(NumericDigit));




 FUNC_2(VAR_9, VAR_13);
 VAR_22 = VAR_9->digits;

 if (VAR_26 == 1)
 {




  VAR_18 = VAR_21[1];
  VAR_16 = 0;
  for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++)
  {
   VAR_16 = VAR_16 * VAR_4 + VAR_20[VAR_23 + 1];
   VAR_22[VAR_23] = VAR_16 / VAR_18;
   VAR_16 = VAR_16 % VAR_18;
  }
 }
 else
 {
  if (VAR_21[1] < VAR_3)
  {
   int VAR_27 = VAR_4 / (VAR_21[1] + 1);

   VAR_16 = 0;
   for (VAR_23 = VAR_26; VAR_23 > 0; VAR_23--)
   {
    VAR_16 += VAR_21[VAR_23] * VAR_27;
    VAR_21[VAR_23] = VAR_16 % VAR_4;
    VAR_16 = VAR_16 / VAR_4;
   }
   FUNC_0(VAR_16 == 0);
   VAR_16 = 0;

   for (VAR_23 = VAR_25; VAR_23 >= 0; VAR_23--)
   {
    VAR_16 += VAR_20[VAR_23] * VAR_27;
    VAR_20[VAR_23] = VAR_16 % VAR_4;
    VAR_16 = VAR_16 / VAR_4;
   }
   FUNC_0(VAR_16 == 0);
   FUNC_0(VAR_21[1] >= VAR_3);
  }

  VAR_18 = VAR_21[1];
  VAR_19 = VAR_21[2];







  for (VAR_24 = 0; VAR_24 < VAR_13; VAR_24++)
  {

   int VAR_28 = VAR_20[VAR_24] * VAR_4 + VAR_20[VAR_24 + 1];
   int VAR_29;







   if (VAR_28 == 0)
   {
    VAR_22[VAR_24] = 0;
    continue;
   }

   if (VAR_20[VAR_24] == VAR_18)
    VAR_29 = VAR_4 - 1;
   else
    VAR_29 = VAR_28 / VAR_18;







   while (VAR_19 * VAR_29 >
       (VAR_28 - VAR_29 * VAR_18) * VAR_4 + VAR_20[VAR_24 + 2])
    VAR_29--;


   if (VAR_29 > 0)
   {





    VAR_16 = 0;
    VAR_17 = 0;
    for (VAR_23 = VAR_26; VAR_23 >= 0; VAR_23--)
    {
     VAR_16 += VAR_21[VAR_23] * VAR_29;
     VAR_17 -= VAR_16 % VAR_4;
     VAR_16 = VAR_16 / VAR_4;
     VAR_17 += VAR_20[VAR_24 + VAR_23];
     if (VAR_17 < 0)
     {
      VAR_20[VAR_24 + VAR_23] = VAR_17 + VAR_4;
      VAR_17 = -1;
     }
     else
     {
      VAR_20[VAR_24 + VAR_23] = VAR_17;
      VAR_17 = 0;
     }
    }
    FUNC_0(VAR_16 == 0);
    if (VAR_17)
    {
     VAR_29--;
     VAR_16 = 0;
     for (VAR_23 = VAR_26; VAR_23 >= 0; VAR_23--)
     {
      VAR_16 += VAR_20[VAR_24 + VAR_23] + VAR_21[VAR_23];
      if (VAR_16 >= VAR_4)
      {
       VAR_20[VAR_24 + VAR_23] = VAR_16 - VAR_4;
       VAR_16 = 1;
      }
      else
      {
       VAR_20[VAR_24 + VAR_23] = VAR_16;
       VAR_16 = 0;
      }
     }

     FUNC_0(VAR_16 == 1);
    }
   }


   VAR_22[VAR_24] = VAR_29;
  }
 }

 FUNC_8(VAR_20);




 VAR_9->weight = VAR_15;
 VAR_9->sign = VAR_14;


 if (VAR_11)
  FUNC_9(VAR_9, VAR_10);
 else
  FUNC_11(VAR_9, VAR_10);


 FUNC_10(VAR_9);
}
