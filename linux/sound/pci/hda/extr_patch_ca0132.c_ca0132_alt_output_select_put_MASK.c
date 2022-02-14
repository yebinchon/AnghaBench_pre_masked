
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
struct ca0132_spec {int out_enum_val; unsigned int* vnode_lswitch; } ;
struct TYPE_6__ {int name; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,char*,int,int ) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_4,
    struct snd_ctl_elem_value *VAR_5)
{
 struct hda_codec *VAR_6 = FUNC_2(VAR_4);
 struct ca0132_spec *VAR_7 = VAR_6->spec;
 int VAR_8 = VAR_5->value.enumerated.item[0];
 unsigned int VAR_9 = VAR_0;
 unsigned int VAR_10;

 if (VAR_8 >= VAR_9)
  return 0;

 FUNC_1(VAR_6, "ca0132_alt_output_select: sel=%d, preset=%s\n",
      VAR_8, VAR_3[VAR_8].name);

 VAR_7->out_enum_val = VAR_8;

 VAR_10 = VAR_7->vnode_lswitch[VAR_1 - VAR_2];

 if (!VAR_10)
  FUNC_0(VAR_6);

 return 1;
}
