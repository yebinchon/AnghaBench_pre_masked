
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,int) ;

int
FUNC_2(const unsigned char *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 unsigned int VAR_3,
    VAR_4;
 int VAR_5,
    VAR_6;

 VAR_6 = VAR_2 / 8;
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_6);
 if (VAR_5 || (VAR_2 % 8) == 0)
  return VAR_5;

 VAR_3 = VAR_0[VAR_6];
 VAR_4 = VAR_1[VAR_6];
 for (VAR_6 = VAR_2 % 8; VAR_6 > 0; VAR_6--)
 {
  if (FUNC_0(VAR_3) != FUNC_0(VAR_4))
  {
   if (FUNC_0(VAR_3))
    return 1;
   return -1;
  }
  VAR_3 <<= 1;
  VAR_4 <<= 1;
 }
 return 0;
}
