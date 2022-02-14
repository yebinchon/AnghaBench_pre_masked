
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct hda_vmaster_mute_hook {int sw_kctl; int mute_mode; struct hda_codec* codec; int hook; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct hda_vmaster_mute_hook*) ;
 struct snd_kcontrol* FUNC_1 (int *,struct hda_vmaster_mute_hook*) ;
 int FUNC_2 (struct hda_codec*,int ,struct snd_kcontrol*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct hda_codec *VAR_4,
        struct hda_vmaster_mute_hook *VAR_5,
        bool VAR_6)
{
 struct snd_kcontrol *VAR_7;

 if (!VAR_5->hook || !VAR_5->sw_kctl)
  return 0;
 VAR_5->codec = VAR_4;
 VAR_5->mute_mode = VAR_1;
 FUNC_0(VAR_5->sw_kctl, VAR_2, VAR_5);
 if (!VAR_6)
  return 0;
 VAR_7 = FUNC_1(&VAR_3, VAR_5);
 if (!VAR_7)
  return -VAR_0;
 return FUNC_2(VAR_4, 0, VAR_7);
}
