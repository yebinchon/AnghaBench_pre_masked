
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,int) ;

int
FUNC_1(char *VAR_0, size_t VAR_1, char *VAR_2, const char *VAR_3)
{
 static char *VAR_4 = ((void*)0);
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_7 = VAR_0;
 VAR_6 = VAR_7 + VAR_1 - 1;

 if (VAR_2 != ((void*)0)) {
  VAR_4 = VAR_2;
 } else {
  if (VAR_4 == ((void*)0)) {
   *VAR_7 = '\0';
   return (-1);
  }
 }

 for (VAR_5 = VAR_4; ; VAR_5++) {
  if (*VAR_5 == '\0') {
   VAR_4 = ((void*)0);
   break;
  }
  if (FUNC_0(VAR_3, (int) *VAR_5) != ((void*)0)) {
   ++VAR_5;
   VAR_4 = VAR_5;
   break;
  }
  if (VAR_7 < VAR_6)
   *VAR_7++ = *VAR_5;
 }
 *VAR_7 = '\0';
 VAR_8 = (int) (VAR_7 - VAR_0);







 return (VAR_8);
}
