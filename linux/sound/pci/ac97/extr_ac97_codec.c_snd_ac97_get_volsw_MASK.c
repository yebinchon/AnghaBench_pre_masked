
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int dummy; } ;


 int FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_ac97*,int,struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_ac97*,int) ;
 struct snd_ac97* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ac97 *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = VAR_0->private_value & 0xff;
 int VAR_4 = (VAR_0->private_value >> 8) & 0x0f;
 int VAR_5 = (VAR_0->private_value >> 12) & 0x0f;
 int VAR_6 = (VAR_0->private_value >> 16) & 0xff;
 int VAR_7 = (VAR_0->private_value >> 24) & 0x01;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_0);
 VAR_1->value.integer.value[0] = (FUNC_2(VAR_2, VAR_3) >> VAR_4) & VAR_6;
 if (VAR_4 != VAR_5)
  VAR_1->value.integer.value[1] = (FUNC_2(VAR_2, VAR_3) >> VAR_5) & VAR_6;
 if (VAR_7) {
  VAR_1->value.integer.value[0] = VAR_6 - VAR_1->value.integer.value[0];
  if (VAR_4 != VAR_5)
   VAR_1->value.integer.value[1] = VAR_6 - VAR_1->value.integer.value[1];
 }
 FUNC_0(VAR_2, VAR_8);
 return 0;
}
