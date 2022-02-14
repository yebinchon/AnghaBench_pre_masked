
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (int,int) ;

unsigned char FUNC_3(int VAR_0)
{
  double VAR_1 = FUNC_2 (1, VAR_0);
  double VAR_2 = FUNC_2 (4, VAR_0);
  double VAR_3 = FUNC_2 (5, VAR_0);
  double VAR_4 = FUNC_2 (6, VAR_0);
  double VAR_5 = 4. * VAR_1 - 2. * VAR_2 - VAR_3 - VAR_4;
  VAR_5 = VAR_5 - (int) VAR_5 + 1.;

  double VAR_6 = FUNC_0(VAR_5);
  VAR_6 = 16. * (VAR_6 - FUNC_1 (VAR_6));
  unsigned char VAR_7 = VAR_6;
  VAR_6 = 16. * (VAR_6 - FUNC_1 (VAR_6));
  unsigned char VAR_8 = VAR_6;
  return (VAR_7 << 4) | VAR_8;
}
