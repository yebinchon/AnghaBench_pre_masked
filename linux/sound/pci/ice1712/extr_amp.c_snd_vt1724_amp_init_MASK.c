
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; TYPE_1__ eeprom; } ;


 unsigned int FUNC_0 (unsigned short const*) ;
 scalar_t__ VAR_0 ;




 int FUNC_1 (struct snd_ice1712*,unsigned short const,unsigned short const) ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_1)
{
 static const unsigned short VAR_2[] = {
  131, 0x0000,
  130, 0x0000,
  129, 0x0008,
  128, 0x0001,
 };

 unsigned int VAR_3;




 VAR_1->num_total_dacs = 6;
 VAR_1->num_total_adcs = 2;




 if (VAR_1->eeprom.subvendor == VAR_0) {
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3 += 2)
   FUNC_1(VAR_1, VAR_2[VAR_3], VAR_2[VAR_3+1]);
 }

 return 0;
}
