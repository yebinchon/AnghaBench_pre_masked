
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char *VAR_0, size_t VAR_1, int *VAR_2)
{
 const char *VAR_3 = VAR_0 + VAR_1;
 int VAR_4, VAR_5;
 int VAR_6 = 0;

 while (VAR_0 < VAR_3) {
  int VAR_7;
  if (*VAR_0 < '0' || *VAR_0 > '9') {
   return 0;
  }
  VAR_7 = (*VAR_0 == '0');
  VAR_5 = 1;
  VAR_4 = ((*(VAR_0++)) - '0');
  while (VAR_0 < VAR_3 && (*VAR_0 >= '0' && *VAR_0 <= '9')) {
   VAR_4 = VAR_4 * 10 + ((*(VAR_0++)) - '0');
   if (VAR_4 > 255 || ++VAR_5 > 3) {
    return 0;
   }
  }


  if (VAR_7 && (VAR_4 != 0 || VAR_5 > 1))
   return 0;
  VAR_2[VAR_6++] = VAR_4;
  if (VAR_6 == 4) {
   return VAR_0 == VAR_3;
  } else if (VAR_0 >= VAR_3 || *(VAR_0++) != '.') {
   return 0;
  }
 }
 return 0;
}
