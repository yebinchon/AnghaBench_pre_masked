
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ca0106 {unsigned int* spi_dac_reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_ca0106*,unsigned int) ;
 struct snd_ca0106* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
   struct snd_ctl_elem_value *VAR_4)
{
 struct snd_ca0106 *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6 = VAR_3->private_value >> VAR_2;
 unsigned int VAR_7 = VAR_3->private_value & VAR_1;
 int VAR_8;

 VAR_8 = VAR_5->spi_dac_reg[VAR_6] & VAR_7;
 if (VAR_4->value.integer.value[0]) {
  if (!VAR_8)
   return 0;
  VAR_5->spi_dac_reg[VAR_6] &= ~VAR_7;
 } else {
  if (VAR_8)
   return 0;
  VAR_5->spi_dac_reg[VAR_6] |= VAR_7;
 }

 VAR_8 = FUNC_0(VAR_5, VAR_5->spi_dac_reg[VAR_6]);
 return VAR_8 ? -VAR_0 : 1;
}
