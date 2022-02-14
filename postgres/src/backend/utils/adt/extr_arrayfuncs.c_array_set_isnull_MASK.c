
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;



__attribute__((used)) static void
FUNC_0(bits8 *VAR_0, int VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_0 += VAR_1 / 8;
 VAR_3 = 1 << (VAR_1 % 8);
 if (VAR_2)
  *VAR_0 &= ~VAR_3;
 else
  *VAR_0 |= VAR_3;
}
