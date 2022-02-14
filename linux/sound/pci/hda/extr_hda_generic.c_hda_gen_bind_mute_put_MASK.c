
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {unsigned long private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_codec {int control_mutex; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;
 int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0;

 FUNC_4(VAR_2, VAR_3);

 FUNC_0(&VAR_4->control_mutex);
 VAR_5 = VAR_2->private_value;
 VAR_7 = (VAR_5 & VAR_0) >> VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_2->private_value = (VAR_5 & ~VAR_0) |
   (VAR_6 << VAR_1);
  VAR_8 = FUNC_2(VAR_2, VAR_3);
  if (VAR_8 < 0)
   break;
  VAR_9 |= VAR_8;
 }
 VAR_2->private_value = VAR_5;
 FUNC_1(&VAR_4->control_mutex);
 return VAR_8 < 0 ? VAR_8 : VAR_9;
}
