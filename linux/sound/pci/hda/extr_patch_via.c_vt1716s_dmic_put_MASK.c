
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via_spec {int dmic_enabled; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct via_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_1(VAR_1);
 struct via_spec *VAR_4 = VAR_3->spec;
 int VAR_5 = *VAR_2->value.integer.value;

 FUNC_0(VAR_3, 0x26, 0,
            VAR_0, VAR_5);
 VAR_4->dmic_enabled = VAR_5;
 return 1;
}
