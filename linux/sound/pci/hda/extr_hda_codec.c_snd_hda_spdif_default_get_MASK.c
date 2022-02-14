
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* status; } ;
struct TYPE_5__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_spdif_out {int status; } ;
struct TYPE_6__ {int used; } ;
struct hda_codec {int spdif_mutex; TYPE_3__ spdif_out; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hda_spdif_out* FUNC_3 (TYPE_3__*,int) ;
 struct hda_codec* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = VAR_1->private_value;
 struct hda_spdif_out *VAR_5;

 if (FUNC_0(VAR_3->spdif_out.used <= VAR_4))
  return -VAR_0;
 FUNC_1(&VAR_3->spdif_mutex);
 VAR_5 = FUNC_3(&VAR_3->spdif_out, VAR_4);
 VAR_2->value.iec958.status[0] = VAR_5->status & 0xff;
 VAR_2->value.iec958.status[1] = (VAR_5->status >> 8) & 0xff;
 VAR_2->value.iec958.status[2] = (VAR_5->status >> 16) & 0xff;
 VAR_2->value.iec958.status[3] = (VAR_5->status >> 24) & 0xff;
 FUNC_2(&VAR_3->spdif_mutex);

 return 0;
}
