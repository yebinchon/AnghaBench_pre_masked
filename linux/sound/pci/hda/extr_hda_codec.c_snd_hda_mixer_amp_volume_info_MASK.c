
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int name; } ;
struct snd_kcontrol {TYPE_3__ id; } ;
struct TYPE_4__ {int max; scalar_t__ min; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int ) ;
 int FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct hda_codec*,int ,int,unsigned int) ;
 int FUNC_4 (struct snd_kcontrol*) ;
 unsigned int FUNC_5 (struct snd_kcontrol*) ;
 struct hda_codec* FUNC_6 (struct snd_kcontrol*) ;

int FUNC_7(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_info *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_6(VAR_2);
 u16 VAR_5 = FUNC_4(VAR_2);
 u8 VAR_6 = FUNC_1(VAR_2);
 int VAR_7 = FUNC_2(VAR_2);
 unsigned int VAR_8 = FUNC_5(VAR_2);

 VAR_3->type = VAR_1;
 VAR_3->count = VAR_6 == 3 ? 2 : 1;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_8);
 if (!VAR_3->value.integer.max) {
  FUNC_0(VAR_4,
      "num_steps = 0 for NID=0x%x (ctl = %s)\n",
      VAR_5, VAR_2->id.name);
  return -VAR_0;
 }
 return 0;
}
