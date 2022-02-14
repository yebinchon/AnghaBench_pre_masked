
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,int*) ;
 char* FUNC_1 (char*,char,size_t) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, size_t VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7[4];
 char *VAR_8 = VAR_0;

 if (!FUNC_1(VAR_0, ':', VAR_1)) {
  return 0;
 }


 VAR_5 = FUNC_1(VAR_0, '.', VAR_1);
 if (VAR_5) {
   while (VAR_5 > VAR_0 && *(VAR_5-1) != ':') {
   VAR_5--;
  }

  if (!FUNC_0(VAR_5, (VAR_1 - (VAR_5 - VAR_0)), VAR_7)) {
   return 0;
  }

  VAR_1 = VAR_5 - VAR_0;
  if (VAR_1 < 2) {
   return 0;
  }

  if (VAR_5[-2] != ':') {

   VAR_1--;
  }

  VAR_3 = 2;
 }

 VAR_6 = VAR_0 + VAR_1;

 while (VAR_0 < VAR_6) {
  if (*VAR_0 == ':') {
   if (++VAR_0 >= VAR_6) {

    return 0;
   }
   if (*VAR_0 == ':') {
    if (VAR_2) {
     return 0;
    }
    VAR_3++;
    VAR_2 = 1;

    if (++VAR_0 == VAR_6) {
     return (VAR_3 <= 8);
    }
   } else if ((VAR_0 - 1) == VAR_8) {

    return 0;
   }
  }
  VAR_4 = 0;
  while ((VAR_0 < VAR_6) &&
         ((*VAR_0 >= '0' && *VAR_0 <= '9') ||
          (*VAR_0 >= 'a' && *VAR_0 <= 'f') ||
          (*VAR_0 >= 'A' && *VAR_0 <= 'F'))) {
   VAR_4++;
   VAR_0++;
  }
  if (VAR_4 < 1 || VAR_4 > 4) {
   return 0;
  }
  if (++VAR_3 > 8)
   return 0;
 }
 return ((VAR_2 && VAR_3 <= 8) || VAR_3 == 8);
}
