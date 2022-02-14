
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 VAR_3 = (3 - ((VAR_0 >> 6) & 3)) * 3;
 VAR_4 = VAR_0 & 0x3f;
 if (!VAR_4)
  VAR_4 = 1;
 VAR_5 = VAR_2 - VAR_1;
 if (VAR_5 < 0) VAR_5 = -VAR_5;
 if (13 > VAR_3)
  VAR_5 = VAR_5 << (13 - VAR_3);
 else
  VAR_5 = VAR_5 >> (VAR_3 - 13);
 return (VAR_5 * 10) / (VAR_4 * 441);
}
