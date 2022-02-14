
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_wchar ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(const pg_wchar *VAR_4, unsigned char *VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 while (VAR_6 > 0 && *VAR_4)
 {
  unsigned char VAR_8;

  VAR_8 = (*VAR_4 >> 16) & 0xff;
  if (FUNC_0(VAR_8))
  {
   *VAR_5++ = VAR_8;
   *VAR_5++ = *VAR_4 & 0xff;
   VAR_7 += 2;
  }
  else if (FUNC_1(VAR_8))
  {
   *VAR_5++ = VAR_8;
   *VAR_5++ = (*VAR_4 >> 8) & 0xff;
   *VAR_5++ = *VAR_4 & 0xff;
   VAR_7 += 3;
  }
  else if (FUNC_2(VAR_8))
  {
   *VAR_5++ = VAR_0;
   *VAR_5++ = VAR_8;
   *VAR_5++ = *VAR_4 & 0xff;
   VAR_7 += 3;
  }
  else if (FUNC_3(VAR_8))
  {
   *VAR_5++ = VAR_1;
   *VAR_5++ = VAR_8;
   *VAR_5++ = *VAR_4 & 0xff;
   VAR_7 += 3;
  }
  else if (FUNC_4(VAR_8))
  {
   *VAR_5++ = VAR_2;
   *VAR_5++ = VAR_8;
   *VAR_5++ = (*VAR_4 >> 8) & 0xff;
   *VAR_5++ = *VAR_4 & 0xff;
   VAR_7 += 4;
  }
  else if (FUNC_5(VAR_8))
  {
   *VAR_5++ = VAR_3;
   *VAR_5++ = VAR_8;
   *VAR_5++ = (*VAR_4 >> 8) & 0xff;
   *VAR_5++ = *VAR_4 & 0xff;
   VAR_7 += 4;
  }
  else
  {
   *VAR_5++ = *VAR_4 & 0xff;
   VAR_7 += 1;
  }
  VAR_4++;
  VAR_6--;
 }
 *VAR_5 = 0;
 return VAR_7;
}
