
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
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;






 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned char FUNC_3(struct snd_ice1712 *VAR_15)
{
 unsigned char VAR_16;
 VAR_16 = FUNC_0(VAR_15, VAR_10);
 switch (VAR_15->eeprom.subvendor) {
 case 132:
 case 131:
  VAR_16 &= ~VAR_1;
  VAR_16 |= VAR_0 | VAR_2;
  break;
 case 133:
 case 130:
  VAR_16 |= VAR_7 | VAR_8;
  VAR_16 &= ~VAR_9;
  break;
 case 129:
  VAR_16 |= VAR_3 | VAR_4 |
         VAR_5;
  VAR_16 &= ~VAR_6;
  break;
 case 128:
  VAR_16 |= VAR_11 | VAR_12 | VAR_13;
  VAR_16 &= ~VAR_14;
  break;
 }
 FUNC_1(VAR_15, VAR_10, VAR_16);
 FUNC_2(5);
 return VAR_16;
}
