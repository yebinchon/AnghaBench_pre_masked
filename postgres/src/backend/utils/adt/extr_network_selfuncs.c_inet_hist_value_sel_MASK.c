
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inet ;
typedef double Selectivity ;
typedef int Datum ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 double FUNC_4 (double,int ) ;

__attribute__((used)) static Selectivity
FUNC_5(Datum *VAR_1, int VAR_2, Datum VAR_3,
     int VAR_4)
{
 Selectivity VAR_5 = 0.0;
 inet *VAR_6,
      *VAR_7,
      *VAR_8;
 int VAR_9,
    VAR_10,
    VAR_11;
 int VAR_12,
    VAR_13,
    VAR_14,
    VAR_15;


 if (VAR_2 <= 1)
  return 0.0;


 VAR_10 = (VAR_2 - 2) / VAR_0 + 1;

 VAR_6 = FUNC_0(VAR_3);


 VAR_7 = FUNC_0(VAR_1[0]);
 VAR_12 = FUNC_3(VAR_7, VAR_6, VAR_4);

 VAR_11 = 0;
 for (VAR_9 = VAR_10; VAR_9 < VAR_2; VAR_9 += VAR_10)
 {

  VAR_8 = FUNC_0(VAR_1[VAR_9]);
  VAR_13 = FUNC_3(VAR_8, VAR_6, VAR_4);

  if (VAR_12 == 0 && VAR_13 == 0)
  {

   VAR_5 += 1.0;
  }
  else if ((VAR_12 <= 0 && VAR_13 >= 0) ||
     (VAR_12 >= 0 && VAR_13 <= 0))
  {

   VAR_14 = FUNC_2(VAR_7, VAR_6, VAR_4);
   VAR_15 = FUNC_2(VAR_8, VAR_6, VAR_4);

   if (VAR_14 >= 0 || VAR_15 >= 0)
    VAR_5 += 1.0 / FUNC_4(2.0, FUNC_1(VAR_14, VAR_15));
  }


  VAR_7 = VAR_8;
  VAR_12 = VAR_13;


  VAR_11++;
 }

 return VAR_5 / VAR_11;
}
