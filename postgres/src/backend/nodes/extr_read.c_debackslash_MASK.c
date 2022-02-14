
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;

char *
FUNC_1(const char *VAR_0, int VAR_1)
{
 char *VAR_2 = FUNC_0(VAR_1 + 1);
 char *VAR_3 = VAR_2;

 while (VAR_1 > 0)
 {
  if (*VAR_0 == '\\' && VAR_1 > 1)
   VAR_0++, VAR_1--;
  *VAR_3++ = *VAR_0++;
  VAR_1--;
 }
 *VAR_3 = '\0';
 return VAR_2;
}
