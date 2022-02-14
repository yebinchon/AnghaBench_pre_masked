
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {unsigned int* status; } ;
struct TYPE_5__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_spdif_out {scalar_t__ nid; unsigned int status; int ctls; } ;
struct TYPE_6__ {int used; } ;
struct hda_codec {int spdif_mutex; TYPE_3__ spdif_out; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned short FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,unsigned short,unsigned short) ;
 struct hda_spdif_out* FUNC_5 (TYPE_3__*,int) ;
 struct hda_codec* FUNC_6 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_6(VAR_1);
 int VAR_4 = VAR_1->private_value;
 struct hda_spdif_out *VAR_5;
 hda_nid_t VAR_6;
 unsigned short VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_3->spdif_out.used <= VAR_4))
  return -VAR_0;
 FUNC_2(&VAR_3->spdif_mutex);
 VAR_5 = FUNC_5(&VAR_3->spdif_out, VAR_4);
 VAR_6 = VAR_5->nid;
 VAR_5->status = VAR_2->value.iec958.status[0] |
  ((unsigned int)VAR_2->value.iec958.status[1] << 8) |
  ((unsigned int)VAR_2->value.iec958.status[2] << 16) |
  ((unsigned int)VAR_2->value.iec958.status[3] << 24);
 VAR_7 = FUNC_1(VAR_5->status);
 VAR_7 |= VAR_5->ctls & 1;
 VAR_8 = VAR_5->ctls != VAR_7;
 VAR_5->ctls = VAR_7;
 if (VAR_8 && VAR_6 != (u16)-1)
  FUNC_4(VAR_3, VAR_6, VAR_7 & 0xff, (VAR_7 >> 8) & 0xff);
 FUNC_3(&VAR_3->spdif_mutex);
 return VAR_8;
}
