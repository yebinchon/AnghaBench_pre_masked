
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(
 unsigned long VAR_0, unsigned long VAR_1,
 unsigned long VAR_2, unsigned long VAR_3,
 unsigned long *VAR_4, unsigned long *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 VAR_6 = VAR_0;
 VAR_7 = VAR_1;
 VAR_8 = VAR_11 = 0;
 VAR_10 = VAR_9 = 1;
 for (;;) {
  unsigned long VAR_12, VAR_13;
  if ((VAR_10 > VAR_2) || (VAR_11 > VAR_3)) {
   VAR_10 = VAR_8;
   VAR_11 = VAR_9;
   break;
  }
  if (VAR_7 == 0)
   break;
  VAR_12 = VAR_7;
  VAR_13 = VAR_6 / VAR_7;
  VAR_7 = VAR_6 % VAR_7;
  VAR_6 = VAR_12;
  VAR_12 = VAR_8 + VAR_13 * VAR_10;
  VAR_8 = VAR_10;
  VAR_10 = VAR_12;
  VAR_12 = VAR_9 + VAR_13 * VAR_11;
  VAR_9 = VAR_11;
  VAR_11 = VAR_12;
 }
 *VAR_4 = VAR_10;
 *VAR_5 = VAR_11;
}
