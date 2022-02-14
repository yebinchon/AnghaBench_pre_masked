
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;


 int FUNC_0 (int) ;
 double FUNC_1 (int ) ;
 double FUNC_2 (double,double,double) ;
 scalar_t__ FUNC_3 (double) ;
 int FUNC_4 (int *,int,double,int) ;

__attribute__((used)) static double
FUNC_5(Datum *VAR_0, int VAR_1,
       double VAR_2, double VAR_3, bool VAR_4)
{
 double VAR_5;
 double VAR_6,
    VAR_7,
    VAR_8,
    VAR_9;
 double VAR_10;
 int VAR_11;
 double VAR_12;

 FUNC_0(VAR_3 >= VAR_2);

 if (VAR_3 < 0.0)
  return 0.0;


 if (FUNC_3(VAR_3) && VAR_4)
  return 1.0;
 VAR_11 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4);
 if (VAR_11 >= VAR_1 - 1)
  return 1.0;

 if (VAR_11 < 0)
 {
  VAR_11 = 0;
  VAR_10 = 0.0;
 }
 else
 {

  VAR_10 = FUNC_2(VAR_2,
          FUNC_1(VAR_0[VAR_11]),
          FUNC_1(VAR_0[VAR_11 + 1]));
 }
 VAR_9 = (((double) VAR_11) + VAR_10) / (double) (VAR_1 - 1);
 VAR_7 = VAR_2;






 if (VAR_3 == VAR_2)
  return VAR_9;






 VAR_12 = 0.0;
 for (; VAR_11 < VAR_1 - 1; VAR_11++)
 {
  double VAR_13 = FUNC_1(VAR_0[VAR_11 + 1]);


  if (!(VAR_13 < VAR_3 || (VAR_4 && VAR_13 <= VAR_3)))
   break;


  VAR_6 = VAR_7;
  VAR_8 = VAR_9;

  VAR_7 = VAR_13;
  VAR_9 = (double) VAR_11 / (double) (VAR_1 - 1);







  if (VAR_8 > 0 || VAR_9 > 0)
   VAR_12 += 0.5 * (VAR_9 + VAR_8) * (VAR_7 - VAR_6);
 }


 VAR_6 = VAR_7;
 VAR_8 = VAR_9;

 VAR_7 = VAR_3;
 if (VAR_11 >= VAR_1 - 1)
  VAR_10 = 0.0;
 else
 {
  if (FUNC_1(VAR_0[VAR_11]) == FUNC_1(VAR_0[VAR_11 + 1]))
   VAR_10 = 0.0;
  else
   VAR_10 = FUNC_2(VAR_3, FUNC_1(VAR_0[VAR_11]), FUNC_1(VAR_0[VAR_11 + 1]));
 }
 VAR_9 = (((double) VAR_11) + VAR_10) / (double) (VAR_1 - 1);

 if (VAR_8 > 0 || VAR_9 > 0)
  VAR_12 += 0.5 * (VAR_9 + VAR_8) * (VAR_7 - VAR_6);
 if (FUNC_3(VAR_12) && FUNC_3(VAR_3))
  VAR_5 = 0.5;
 else
  VAR_5 = VAR_12 / (VAR_3 - VAR_2);

 return VAR_5;
}
