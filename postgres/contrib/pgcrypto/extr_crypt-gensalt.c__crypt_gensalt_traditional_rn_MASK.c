
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

char *
FUNC_0(unsigned long VAR_1,
         const char *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
 if (VAR_3 < 2 || VAR_5 < 2 + 1 || (VAR_1 && VAR_1 != 25))
 {
  if (VAR_5 > 0)
   VAR_4[0] = '\0';
  return ((void*)0);
 }

 VAR_4[0] = VAR_0[(unsigned int) VAR_2[0] & 0x3f];
 VAR_4[1] = VAR_0[(unsigned int) VAR_2[1] & 0x3f];
 VAR_4[2] = '\0';

 return VAR_4;
}
