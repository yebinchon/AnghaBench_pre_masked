
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,int) ;

char *
FUNC_1(char *VAR_0, const char *VAR_1)
{
 static char *VAR_2 = ((void*)0);
 char *VAR_3, *VAR_4;

 if (VAR_0 != ((void*)0)) {
  VAR_2 = VAR_0;
 } else {
  if (VAR_2 == ((void*)0))
   return (((void*)0));
 }
 for (VAR_3 = VAR_2, VAR_4 = VAR_2; ; VAR_4++) {
  if (*VAR_4 == '\0') {
   VAR_2 = ((void*)0);
   break;
  }
  if (FUNC_0(VAR_1, (int) *VAR_4) != ((void*)0)) {
   *VAR_4++ = '\0';
   VAR_2 = VAR_4;
   break;
  }
 }
 return (VAR_3);
}
