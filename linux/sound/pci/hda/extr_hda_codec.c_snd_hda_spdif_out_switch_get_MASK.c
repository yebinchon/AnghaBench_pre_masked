
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_spdif_out {int ctls; } ;
struct TYPE_6__ {int used; } ;
struct hda_codec {int spdif_mutex; TYPE_3__ spdif_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hda_spdif_out* FUNC_3 (TYPE_3__*,int) ;
 struct hda_codec* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_4(VAR_2);
 int VAR_5 = VAR_2->private_value;
 struct hda_spdif_out *VAR_6;

 if (FUNC_0(VAR_4->spdif_out.used <= VAR_5))
  return -VAR_1;
 FUNC_1(&VAR_4->spdif_mutex);
 VAR_6 = FUNC_3(&VAR_4->spdif_out, VAR_5);
 VAR_3->value.integer.value[0] = VAR_6->ctls & VAR_0;
 FUNC_2(&VAR_4->spdif_mutex);
 return 0;
}
