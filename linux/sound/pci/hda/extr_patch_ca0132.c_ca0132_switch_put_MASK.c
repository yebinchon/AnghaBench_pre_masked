
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
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {long* vnode_lswitch; long* vnode_rswitch; long* effects_switch; scalar_t__* input_pins; long cur_mic_boost; scalar_t__ in_enum_val; scalar_t__ cur_mic_type; long zxr_gain_set; scalar_t__ cur_out_type; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,long) ;
 int FUNC_2 (struct hda_codec*,long) ;
 int FUNC_3 (struct hda_codec*) ;
 scalar_t__ FUNC_4 (struct ca0132_spec*) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_6 (struct hda_codec*,char*,scalar_t__,long) ;
 int FUNC_7 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_8 (struct snd_kcontrol*) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 struct hda_codec* FUNC_11 (struct snd_kcontrol*) ;
 int FUNC_12 (struct hda_codec*,long) ;

__attribute__((used)) static int FUNC_13(struct snd_kcontrol *VAR_13,
        struct snd_ctl_elem_value *VAR_14)
{
 struct hda_codec *VAR_15 = FUNC_11(VAR_13);
 struct ca0132_spec *VAR_16 = VAR_15->spec;
 hda_nid_t VAR_17 = FUNC_8(VAR_13);
 int VAR_18 = FUNC_7(VAR_13);
 long *VAR_19 = VAR_14->value.integer.value;
 int VAR_20 = 1;

 FUNC_6(VAR_15, "ca0132_switch_put: nid=0x%x, val=%ld\n",
      VAR_17, *VAR_19);

 FUNC_10(VAR_15);

 if ((VAR_17 >= VAR_11) && (VAR_17 < VAR_10)) {
  if (VAR_18 & 1) {
   VAR_16->vnode_lswitch[VAR_17 - VAR_11] = *VAR_19;
   VAR_19++;
  }
  if (VAR_18 & 2) {
   VAR_16->vnode_rswitch[VAR_17 - VAR_11] = *VAR_19;
   VAR_19++;
  }
  VAR_20 = FUNC_5(VAR_13, VAR_14);
  goto exit;
 }


 if (VAR_17 == VAR_8) {
  VAR_16->effects_switch[VAR_17 - VAR_2] = *VAR_19;
  VAR_20 = FUNC_3(VAR_15);
  goto exit;
 }


 if (VAR_17 == VAR_0) {
  VAR_16->effects_switch[VAR_17 - VAR_2] = *VAR_19;
  VAR_20 = FUNC_0(VAR_15);
  goto exit;
 }


 if (((VAR_17 >= VAR_7) && (VAR_17 < VAR_6)) ||
     ((VAR_17 >= VAR_5) && (VAR_17 < VAR_4))) {
  VAR_16->effects_switch[VAR_17 - VAR_2] = *VAR_19;
  VAR_20 = FUNC_1(VAR_15, VAR_17, *VAR_19);
  goto exit;
 }


 if (VAR_17 == VAR_16->input_pins[0]) {
  VAR_16->cur_mic_boost = *VAR_19;
  if (FUNC_4(VAR_16)) {
   if (VAR_16->in_enum_val != VAR_9)
    VAR_20 = FUNC_2(VAR_15, *VAR_19);
  } else {

   if (VAR_16->cur_mic_type != VAR_1)
    VAR_20 = FUNC_2(VAR_15, *VAR_19);
  }

  goto exit;
 }

 if (VAR_17 == VAR_12) {
  VAR_16->zxr_gain_set = *VAR_19;
  if (VAR_16->cur_out_type == VAR_3)
   VAR_20 = FUNC_12(VAR_15, *VAR_19);
  else
   VAR_20 = 0;

  goto exit;
 }

exit:
 FUNC_9(VAR_15);
 return VAR_20;
}
