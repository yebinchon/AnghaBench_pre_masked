
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

void
FUNC_0(int VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_5 = VAR_1;
 VAR_5 += 32044;
 VAR_6 = VAR_5 / 146097;
 VAR_7 = (VAR_5 - VAR_6 * 146097) * 4 + 3;
 VAR_5 += 60 + VAR_6 * 3 + VAR_7 / 146097;
 VAR_6 = VAR_5 / 1461;
 VAR_5 -= VAR_6 * 1461;
 VAR_8 = VAR_5 * 4 / 1461;
 VAR_5 = ((VAR_8 != 0) ? ((VAR_5 + 305) % 365) : ((VAR_5 + 306) % 366))
  + 123;
 VAR_8 += VAR_6 * 4;
 *VAR_2 = VAR_8 - 4800;
 VAR_6 = VAR_5 * 2141 / 65536;
 *VAR_4 = VAR_5 - 7834 * VAR_6 / 256;
 *VAR_3 = (VAR_6 + 10) % VAR_0 + 1;

 return;
}
