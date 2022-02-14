
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0, const char *VAR_1, char **VAR_2)
{
 char *VAR_3;
 const char *VAR_4;
 char VAR_5, VAR_6;
 char *VAR_7;

 if (VAR_0 == ((void*)0))
  VAR_7 = *VAR_2;
 else
  VAR_7 = VAR_0;

 if ((VAR_7 == ((void*)0)) || (VAR_1 == ((void*)0))) {
  *VAR_2 = ((void*)0);
  return ((void*)0);
 }


 for (VAR_3 = VAR_7; ; ) {
next1:
  VAR_5 = *VAR_3++;
  if (VAR_5 == '\0') {

   *VAR_2 = ((void*)0);
   return (((void*)0));
  }
  for (VAR_4 = VAR_1; ; ) {
   VAR_6 = (char) *VAR_4++;
   if (VAR_6 == '\0') {



    VAR_7 = VAR_3 - 1;
    goto starttok;
   }
   if (VAR_6 == VAR_5) {


    goto next1;
   }
  }

 }

starttok:
 for ( ; ; VAR_3++) {
  VAR_5 = *VAR_3;
  if (VAR_5 == '\0') {

   *VAR_2 = VAR_3;
   break;
  }
  for (VAR_4 = VAR_1; ; ) {
   VAR_6 = (char) *VAR_4++;
   if (VAR_6 == '\0') {



    break;
   }
   if (VAR_6 == VAR_5) {


    *VAR_3++ = '\0';
    *VAR_2 = VAR_3;
    return (VAR_7);
   }
  }
 }
 return (VAR_7);
}
