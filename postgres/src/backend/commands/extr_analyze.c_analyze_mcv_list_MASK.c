
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

__attribute__((used)) static int
FUNC_1(int *VAR_0,
     int VAR_1,
     double VAR_2,
     double VAR_3,
     int VAR_4,
     double VAR_5)
{
 double VAR_6;
 double VAR_7;
 int VAR_8;





 if (VAR_4 == VAR_5 || VAR_5 <= 1.0)
  return VAR_1;


 VAR_6 = VAR_2;
 if (VAR_6 < 0)
  VAR_6 = -VAR_6 * VAR_5;
 VAR_7 = 0.0;
 for (VAR_8 = 0; VAR_8 < VAR_1 - 1; VAR_8++)
  VAR_7 += VAR_0[VAR_8];

 while (VAR_1 > 0)
 {
  double VAR_9,
     VAR_10,
     VAR_11,
     VAR_12,
     VAR_13,
     VAR_14,
     VAR_15;





  VAR_9 = 1.0 - VAR_7 / VAR_4 - VAR_3;
  if (VAR_9 < 0.0)
   VAR_9 = 0.0;
  if (VAR_9 > 1.0)
   VAR_9 = 1.0;
  VAR_10 = VAR_6 - (VAR_1 - 1);
  if (VAR_10 > 1)
   VAR_9 /= VAR_10;
  VAR_11 = VAR_5;
  VAR_12 = VAR_4;
  VAR_13 = VAR_11 * VAR_0[VAR_1 - 1] / VAR_12;
  VAR_14 = VAR_12 * VAR_13 * (VAR_11 - VAR_13) * (VAR_11 - VAR_12) / (VAR_11 * VAR_11 * (VAR_11 - 1));
  VAR_15 = FUNC_0(VAR_14);

  if (VAR_0[VAR_1 - 1] > VAR_9 * VAR_4 + 2 * VAR_15 + 0.5)
  {





   break;
  }
  else
  {

   VAR_1--;
   if (VAR_1 == 0)
    break;
   VAR_7 -= VAR_0[VAR_1 - 1];
  }
 }
 return VAR_1;
}
