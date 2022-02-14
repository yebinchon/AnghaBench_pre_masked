
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int*,int*,int*) ;

void FUNC_2(int *VAR_0,int *VAR_1,real *VAR_2)
{
  int VAR_3[64];
  int VAR_4;
  int *VAR_5 = VAR_3;
  register double const VAR_6 = ((65536.0 * 32) + 1) * 65536.0;

  for(VAR_4=0;VAR_4<32;VAR_4++) {
    *((double *) (VAR_5++)) = VAR_6 + *VAR_2++;
  }


  FUNC_1(VAR_0,VAR_1,VAR_3+32,VAR_3);
}
