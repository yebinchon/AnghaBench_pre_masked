
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(float *VAR_0, float *VAR_1, size_t VAR_2,
        size_t VAR_3)
{
 register float *VAR_4 = VAR_0;
 register float *VAR_5 = VAR_1 + VAR_2;
 register float *VAR_6 = VAR_5 + VAR_3;

 while (VAR_5 < VAR_6)
  *(VAR_4++) += *(VAR_5++);
}
