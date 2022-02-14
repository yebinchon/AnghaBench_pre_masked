
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;


 int FUNC_0 (double) ;
 double VAR_0 ;
 double FUNC_1 (double) ;
 int ** VAR_1 ;

void FUNC_2()
{

  int VAR_2,VAR_3,VAR_4,VAR_5;
  real *VAR_6;

  for(VAR_2=0;VAR_2<5;VAR_2++)
  {
    VAR_4=0x10>>VAR_2; VAR_5=0x40>>VAR_2;
    VAR_6 = VAR_1[VAR_2];
    for(VAR_3=0;VAR_3<VAR_4;VAR_3++)
      VAR_6[VAR_3] = FUNC_0(1.0 / (2.0 * FUNC_1(VAR_0 * ((double) VAR_3 * 2.0 + 1.0) / (double) VAR_5)));
  }

}
