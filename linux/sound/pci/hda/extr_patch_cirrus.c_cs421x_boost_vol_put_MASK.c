
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_2(VAR_1);

 unsigned int VAR_4 = VAR_2->value.integer.value[0];
 unsigned int VAR_5 =
  FUNC_0(VAR_3, VAR_0);
 unsigned int VAR_6 = VAR_5;

 VAR_5 &= ~0x0003;
 VAR_5 |= (VAR_4 & 0x0003);
 if (VAR_6 == VAR_5)
  return 0;
 else {
  FUNC_1(VAR_3, VAR_0, VAR_5);
  return 1;
 }
}
