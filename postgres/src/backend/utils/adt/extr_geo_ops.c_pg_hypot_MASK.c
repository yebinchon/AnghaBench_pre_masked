
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double float8 ;


 int FUNC_0 (double,int,int) ;
 double FUNC_1 (double) ;
 double FUNC_2 () ;
 double FUNC_3 () ;
 scalar_t__ FUNC_4 (double) ;
 scalar_t__ FUNC_5 (double) ;
 double FUNC_6 (double) ;

float8
FUNC_7(float8 VAR_0, float8 VAR_1)
{
 float8 VAR_2,
    VAR_3;


 if (FUNC_4(VAR_0) || FUNC_4(VAR_1))
  return FUNC_2();

 if (FUNC_5(VAR_0) || FUNC_5(VAR_1))
  return FUNC_3();


 VAR_0 = FUNC_1(VAR_0);
 VAR_1 = FUNC_1(VAR_1);


 if (VAR_0 < VAR_1)
 {
  float8 VAR_4 = VAR_0;

  VAR_0 = VAR_1;
  VAR_1 = VAR_4;
 }






 if (VAR_1 == 0.0)
  return VAR_0;


 VAR_2 = VAR_1 / VAR_0;
 VAR_3 = VAR_0 * FUNC_6(1.0 + (VAR_2 * VAR_2));

 FUNC_0(VAR_3, 0, 0);

 return VAR_3;
}
