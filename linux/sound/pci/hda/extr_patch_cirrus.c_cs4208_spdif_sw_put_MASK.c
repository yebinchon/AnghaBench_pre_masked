
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_7__ {scalar_t__* value; } ;
struct TYPE_8__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_5__ {int * dig_out_pins; } ;
struct TYPE_6__ {TYPE_1__ autocfg; } ;
struct cs_spec {int (* spdif_sw_put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;TYPE_2__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_1(VAR_1);
 struct cs_spec *VAR_4 = VAR_3->spec;
 hda_nid_t VAR_5 = VAR_4->gen.autocfg.dig_out_pins[0];
 int VAR_6 = VAR_2->value.integer.value[0] ? VAR_0 : 0;

 FUNC_0(VAR_3, VAR_5, VAR_6);
 return VAR_4->spdif_sw_put(VAR_1, VAR_2);
}
