
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ca0106 {unsigned int* spi_dac_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct snd_ca0106* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
   struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ca0106 *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = VAR_2->private_value >> VAR_1;
 unsigned int VAR_6 = VAR_2->private_value & VAR_0;

 VAR_3->value.integer.value[0] = !(VAR_4->spi_dac_reg[VAR_5] & VAR_6);
 return 0;
}
