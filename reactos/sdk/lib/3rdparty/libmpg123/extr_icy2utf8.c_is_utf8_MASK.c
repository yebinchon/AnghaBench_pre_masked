
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int
FUNC_0(const char* VAR_0)
{
 uint8_t VAR_1;
 size_t VAR_2;
 const uint8_t* VAR_3 = (const uint8_t*) VAR_0;



 while ((VAR_1 = *VAR_3++)) {

  if(VAR_1 < 0x80) continue;


  else if ((VAR_1 < 0xC2) || (VAR_1 > 0xFD))
   return 0;

  if (((VAR_1 == 0xC2) && (VAR_3[0] < 0xA0)) ||
      ((VAR_1 == 0xEF) && (VAR_3[0] == 0xBF) && (VAR_3[1] > 0xBD)))

   return 0;


  if (VAR_1 < 0xE0) VAR_2 = 1;
  else if (VAR_1 < 0xF0) VAR_2 = 2;
  else if (VAR_1 < 0xF8) VAR_2 = 3;
  else if (VAR_1 < 0xFC) VAR_2 = 4;
  else
   VAR_2 = 5;

  while (VAR_2--)
   if ((*VAR_3++ & 0xC0) != 0x80)
    return 0;
 }


 return 1;
}
