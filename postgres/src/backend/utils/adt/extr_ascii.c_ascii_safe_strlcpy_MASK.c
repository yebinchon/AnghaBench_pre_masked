
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 if (VAR_2 == 0)
  return;

 while (--VAR_2 > 0)
 {

  unsigned char VAR_3 = *VAR_1++;

  if (VAR_3 == '\0')
   break;

  if (32 <= VAR_3 && VAR_3 <= 127)
   *VAR_0 = VAR_3;

  else if (VAR_3 == '\n' || VAR_3 == '\r' || VAR_3 == '\t')
   *VAR_0 = VAR_3;

  else
   *VAR_0 = '?';
  VAR_0++;
 }

 *VAR_0 = '\0';
}
