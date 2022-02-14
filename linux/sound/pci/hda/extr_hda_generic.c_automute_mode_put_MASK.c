
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_gen_spec {int automute_speaker; int automute_lo; int automute_speaker_possible; int automute_lo_possible; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_1(VAR_1);
 struct hda_gen_spec *VAR_4 = VAR_3->spec;

 switch (VAR_2->value.enumerated.item[0]) {
 case 0:
  if (!VAR_4->automute_speaker && !VAR_4->automute_lo)
   return 0;
  VAR_4->automute_speaker = 0;
  VAR_4->automute_lo = 0;
  break;
 case 1:
  if (VAR_4->automute_speaker_possible) {
   if (!VAR_4->automute_lo && VAR_4->automute_speaker)
    return 0;
   VAR_4->automute_speaker = 1;
   VAR_4->automute_lo = 0;
  } else if (VAR_4->automute_lo_possible) {
   if (VAR_4->automute_lo)
    return 0;
   VAR_4->automute_lo = 1;
  } else
   return -VAR_0;
  break;
 case 2:
  if (!VAR_4->automute_lo_possible || !VAR_4->automute_speaker_possible)
   return -VAR_0;
  if (VAR_4->automute_speaker && VAR_4->automute_lo)
   return 0;
  VAR_4->automute_speaker = 1;
  VAR_4->automute_lo = 1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_0(VAR_3);
 return 1;
}
