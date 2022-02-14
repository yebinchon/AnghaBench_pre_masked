
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct nid_path {int dummy; } ;
struct hda_codec {int control_mutex; struct ad198x_spec* spec; } ;
struct ad198x_spec {unsigned int cur_smux; int * smux_paths; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*,struct nid_path*,int,int) ;
 int FUNC_3 (struct hda_codec*,int) ;
 struct nid_path* FUNC_4 (struct hda_codec*,int ) ;
 struct hda_codec* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_5(VAR_1);
 struct ad198x_spec *VAR_4 = VAR_3->spec;
 unsigned int VAR_5 = VAR_2->value.enumerated.item[0];
 struct nid_path *VAR_6;
 int VAR_7 = FUNC_3(VAR_3, 0x0b) + 1;

 if (VAR_5 >= VAR_7)
  return -VAR_0;
 if (VAR_4->cur_smux == VAR_5)
  return 0;

 FUNC_0(&VAR_3->control_mutex);
 VAR_6 = FUNC_4(VAR_3,
      VAR_4->smux_paths[VAR_4->cur_smux]);
 if (VAR_6)
  FUNC_2(VAR_3, VAR_6, 0, 1);
 VAR_6 = FUNC_4(VAR_3, VAR_4->smux_paths[VAR_5]);
 if (VAR_6)
  FUNC_2(VAR_3, VAR_6, 1, 1);
 VAR_4->cur_smux = VAR_5;
 FUNC_1(&VAR_3->control_mutex);
 return 1;
}
