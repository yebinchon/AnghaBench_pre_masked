
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(int *VAR_1, const unsigned char *VAR_2, const unsigned char *VAR_3)
{
 if (VAR_2 + 2 <= VAR_3)
 {
  int VAR_4 = VAR_2[1] << 8 | VAR_2[0];
  if (VAR_4 >= 0xD800 && VAR_4 <= 0xDFFF && VAR_2 + 4 <= VAR_3)
  {
   int VAR_5 = VAR_2[3] << 8 | VAR_2[2];
   *VAR_1 = ((VAR_4 - 0xD800) << 10) + (VAR_5 - 0xDC00) + 0x10000;
   return 4;
  }
  *VAR_1 = VAR_4;
  return 2;
 }
 *VAR_1 = VAR_0;
 return 1;
}
