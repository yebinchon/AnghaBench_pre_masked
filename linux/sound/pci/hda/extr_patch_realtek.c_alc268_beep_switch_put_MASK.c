
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {unsigned long private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_codec {int control_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->control_mutex);
 VAR_3 = VAR_0->private_value;
 VAR_0->private_value = (VAR_3 & ~0xff) | 0x0f;
 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 >= 0) {
  VAR_0->private_value = (VAR_3 & ~0xff) | 0x10;
  VAR_4 = FUNC_2(VAR_0, VAR_1);
 }
 VAR_0->private_value = VAR_3;
 FUNC_1(&VAR_2->control_mutex);
 return VAR_4;
}
