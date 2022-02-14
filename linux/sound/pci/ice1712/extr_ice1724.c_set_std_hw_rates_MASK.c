
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* data; } ;
struct snd_ice1712 {int * hw_rates; int vt1720; TYPE_1__ eeprom; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct snd_ice1712 *VAR_6)
{
 if (VAR_6->eeprom.data[VAR_0] & VAR_2) {


  if ((VAR_6->eeprom.data[VAR_1] & 0x08) && !VAR_6->vt1720)
   VAR_6->hw_rates = &VAR_3;
  else
   VAR_6->hw_rates = &VAR_5;
 } else {

  VAR_6->hw_rates = &VAR_4;
 }
}
