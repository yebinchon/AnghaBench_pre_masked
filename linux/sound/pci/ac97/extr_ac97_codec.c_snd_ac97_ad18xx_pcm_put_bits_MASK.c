
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
struct snd_ac97 {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ac97*,int,unsigned short,unsigned short) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ac97 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_1->private_value & 3;
 int VAR_5 = (VAR_1->private_value >> 8) & 0x0f;
 int VAR_6 = (VAR_1->private_value >> 12) & 0x0f;
 int VAR_7 = (VAR_1->private_value >> 16) & 0xff;
 unsigned short VAR_8, VAR_9;

 VAR_8 = (VAR_7 - (VAR_2->value.integer.value[0] & VAR_7)) << VAR_5;
 VAR_9 = VAR_7 << VAR_5;
 if (VAR_5 != VAR_6 && (VAR_3->flags & VAR_0)) {
  VAR_8 |= (VAR_7 - (VAR_2->value.integer.value[1] & VAR_7)) << VAR_6;
  VAR_9 |= VAR_7 << VAR_6;
 }
 return FUNC_0(VAR_3, VAR_4, VAR_9, VAR_8);
}
