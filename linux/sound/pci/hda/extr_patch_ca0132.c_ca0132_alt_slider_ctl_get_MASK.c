
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {long* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {long* fx_ctl_val; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_1(VAR_1);
 struct ca0132_spec *VAR_4 = VAR_3->spec;
 hda_nid_t VAR_5 = FUNC_0(VAR_1);
 long *VAR_6 = VAR_2->value.integer.value;
 int VAR_7 = VAR_5 - VAR_0;

 *VAR_6 = VAR_4->fx_ctl_val[VAR_7];
 return 0;
}
