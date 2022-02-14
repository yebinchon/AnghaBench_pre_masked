
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static bool FUNC_1(char **VAR_0, char **VAR_1)
{
 char *VAR_2 = *VAR_1, *VAR_3 = *VAR_0;
 u8 VAR_4;

 if (FUNC_0(*VAR_3) == 0)
  return 0;

 VAR_4 = (*VAR_3++) & 7;
 while (VAR_4 < 32 && FUNC_0(*VAR_3) && (VAR_3 - *VAR_0 < 3)) {
  VAR_4 <<= 3;
  VAR_4 += (*VAR_3++) & 7;
 }
 *VAR_2 = VAR_4;
 *VAR_1 += 1;
 *VAR_0 = VAR_3;
 return 1;
}
