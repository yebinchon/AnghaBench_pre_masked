
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_info*,int,char const* const*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_info *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_2(VAR_0);
 static const char * const VAR_3[] = {
  "PCM", "ADC1", "ADC2", "ADC3",
 };
 int VAR_4 = FUNC_1(VAR_2, 0x0b) + 1;
 if (VAR_4 > 4)
  VAR_4 = 4;
 return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3);
}
