
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
struct snd_ac97 {int power_up; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_ac97*,int,struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_ac97*,int,unsigned short,unsigned short) ;
 struct snd_ac97* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_ac97*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ac97 *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = VAR_1->private_value & 0xff;
 int VAR_5 = (VAR_1->private_value >> 8) & 0x0f;
 int VAR_6 = (VAR_1->private_value >> 12) & 0x0f;
 int VAR_7 = (VAR_1->private_value >> 16) & 0xff;
 int VAR_8 = (VAR_1->private_value >> 24) & 0x01;
 int VAR_9, VAR_10;
 unsigned short VAR_11, VAR_12, VAR_13;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_1);
 VAR_11 = (VAR_2->value.integer.value[0] & VAR_7);
 if (VAR_8)
  VAR_11 = VAR_7 - VAR_11;
 VAR_13 = VAR_7 << VAR_5;
 VAR_11 = VAR_11 << VAR_5;
 if (VAR_5 != VAR_6) {
  VAR_12 = (VAR_2->value.integer.value[1] & VAR_7);
  if (VAR_8)
   VAR_12 = VAR_7 - VAR_12;
  VAR_13 |= VAR_7 << VAR_6;
  VAR_11 |= VAR_12 << VAR_6;
 }
 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_13, VAR_11);
 FUNC_0(VAR_3, VAR_10);
 return VAR_9;
}
