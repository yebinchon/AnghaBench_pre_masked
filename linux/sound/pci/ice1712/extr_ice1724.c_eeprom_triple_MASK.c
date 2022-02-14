
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* data; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct snd_ice1712 *VAR_0, int VAR_1)
{
 return (unsigned int)VAR_0->eeprom.data[VAR_1] | ((unsigned int)VAR_0->eeprom.data[VAR_1 + 1] << 8) | ((unsigned int)VAR_0->eeprom.data[VAR_1 + 2] << 16);


}
