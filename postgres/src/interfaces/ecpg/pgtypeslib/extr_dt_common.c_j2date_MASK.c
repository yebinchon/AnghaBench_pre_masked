
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(int VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_4 = VAR_0;
 VAR_4 += 32044;
 VAR_5 = VAR_4 / 146097;
 VAR_6 = (VAR_4 - VAR_5 * 146097) * 4 + 3;
 VAR_4 += 60 + VAR_5 * 3 + VAR_6 / 146097;
 VAR_5 = VAR_4 / 1461;
 VAR_4 -= VAR_5 * 1461;
 VAR_7 = VAR_4 * 4 / 1461;
 VAR_4 = ((VAR_7 != 0) ? (VAR_4 + 305) % 365 : (VAR_4 + 306) % 366) + 123;
 VAR_7 += VAR_5 * 4;
 *VAR_1 = VAR_7 - 4800;
 VAR_5 = VAR_4 * 2141 / 65536;
 *VAR_3 = VAR_4 - 7834 * VAR_5 / 256;
 *VAR_2 = (VAR_5 + 10) % 12 + 1;

 return;
}
