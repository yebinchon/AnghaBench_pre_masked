
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ FUNC_0 (unsigned char*,int) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static inline int FUNC_3(wchar_t *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 int VAR_4 = -1;


 if (*VAR_1 <= 0x7F) {
  *VAR_0 = *VAR_1;
  return 1;
 }


 if ((*VAR_1 & 0xE0) == 0xC0) VAR_4 = 2;
 else if ((*VAR_1 & 0xF0) == 0xE0) VAR_4 = 3;
 else if ((*VAR_1 & 0xF8) == 0xF0) VAR_4 = 4;
 else if ((*VAR_1 & 0xFC) == 0xF8) VAR_4 = 5;
 else if ((*VAR_1 & 0xFE) == 0xFC) VAR_4 = 6;


 if (VAR_4 > VAR_2)
  return -2;


 if (VAR_4 > 1 && VAR_4 < 5) {

  if (FUNC_1(VAR_1, VAR_4) ||
   FUNC_2(VAR_1, VAR_4) ||
   FUNC_0(VAR_1, VAR_4))
   return -1;


  *VAR_0 = (char)(*VAR_1++ & (0x7F >> VAR_4));

  for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++) {

   if (*VAR_1 < 0x80 || *VAR_1 > 0xBF)
    return -1;

   *VAR_0 = (*VAR_0 << 6) | (*VAR_1++ & 0x3F);
  }

  return VAR_4;
 }


 return -1;
}
