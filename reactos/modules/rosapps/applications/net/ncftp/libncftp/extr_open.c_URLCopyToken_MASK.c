
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,unsigned int*) ;

void
FUNC_1(char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
 char *VAR_4;
 const char *VAR_5;
 unsigned int VAR_6;
 int VAR_7;
 char VAR_8[4];

 VAR_4 = VAR_0 + VAR_1 - 1;
 VAR_5 = VAR_2 + VAR_3;
 while (VAR_2 < VAR_5) {
  VAR_7 = *VAR_2++;
  if (VAR_7 == '\0')
   break;
  if (VAR_7 == '%') {

   if (VAR_2 < VAR_5 + 2) {
    VAR_8[0] = *VAR_2++;
    VAR_8[1] = *VAR_2++;
    VAR_8[2] = '\0';
    VAR_6 = 0xeeff;
    if ((FUNC_0(VAR_8, "%x", &VAR_6) >= 0) && (VAR_6 != 0xeeff)) {
     if (VAR_0 < VAR_4) {
      *(unsigned char *)VAR_0 = (unsigned char) VAR_6;
      VAR_0++;
     }
    }
   } else {
    break;
   }
  } else {
   *VAR_0++ = (char) VAR_7;
  }
 }
 *VAR_0 = '\0';
}
