
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool
FUNC_0(const unsigned char *VAR_0, int VAR_1)
{
 unsigned char VAR_2;

 switch (VAR_1)
 {
  default:

   return 0;
  case 4:
   VAR_2 = VAR_0[3];
   if (VAR_2 < 0x80 || VAR_2 > 0xBF)
    return 0;

  case 3:
   VAR_2 = VAR_0[2];
   if (VAR_2 < 0x80 || VAR_2 > 0xBF)
    return 0;

  case 2:
   VAR_2 = VAR_0[1];
   switch (*VAR_0)
   {
    case 0xE0:
     if (VAR_2 < 0xA0 || VAR_2 > 0xBF)
      return 0;
     break;
    case 0xED:
     if (VAR_2 < 0x80 || VAR_2 > 0x9F)
      return 0;
     break;
    case 0xF0:
     if (VAR_2 < 0x90 || VAR_2 > 0xBF)
      return 0;
     break;
    case 0xF4:
     if (VAR_2 < 0x80 || VAR_2 > 0x8F)
      return 0;
     break;
    default:
     if (VAR_2 < 0x80 || VAR_2 > 0xBF)
      return 0;
     break;
   }

  case 1:
   VAR_2 = *VAR_0;
   if (VAR_2 >= 0x80 && VAR_2 < 0xC2)
    return 0;
   if (VAR_2 > 0xF4)
    return 0;
   break;
 }
 return 1;
}
