
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {unsigned int spdif_in_enable; int spdif_mutex; int core; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,unsigned int) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_3(VAR_1);
 hda_nid_t VAR_4 = VAR_1->private_value;
 unsigned int VAR_5 = !!VAR_2->value.integer.value[0];
 int VAR_6;

 FUNC_0(&VAR_3->spdif_mutex);
 VAR_6 = VAR_3->spdif_in_enable != VAR_5;
 if (VAR_6) {
  VAR_3->spdif_in_enable = VAR_5;
  FUNC_2(&VAR_3->core, VAR_4,
          VAR_0, VAR_5);
 }
 FUNC_1(&VAR_3->spdif_mutex);
 return VAR_6;
}
