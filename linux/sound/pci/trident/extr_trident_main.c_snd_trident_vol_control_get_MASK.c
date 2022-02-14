
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident {unsigned int musicvol_wavevol; } ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_trident* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
           struct snd_ctl_elem_value *VAR_1)
{
 struct snd_trident *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;

 VAR_3 = VAR_2->musicvol_wavevol;
 VAR_1->value.integer.value[0] = 255 - ((VAR_3 >> VAR_0->private_value) & 0xff);
 VAR_1->value.integer.value[1] = 255 - ((VAR_3 >> (VAR_0->private_value + 8)) & 0xff);
 return 0;
}
