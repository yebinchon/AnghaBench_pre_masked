
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {long* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct hda_beep* beep; } ;
struct hda_beep {int dummy; } ;


 int FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct hda_codec*,int) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct hda_codec* FUNC_4 (struct snd_kcontrol*) ;

int FUNC_5(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_4(VAR_0);
 struct hda_beep *VAR_3 = VAR_2->beep;
 if (VAR_3) {
  u8 VAR_4 = FUNC_1(VAR_0);
  int VAR_5 = 0;
  long *VAR_6 = VAR_1->value.integer.value;
  if (VAR_4 & 1) {
   VAR_5 |= *VAR_6;
   VAR_6++;
  }
  if (VAR_4 & 2)
   VAR_5 |= *VAR_6;
  FUNC_2(VAR_2, VAR_5);
 }
 if (!FUNC_0(VAR_0))
  return 0;
 return FUNC_3(VAR_0, VAR_1);
}
