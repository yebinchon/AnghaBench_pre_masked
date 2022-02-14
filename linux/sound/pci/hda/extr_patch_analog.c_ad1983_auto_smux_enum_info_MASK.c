
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_3__ {int dig_out_nid; } ;
struct TYPE_4__ {TYPE_1__ multiout; } ;
struct ad198x_spec {TYPE_2__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_info*,int,char const* const*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_info *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_2(VAR_1);
 struct ad198x_spec *VAR_4 = VAR_3->spec;
 static const char * const VAR_5[] = { "PCM", "ADC" };
 static const char * const VAR_6[] = { "PCM", "ADC1", "ADC2" };
 hda_nid_t VAR_7 = VAR_4->gen.multiout.dig_out_nid;
 int VAR_8 = FUNC_1(VAR_3, VAR_7);

 if (VAR_8 == 2)
  return FUNC_0(VAR_1, VAR_2, 2, VAR_5);
 else if (VAR_8 == 3)
  return FUNC_0(VAR_1, VAR_2, 3, VAR_6);
 else
  return -VAR_0;
}
