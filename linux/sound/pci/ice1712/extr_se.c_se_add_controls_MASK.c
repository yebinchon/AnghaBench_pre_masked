
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_1(struct snd_ice1712 *VAR_1)
{
 int VAR_2;

 VAR_2 = 0;

 if (VAR_1->eeprom.subvendor == VAR_0)
  VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
