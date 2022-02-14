
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {long* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*) ;
 unsigned int FUNC_4 (struct snd_kcontrol*) ;
 void* FUNC_5 (struct hda_codec*,int ,int,int,int,unsigned int) ;
 struct hda_codec* FUNC_6 (struct snd_kcontrol*) ;

int FUNC_7(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_6(VAR_0);
 hda_nid_t VAR_3 = FUNC_3(VAR_0);
 int VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = FUNC_1(VAR_0);
 int VAR_6 = FUNC_2(VAR_0);
 unsigned int VAR_7 = FUNC_4(VAR_0);
 long *VAR_8 = VAR_1->value.integer.value;

 if (VAR_4 & 1)
  *VAR_8++ = FUNC_5(VAR_2, VAR_3, 0, VAR_5, VAR_6, VAR_7);
 if (VAR_4 & 2)
  *VAR_8 = FUNC_5(VAR_2, VAR_3, 1, VAR_5, VAR_6, VAR_7);
 return 0;
}
