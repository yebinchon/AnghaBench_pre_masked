
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double W; int randstate; } ;
typedef TYPE_1__* ReservoirState ;


 double FUNC_0 (int) ;
 double FUNC_1 (double) ;
 int FUNC_2 (double) ;
 double FUNC_3 (int ) ;

double
FUNC_4(ReservoirState VAR_0, double VAR_1, int VAR_2)
{
 double VAR_3;


 if (VAR_1 <= (22.0 * VAR_2))
 {

  double VAR_4,
     VAR_5;

  VAR_4 = FUNC_3(VAR_0->randstate);
  VAR_3 = 0;
  VAR_1 += 1;

  VAR_5 = (VAR_1 - (double) VAR_2) / VAR_1;

  while (VAR_5 > VAR_4)
  {
   VAR_3 += 1;
   VAR_1 += 1;
   VAR_5 *= (VAR_1 - (double) VAR_2) / VAR_1;
  }
 }
 else
 {

  double VAR_6 = VAR_0->W;
  double VAR_7 = VAR_1 - (double) VAR_2 + 1;

  for (;;)
  {
   double VAR_8,
      VAR_9,
      VAR_10;
   double VAR_11,
      VAR_12,
      VAR_13,
      VAR_14,
      VAR_15,
      VAR_16;


   VAR_11 = FUNC_3(VAR_0->randstate);
   VAR_12 = VAR_1 * (VAR_6 - 1.0);
   VAR_3 = FUNC_1(VAR_12);

   VAR_16 = (VAR_1 + 1) / VAR_7;
   VAR_13 = FUNC_0(FUNC_2(((VAR_11 * VAR_16 * VAR_16) * (VAR_7 + VAR_3)) / (VAR_1 + VAR_12)) / VAR_2);
   VAR_14 = (((VAR_1 + VAR_12) / (VAR_7 + VAR_3)) * VAR_7) / VAR_1;
   if (VAR_13 <= VAR_14)
   {
    VAR_6 = VAR_14 / VAR_13;
    break;
   }

   VAR_15 = (((VAR_11 * (VAR_1 + 1)) / VAR_7) * (VAR_1 + VAR_3 + 1)) / (VAR_1 + VAR_12);
   if ((double) VAR_2 < VAR_3)
   {
    VAR_10 = VAR_1;
    VAR_9 = VAR_7 + VAR_3;
   }
   else
   {
    VAR_10 = VAR_1 - (double) VAR_2 + VAR_3;
    VAR_9 = VAR_1 + 1;
   }
   for (VAR_8 = VAR_1 + VAR_3; VAR_8 >= VAR_9; VAR_8 -= 1)
   {
    VAR_15 *= VAR_8 / VAR_10;
    VAR_10 -= 1;
   }
   VAR_6 = FUNC_0(-FUNC_2(FUNC_3(VAR_0->randstate)) / VAR_2);
   if (FUNC_0(FUNC_2(VAR_15) / VAR_2) <= (VAR_1 + VAR_12) / VAR_1)
    break;
  }
  VAR_0->W = VAR_6;
 }
 return VAR_3;
}
