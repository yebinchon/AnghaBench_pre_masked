
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool
FUNC_0(unsigned char *VAR_0, int VAR_1)
{
 unsigned char VAR_2;
 unsigned char VAR_3;

 switch (VAR_1)
 {
  default:

   return 0;
  case 4:
   VAR_2 = VAR_0[3];
   if (VAR_2 < 0xBF)
   {
    VAR_0[3]++;
    break;
   }

  case 3:
   VAR_2 = VAR_0[2];
   if (VAR_2 < 0xBF)
   {
    VAR_0[2]++;
    break;
   }

  case 2:
   VAR_2 = VAR_0[1];
   switch (*VAR_0)
   {
    case 0xED:
     VAR_3 = 0x9F;
     break;
    case 0xF4:
     VAR_3 = 0x8F;
     break;
    default:
     VAR_3 = 0xBF;
     break;
   }
   if (VAR_2 < VAR_3)
   {
    VAR_0[1]++;
    break;
   }

  case 1:
   VAR_2 = *VAR_0;
   if (VAR_2 == 0x7F || VAR_2 == 0xDF || VAR_2 == 0xEF || VAR_2 == 0xF4)
    return 0;
   VAR_0[0]++;
   break;
 }

 return 1;
}
