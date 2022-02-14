
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 unsigned char FUNC_2 (unsigned char) ;

int
FUNC_3(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 while (VAR_2-- > 0)
 {
  unsigned char VAR_3 = (unsigned char) *VAR_0++;
  unsigned char VAR_4 = (unsigned char) *VAR_1++;

  if (VAR_3 != VAR_4)
  {
   if (VAR_3 >= 'A' && VAR_3 <= 'Z')
    VAR_3 += 'a' - 'A';
   else if (FUNC_0(VAR_3) && FUNC_1(VAR_3))
    VAR_3 = FUNC_2(VAR_3);

   if (VAR_4 >= 'A' && VAR_4 <= 'Z')
    VAR_4 += 'a' - 'A';
   else if (FUNC_0(VAR_4) && FUNC_1(VAR_4))
    VAR_4 = FUNC_2(VAR_4);

   if (VAR_3 != VAR_4)
    return (int) VAR_3 - (int) VAR_4;
  }
  if (VAR_3 == 0)
   break;
 }
 return 0;
}
