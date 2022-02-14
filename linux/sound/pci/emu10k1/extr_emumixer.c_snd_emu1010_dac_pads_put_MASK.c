
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {unsigned int dac_pads; } ;
struct snd_emu10k1 {TYPE_2__ emu1010; } ;
struct TYPE_6__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emu10k1*,int ,unsigned int) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_emu10k1 *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = VAR_1->private_value & 0xff;
 unsigned int VAR_5, VAR_6;
 VAR_5 = VAR_2->value.integer.value[0];
 VAR_6 = VAR_3->emu1010.dac_pads;
 if (VAR_5 == 1)
  VAR_6 = VAR_6 | VAR_4;
 else
  VAR_6 = VAR_6 & ~VAR_4;
 if (VAR_6 != VAR_3->emu1010.dac_pads) {
  FUNC_0(VAR_3, VAR_0, VAR_6 );
         VAR_3->emu1010.dac_pads = VAR_6;
 }

 return 0;
}
