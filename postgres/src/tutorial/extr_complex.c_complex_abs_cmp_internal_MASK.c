
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Complex ;


 double FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(Complex * VAR_0, Complex * VAR_1)
{
 double VAR_2 = FUNC_0(VAR_0),
    VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 > VAR_3)
  return 1;
 return 0;
}
