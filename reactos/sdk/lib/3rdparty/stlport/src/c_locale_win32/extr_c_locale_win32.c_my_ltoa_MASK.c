
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(long VAR_0, char* VAR_1) {
  char VAR_2[64];
  char* VAR_3 = VAR_2;

  if (VAR_0 == 0)
    *VAR_3++ = '0';
  else {
    for (; VAR_0 != 0; VAR_0 /= 10)
      *VAR_3++ = (char)(VAR_0 % 10) + '0';
  }
  while(VAR_3 > VAR_2) *VAR_1++ = *--VAR_3;

  *VAR_1 = '\0';
}
