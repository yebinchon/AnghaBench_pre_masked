
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

double
FUNC_2(double VAR_2, double VAR_3)
{
  double VAR_4 = FUNC_0(VAR_2), VAR_5 = FUNC_0(VAR_3);
  double VAR_6;


  if (VAR_4 < VAR_5)
    {
      double VAR_7 = VAR_4;

      VAR_4 = VAR_5;
      VAR_5 = VAR_7;
    }


  if (VAR_5 == 0.)
    return VAR_4;







  if ((VAR_6 = VAR_5 / VAR_4) > VAR_1 && VAR_4 < VAR_0)
    return VAR_4 * FUNC_1(1.0 + VAR_6*VAR_6);
  else
    {





      double VAR_8 = VAR_6*VAR_6, VAR_9, VAR_10, VAR_11 = VAR_4, VAR_12 = VAR_5;

      do {
        VAR_9 = 4. + VAR_8;
        if (VAR_9 == 4.)
          break;
        VAR_10 = VAR_8 / VAR_9;
        VAR_11 += 2. * VAR_10 * VAR_11;
        VAR_12 *= VAR_10;
        VAR_8 = (VAR_12 / VAR_11) * (VAR_12 / VAR_11);
      } while (1);

      return VAR_11;
    }
}
