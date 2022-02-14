
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_7__ {int dig_out_nid; } ;
struct TYPE_8__ {TYPE_3__ multiout; } ;
struct ad198x_spec {unsigned int cur_smux; TYPE_4__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_2(VAR_2);
 struct ad198x_spec *VAR_5 = VAR_4->spec;
 unsigned int VAR_6 = VAR_3->value.enumerated.item[0];
 hda_nid_t VAR_7 = VAR_5->gen.multiout.dig_out_nid;
 int VAR_8 = FUNC_1(VAR_4, VAR_7);

 if (VAR_6 >= VAR_8)
  return -VAR_1;
 if (VAR_5->cur_smux == VAR_6)
  return 0;
 VAR_5->cur_smux = VAR_6;
 FUNC_0(VAR_4, VAR_7, 0,
      VAR_0, VAR_6);
 return 1;
}
