
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {scalar_t__ private_value; } ;
struct hda_gen_spec {scalar_t__ hp_mic_pin; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int name ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,scalar_t__,char*,int) ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 int VAR_2 ;
 struct snd_kcontrol_new* FUNC_2 (struct hda_gen_spec*,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_3, int VAR_4,
     hda_nid_t *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_3->spec;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  hda_nid_t VAR_8 = VAR_5[VAR_7];
  if (VAR_8 == VAR_6->hp_mic_pin)
   continue;
  if (FUNC_1(VAR_3, VAR_8) > 1) {
   struct snd_kcontrol_new *VAR_9;
   char VAR_10[VAR_1];
   FUNC_0(VAR_3, VAR_8, VAR_10, sizeof(VAR_10));
   VAR_9 = FUNC_2(VAR_6, VAR_10,
          &VAR_2);
   if (!VAR_9)
    return -VAR_0;
   VAR_9->private_value = VAR_8;
  }
 }

 return 0;
}
