
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {unsigned long private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_codec {int control_mutex; struct ca0132_spec* spec; } ;
struct ca0132_spec {int* vnode_lswitch; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned long FUNC_0 (scalar_t__,int,int ,int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 scalar_t__ FUNC_5 (struct ca0132_spec*) ;
 int FUNC_6 (struct snd_kcontrol*) ;
 int FUNC_7 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_8 (struct snd_kcontrol*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct hda_codec* FUNC_12 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_13(struct snd_kcontrol *VAR_5,
    struct snd_ctl_elem_value *VAR_6)
{
 struct hda_codec *VAR_7 = FUNC_12(VAR_5);
 hda_nid_t VAR_8 = FUNC_8(VAR_5);
 hda_nid_t VAR_9 = 0;
 bool VAR_10;
 int VAR_11 = 0;
 struct ca0132_spec *VAR_12 = VAR_7->spec;
 int VAR_13;

 if (VAR_8 == VAR_3) {
  VAR_13 =
   VAR_12->vnode_lswitch[VAR_2 - VAR_4];
  if (!VAR_13) {
   if (FUNC_5(VAR_12))
    FUNC_1(VAR_7);
   else
    FUNC_4(VAR_7);
  }
  return 1;
 }

 if (VAR_8 == VAR_1) {
  VAR_13 =
   VAR_12->vnode_lswitch[VAR_0 - VAR_4];
  if (!VAR_13)
   FUNC_3(VAR_7);
  return 1;
 }

 if (VAR_8 == VAR_2) {
  if (FUNC_5(VAR_12))
   FUNC_1(VAR_7);
  else
   FUNC_4(VAR_7);
  return 1;
 }

 if (VAR_8 == VAR_0) {
  FUNC_3(VAR_7);
  return 1;
 }


 VAR_10 = FUNC_2(VAR_7, VAR_8, &VAR_9);
 if (VAR_10) {
  int VAR_14 = FUNC_7(VAR_5);
  int VAR_15 = FUNC_6(VAR_5);
  unsigned long VAR_16;

  FUNC_9(&VAR_7->control_mutex);
  VAR_16 = VAR_5->private_value;
  VAR_5->private_value = FUNC_0(VAR_9, VAR_15,
        0, VAR_14);
  VAR_11 = FUNC_11(VAR_5, VAR_6);
  VAR_5->private_value = VAR_16;
  FUNC_10(&VAR_7->control_mutex);
 }

 return VAR_11;
}
