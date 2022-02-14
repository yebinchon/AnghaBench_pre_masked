
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_wchar ;


 scalar_t__ FUNC_0 (unsigned char const) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 scalar_t__ FUNC_3 (unsigned char const) ;

__attribute__((used)) static int
FUNC_4(const unsigned char *VAR_0, pg_wchar *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 while (VAR_2 > 0 && *VAR_0)
 {
  if (FUNC_0(*VAR_0) && VAR_2 >= 2)
  {
   *VAR_1 = *VAR_0++ << 16;
   *VAR_1 |= *VAR_0++;
   VAR_2 -= 2;
  }
  else if (FUNC_2(*VAR_0) && VAR_2 >= 3)
  {
   VAR_0++;
   *VAR_1 = *VAR_0++ << 16;
   *VAR_1 |= *VAR_0++;
   VAR_2 -= 3;
  }
  else if (FUNC_1(*VAR_0) && VAR_2 >= 3)
  {
   *VAR_1 = *VAR_0++ << 16;
   *VAR_1 |= *VAR_0++ << 8;
   *VAR_1 |= *VAR_0++;
   VAR_2 -= 3;
  }
  else if (FUNC_3(*VAR_0) && VAR_2 >= 4)
  {
   VAR_0++;
   *VAR_1 = *VAR_0++ << 16;
   *VAR_1 |= *VAR_0++ << 8;
   *VAR_1 |= *VAR_0++;
   VAR_2 -= 4;
  }
  else
  {
   *VAR_1 = (unsigned char) *VAR_0++;
   VAR_2--;
  }
  VAR_1++;
  VAR_3++;
 }
 *VAR_1 = 0;
 return VAR_3;
}
