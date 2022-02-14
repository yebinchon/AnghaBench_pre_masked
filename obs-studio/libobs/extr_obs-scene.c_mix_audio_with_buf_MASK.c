
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, float *VAR_1, float *VAR_2,
          size_t VAR_3, size_t VAR_4)
{
 register float *VAR_5 = VAR_0;
 register float *VAR_6 = VAR_2 + VAR_3;
 register float *VAR_7 = VAR_1 + VAR_3;
 register float *VAR_8 = VAR_7 + VAR_4;

 while (VAR_7 < VAR_8)
  *(VAR_5++) += *(VAR_7++) * *(VAR_6++);
}
