
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

void FUNC_2(unsigned char *VAR_0)
{
 unsigned char *VAR_1 = VAR_0;
 unsigned char *VAR_2 = VAR_0;
 bool VAR_3 = 1;

 while (FUNC_0(*VAR_1))
  VAR_1++;
 while (*VAR_1) {
  if (!VAR_3)
   *VAR_2++ = ' ';
  VAR_3 = 0;
  while (FUNC_1(*VAR_1))
   *VAR_2++ = *VAR_1++;
  while (FUNC_0(*VAR_1))
   VAR_1++;
 }
 *VAR_2 = '\0';
}
