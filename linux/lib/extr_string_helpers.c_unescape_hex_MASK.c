
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char) ;

__attribute__((used)) static bool FUNC_1(char **VAR_0, char **VAR_1)
{
 char *VAR_2 = *VAR_1, *VAR_3 = *VAR_0;
 int VAR_4;
 u8 VAR_5;

 if (*VAR_3++ != 'x')
  return 0;

 VAR_5 = VAR_4 = FUNC_0(*VAR_3++);
 if (VAR_4 < 0)
  return 0;

 VAR_4 = FUNC_0(*VAR_3);
 if (VAR_4 >= 0) {
  VAR_3++;
  VAR_5 = (VAR_5 << 4) | VAR_4;
 }
 *VAR_2 = VAR_5;
 *VAR_1 += 1;
 *VAR_0 = VAR_3;
 return 1;
}
