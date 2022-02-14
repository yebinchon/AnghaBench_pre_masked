
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
struct hda_codec {int control_mutex; struct ca0132_spec* spec; } ;
struct ca0132_spec {long* vnode_lvol; long* vnode_rvol; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 struct hda_codec* FUNC_8 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_3,
    struct snd_ctl_elem_value *VAR_4)
{
 struct hda_codec *VAR_5 = FUNC_8(VAR_3);
 struct ca0132_spec *VAR_6 = VAR_5->spec;
 hda_nid_t VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = FUNC_1(VAR_3);
 long *VAR_9 = VAR_4->value.integer.value;
 hda_nid_t VAR_10 = 0;
 int VAR_11;

 switch (VAR_7) {
 case 0x02:
  VAR_10 = VAR_1;
  break;
 case 0x07:
  VAR_10 = VAR_0;
  break;
 }


 if (VAR_8 & 1) {
  VAR_6->vnode_lvol[VAR_10 - VAR_2] = *VAR_9;
  VAR_9++;
 }
 if (VAR_8 & 2) {
  VAR_6->vnode_rvol[VAR_10 - VAR_2] = *VAR_9;
  VAR_9++;
 }

 FUNC_7(VAR_5);
 FUNC_0(VAR_5, VAR_10);
 FUNC_3(&VAR_5->control_mutex);
 VAR_11 = FUNC_5(VAR_3, VAR_4);
 FUNC_4(&VAR_5->control_mutex);
 FUNC_6(VAR_5);

 return VAR_11;
}
