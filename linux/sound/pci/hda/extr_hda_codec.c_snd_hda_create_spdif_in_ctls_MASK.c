
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {scalar_t__ name; } ;
struct snd_kcontrol {int private_value; } ;
struct hda_codec {int spdif_in_enable; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 struct snd_kcontrol_new* VAR_4 ;
 int FUNC_1 (struct hda_codec*,char*,int ) ;
 struct snd_kcontrol* FUNC_2 (struct snd_kcontrol_new*,struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int ,struct snd_kcontrol*) ;

int FUNC_5(struct hda_codec *VAR_5, hda_nid_t VAR_6)
{
 int VAR_7;
 struct snd_kcontrol *VAR_8;
 struct snd_kcontrol_new *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, "IEC958 Capture Switch", 0);
 if (VAR_10 < 0) {
  FUNC_0(VAR_5, "too many IEC958 inputs\n");
  return -VAR_2;
 }
 for (VAR_9 = VAR_4; VAR_9->name; VAR_9++) {
  VAR_8 = FUNC_2(VAR_9, VAR_5);
  if (!VAR_8)
   return -VAR_3;
  VAR_8->private_value = VAR_6;
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
 }
 VAR_5->spdif_in_enable =
  FUNC_3(VAR_5, VAR_6, 0,
       VAR_1, 0) &
  VAR_0;
 return 0;
}
