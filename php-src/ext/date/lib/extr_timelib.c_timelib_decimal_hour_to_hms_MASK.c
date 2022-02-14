
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;

void FUNC_2(double VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
 if (VAR_0 > 0) {
  *VAR_1 = FUNC_1(VAR_0);
  *VAR_2 = FUNC_1((VAR_0 - *VAR_1) * 60);
  *VAR_3 = (VAR_0 - *VAR_1 - ((float) *VAR_2 / 60)) * 3600;
 } else {
  *VAR_1 = FUNC_0(VAR_0);
  *VAR_2 = 0 - FUNC_0((VAR_0 - *VAR_1) * 60);
  *VAR_3 = 0 - (VAR_0 - *VAR_1 - ((float) *VAR_2 / -60)) * 3600;
 }
}
