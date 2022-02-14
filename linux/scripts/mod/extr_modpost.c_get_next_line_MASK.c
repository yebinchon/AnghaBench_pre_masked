
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

char *FUNC_1(unsigned long *VAR_0, void *VAR_1, unsigned long VAR_2)
{
 static char VAR_3[4096];
 int VAR_4 = 1;
 size_t VAR_5 = 0;
 signed char *VAR_6 = (signed char *)VAR_1 + *VAR_0;
 char *VAR_7 = VAR_3;

 for (; *VAR_0 < VAR_2 ; (*VAR_0)++) {
  if (VAR_4 && FUNC_0(*VAR_6)) {
   VAR_6++;
   continue;
  }
  VAR_4 = 0;
  if (*VAR_6 != '\n' && (*VAR_0 < VAR_2)) {
   VAR_5++;
   *VAR_7++ = *VAR_6++;
   if (VAR_5 > 4095)
    break;
  } else {

   *VAR_7 = '\0';
   return VAR_3;
  }
 }

 return ((void*)0);
}
