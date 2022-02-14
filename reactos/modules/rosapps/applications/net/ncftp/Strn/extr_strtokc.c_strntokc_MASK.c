
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(char *VAR_0, size_t VAR_1, char *VAR_2, const char *VAR_3, char **VAR_4)
{
 char *VAR_5;
 const char *VAR_6;
 char VAR_7, VAR_8;
 char *VAR_9;
 int VAR_10;
 char *VAR_11, *VAR_12;

 VAR_11 = VAR_0;
 VAR_12 = VAR_11 + VAR_1 - 1;

 if (VAR_2 == ((void*)0))
  VAR_9 = *VAR_4;
 else
  VAR_9 = VAR_2;

 if ((VAR_9 == ((void*)0)) || (VAR_3 == ((void*)0))) {
  *VAR_4 = ((void*)0);
  goto done;
 }


 for (VAR_5 = VAR_9; ; ) {
next1:
  VAR_7 = *VAR_5++;
  if (VAR_7 == '\0') {

   *VAR_4 = ((void*)0);
   goto done;
  }
  for (VAR_6 = VAR_3; ; ) {
   VAR_8 = (char) *VAR_6++;
   if (VAR_8 == '\0') {



    VAR_9 = VAR_5 - 1;
    if (VAR_11 < VAR_12)
     *VAR_11++ = VAR_7;
    goto starttok;
   }
   if (VAR_8 == VAR_7) {


    goto next1;
   }
  }

 }

starttok:
 for ( ; ; VAR_5++) {
  VAR_7 = *VAR_5;
  if (VAR_7 == '\0') {

   *VAR_4 = VAR_5;
   break;
  }
  for (VAR_6 = VAR_3; ; ) {
   VAR_8 = (char) *VAR_6++;
   if (VAR_8 == '\0') {



    break;
   }
   if (VAR_8 == VAR_7) {


    *VAR_5++ = '\0';
    *VAR_4 = VAR_5;
    goto done;
   }
  }
  if (VAR_11 < VAR_12)
   *VAR_11++ = VAR_7;
 }

done:
 *VAR_11 = '\0';
 VAR_10 = (int) (VAR_11 - VAR_0);







 return (VAR_10);
}
