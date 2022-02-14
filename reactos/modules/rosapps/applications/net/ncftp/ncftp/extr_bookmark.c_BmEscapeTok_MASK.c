
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, size_t VAR_1, char *VAR_2)
{
 char *VAR_3 = VAR_0 + VAR_1 - 1;
 char *VAR_4 = VAR_0;
 int VAR_5;

 while ((VAR_5 = *VAR_2) != '\0') {
  VAR_2++;
  if ((VAR_5 == '\\') || (VAR_5 == ',') || (VAR_5 == '$')) {

   if ((VAR_0 + 1) < VAR_3) {
    *VAR_0++ = '\\';
    *VAR_0++ = VAR_5;
   }
  } else if (!FUNC_0(VAR_5)) {

   if ((VAR_0 + 2) < VAR_3) {
    (void) FUNC_1(VAR_0, "$%02x", VAR_5);
    VAR_0 += 3;
   }
  } else {
   if (VAR_0 < VAR_3)
    *VAR_0++ = VAR_5;
  }
 }
 *VAR_0 = '\0';
 return (VAR_4);
}
