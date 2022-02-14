
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static unsigned
FUNC_2(const char *VAR_0, unsigned VAR_1, char *VAR_2)
{
 const char *VAR_3 = VAR_0 + VAR_1;
 char *VAR_4 = VAR_2;
 int VAR_5 = 0;

 while (VAR_0 < VAR_3)
 {
  unsigned char VAR_6 = (unsigned char) *VAR_0;

  if (VAR_6 == '\0' || FUNC_1(VAR_6))
  {
   VAR_4[0] = '\\';
   VAR_4[1] = FUNC_0(VAR_6 >> 6);
   VAR_4[2] = FUNC_0((VAR_6 >> 3) & 7);
   VAR_4[3] = FUNC_0(VAR_6 & 7);
   VAR_4 += 4;
   VAR_5 += 4;
  }
  else if (VAR_6 == '\\')
  {
   VAR_4[0] = '\\';
   VAR_4[1] = '\\';
   VAR_4 += 2;
   VAR_5 += 2;
  }
  else
  {
   *VAR_4++ = VAR_6;
   VAR_5++;
  }

  VAR_0++;
 }

 return VAR_5;
}
