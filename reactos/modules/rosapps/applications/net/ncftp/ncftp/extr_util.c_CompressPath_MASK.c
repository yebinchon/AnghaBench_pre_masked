
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;

void
FUNC_2(char *const VAR_0, const char *const VAR_1, const size_t VAR_2)
{
 int VAR_3;
 const char *VAR_4;
 char *VAR_5, *VAR_6;
 char *VAR_7, *VAR_8;

 if (VAR_1[0] == '\0') {
  *VAR_0 = '\0';
  return;
 }

 VAR_4 = VAR_1;
 VAR_5 = VAR_0;
 VAR_6 = VAR_5 + VAR_2 - 1;
 for (;;) {
  VAR_3 = *VAR_4;
  if (VAR_3 == '.') {
   if (((VAR_4 == VAR_1) || (VAR_4[-1] == '/')) && ((VAR_4[1] == '/') || (VAR_4[1] == '\0'))) {

    if (VAR_4[1] == '/')
     ++VAR_4;
    ++VAR_4;
   } else if (VAR_5 < VAR_6) {
    *VAR_5++ = *VAR_4++;
   } else {
    ++VAR_4;
   }
  } else if (VAR_3 == '/') {

   if (VAR_5 < VAR_6)
    *VAR_5++ = *VAR_4++;
   else
    ++VAR_4;
   for (;;) {
    VAR_3 = *VAR_4;
    if (VAR_3 == '/') {

     ++VAR_4;
    } else if (VAR_3 == '.') {
     VAR_3 = VAR_4[1];
     if (VAR_3 == '/') {

      VAR_4 += 2;
     } else if (VAR_3 == '\0') {

      VAR_4 += 1;
     } else {
      break;
     }
    } else {
     break;
    }
   }
  } else if (VAR_3 == '\0') {

   if ((VAR_5[-1] == '/') && (VAR_5 > (VAR_0 + 1)))
    VAR_5[-1] = '\0';
   *VAR_5 = '\0';
   break;
  } else if (VAR_5 < VAR_6) {
   *VAR_5++ = *VAR_4++;
  } else {
   ++VAR_4;
  }
 }
 VAR_7 = VAR_0;






 while (*VAR_7 != '\0') {
  VAR_8 = VAR_7;
  for (;;) {

   if (*VAR_7 == '\0')
    return;
   if (*VAR_7 == '/') {
    ++VAR_7;
    break;
   }
   ++VAR_7;
  }
  if ((VAR_8[0] == '.') && (VAR_8[1] == '.')) {
   if (VAR_8[2] == '/') {



    continue;
   }
  }
  if ((VAR_7[0] == '.') && (VAR_7[1] == '.')) {
   if (VAR_7[2] == '/') {

    if ((VAR_8 == VAR_0) && (*VAR_0 == '/'))
     (void) FUNC_0(VAR_8 + 1, VAR_7 + 3, FUNC_1(VAR_7 + 3) + 1);
    else
     (void) FUNC_0(VAR_8, VAR_7 + 3, FUNC_1(VAR_7 + 3) + 1);
    VAR_7 = VAR_0;
   } else if (VAR_7[2] == '\0') {

    if ((VAR_8 <= VAR_0 + 1) && (*VAR_0 == '/'))
     VAR_0[1] = '\0';
    else
     VAR_8[-1] = '\0';
    VAR_7 = VAR_0;
   } else {




   }
  }
 }
}
