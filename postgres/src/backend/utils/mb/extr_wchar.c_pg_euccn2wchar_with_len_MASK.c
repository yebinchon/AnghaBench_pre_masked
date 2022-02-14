
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_wchar ;


 scalar_t__ FUNC_0 (unsigned char const) ;
 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_2, pg_wchar *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 while (VAR_4 > 0 && *VAR_2)
 {
  if (*VAR_2 == VAR_0 && VAR_4 >= 3)
  {
   VAR_2++;
   *VAR_3 = (VAR_0 << 16) | (*VAR_2++ << 8);
   *VAR_3 |= *VAR_2++;
   VAR_4 -= 3;
  }
  else if (*VAR_2 == VAR_1 && VAR_4 >= 3)
  {
   VAR_2++;
   *VAR_3 = (VAR_1 << 16) | (*VAR_2++ << 8);
   *VAR_3 |= *VAR_2++;
   VAR_4 -= 3;
  }
  else if (FUNC_0(*VAR_2) && VAR_4 >= 2)
  {
   *VAR_3 = *VAR_2++ << 8;
   *VAR_3 |= *VAR_2++;
   VAR_4 -= 2;
  }
  else
  {
   *VAR_3 = *VAR_2++;
   VAR_4--;
  }
  VAR_3++;
  VAR_5++;
 }
 *VAR_3 = 0;
 return VAR_5;
}
