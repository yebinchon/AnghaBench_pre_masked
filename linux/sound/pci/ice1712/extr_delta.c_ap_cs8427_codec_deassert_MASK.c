
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;






 unsigned char VAR_5 ;
 int FUNC_0 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_6, unsigned char VAR_7)
{
 switch (VAR_6->eeprom.subvendor) {
 case 132:
 case 131:
  VAR_7 &= ~VAR_0;
  VAR_7 |= VAR_1;
  break;
 case 133:
 case 130:
  VAR_7 |= VAR_3;
  break;
 case 129:
  VAR_7 |= VAR_2;
  break;
 case 128:
  VAR_7 |= VAR_5;
  break;
 }
 FUNC_0(VAR_6, VAR_4, VAR_7);
}
