
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0, size_t VAR_1, size_t VAR_2, float VAR_3)
{
 register float *VAR_4 = (float *)VAR_0;
 register float *VAR_5 = VAR_4 + VAR_1 * VAR_2;

 while (VAR_4 < VAR_5)
  *(VAR_4++) *= VAR_3;
}
