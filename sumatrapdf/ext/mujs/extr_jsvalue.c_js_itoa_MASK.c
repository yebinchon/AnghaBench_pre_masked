
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(char *VAR_0, int VAR_1)
{
 char VAR_2[32], *VAR_3 = VAR_0;
 unsigned int VAR_4;
 int VAR_5 = 0;
 if (VAR_1 < 0) {
  VAR_4 = -VAR_1;
  *VAR_3++ = '-';
 } else {
  VAR_4 = VAR_1;
 }
 while (VAR_4) {
  VAR_2[VAR_5++] = (VAR_4 % 10) + '0';
  VAR_4 /= 10;
 }
 if (VAR_5 == 0)
  VAR_2[VAR_5++] = '0';
 while (VAR_5 > 0)
  *VAR_3++ = VAR_2[--VAR_5];
 *VAR_3 = 0;
 return VAR_0;
}
