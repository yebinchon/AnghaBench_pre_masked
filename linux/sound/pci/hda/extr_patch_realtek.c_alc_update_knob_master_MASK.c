
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int (* put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;} ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_jack_callback {int nid; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 struct snd_kcontrol* FUNC_3 (struct hda_codec*,char*) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_3,
       struct hda_jack_callback *VAR_4)
{
 unsigned int VAR_5;
 struct snd_kcontrol *VAR_6;
 struct snd_ctl_elem_value *VAR_7;

 VAR_6 = FUNC_3(VAR_3, "Master Playback Volume");
 if (!VAR_6)
  return;
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return;
 VAR_5 = FUNC_2(VAR_3, VAR_4->nid, 0,
     VAR_0, 0);
 VAR_5 &= VAR_2;
 VAR_7->value.integer.value[0] = VAR_5;
 VAR_7->value.integer.value[1] = VAR_5;
 VAR_6->put(VAR_6, VAR_7);
 FUNC_0(VAR_7);
}
