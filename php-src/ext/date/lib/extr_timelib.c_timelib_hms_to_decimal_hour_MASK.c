
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, int VAR_1, int VAR_2, double *VAR_3)
{
 if (VAR_0 > 0) {
  *VAR_3 = ((double)VAR_0 + (double)VAR_1 / 60 + (double)VAR_2 / 3600);
 } else {
  *VAR_3 = ((double)VAR_0 - (double)VAR_1 / 60 - (double)VAR_2 / 3600);
 }
}
