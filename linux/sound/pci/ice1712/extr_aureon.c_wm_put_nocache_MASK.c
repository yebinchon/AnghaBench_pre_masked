
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_ice1712*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_4, int VAR_5, unsigned short VAR_6)
{
 FUNC_0(VAR_4,
    ((VAR_4->eeprom.subvendor == VAR_2 ||
      VAR_4->eeprom.subvendor == VAR_3) ?
    VAR_1 : VAR_0),
   (VAR_5 << 9) | (VAR_6 & 0x1ff), 16);
}
