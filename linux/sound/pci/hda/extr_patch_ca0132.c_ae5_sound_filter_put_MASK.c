
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int ae5_filter_val; } ;
struct TYPE_6__ {int val; int name; } ;


 unsigned int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int,int ) ;
 int FUNC_1 (struct hda_codec*,char*,int ) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_2(VAR_2);
 struct ca0132_spec *VAR_5 = VAR_4->spec;
 int VAR_6 = VAR_3->value.enumerated.item[0];
 unsigned int VAR_7 = VAR_0;

 if (VAR_6 >= VAR_7)
  return 0;

 FUNC_1(VAR_4, "ae5_sound_filter: %s\n",
   VAR_1[VAR_6].name);

 VAR_5->ae5_filter_val = VAR_6;

 FUNC_0(VAR_4, 0x48, 0x07,
   VAR_1[VAR_6].val);

 return 1;
}
