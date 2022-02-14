
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int id; } ;
__attribute__((used)) static int FUNC_0(struct snd_ac97 *VAR_0, unsigned short VAR_1)
{

 switch (VAR_0->id) {
 case 128:
  if (VAR_1 == 0x08)
   return 0;

 case 136:
  if (VAR_1 == 0x22 || VAR_1 == 0x7a)
   return 1;

 case 138:
 case 137:
  if (VAR_1 <= 0x1c || VAR_1 == 0x20 || VAR_1 == 0x26 || VAR_1 >= 0x7c)
   return 1;
  return 0;
 case 145:
 case 144:
 case 143:
  if (VAR_1 >= 0x3a && VAR_1 <= 0x6e)
   return 0;
  return 1;
 case 142:
 case 141:
 case 140:
 case 139:
  if (VAR_1 == 0x5a)
   return 1;
  if (VAR_1 >= 0x3c && VAR_1 <= 0x6e)
   return 0;
  return 1;
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  if (VAR_1 <= 0x3a || VAR_1 >= 0x5a)
   return 1;
  return 0;
 }
 return 1;
}
