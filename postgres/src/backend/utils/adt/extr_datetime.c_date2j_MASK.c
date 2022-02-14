
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (VAR_1 > 2)
 {
  VAR_1 += 1;
  VAR_0 += 4800;
 }
 else
 {
  VAR_1 += 13;
  VAR_0 += 4799;
 }

 VAR_4 = VAR_0 / 100;
 VAR_3 = VAR_0 * 365 - 32167;
 VAR_3 += VAR_0 / 4 - VAR_4 + VAR_4 / 4;
 VAR_3 += 7834 * VAR_1 / 256 + VAR_2;

 return VAR_3;
}
