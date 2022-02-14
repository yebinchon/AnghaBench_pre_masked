
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static bool FUNC_0(const char **VAR_0, uint16_t *VAR_1)
{
 const char *VAR_2 = *VAR_0;
 uint16_t VAR_3 = 0;
 uint16_t VAR_4;
 uint16_t VAR_5;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  char VAR_6 = *VAR_2++;
  if (VAR_6 >= '0' && VAR_6 <= '9')
   VAR_5 = (uint16_t)(VAR_6 - '0');
  else if (VAR_6 >= 'A' && VAR_6 <= 'F')
   VAR_5 = (uint16_t)(VAR_6 - 'A' + 10);
  else if (VAR_6 >= 'a' && VAR_6 <= 'f')
   VAR_5 = (uint16_t)(VAR_6 - 'a' + 10);
  else
   return 0;

  VAR_3 = (uint16_t)((VAR_3 << 4) + VAR_5);
 }

 if (VAR_1)
  *VAR_1 = VAR_3;
 *VAR_0 = VAR_2;
 return 1;
}
