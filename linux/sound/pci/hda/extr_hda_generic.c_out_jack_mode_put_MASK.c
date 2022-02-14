
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_2(VAR_2);
 hda_nid_t VAR_5 = VAR_2->private_value;
 unsigned int VAR_6;

 VAR_6 = VAR_3->value.enumerated.item[0] ? VAR_0 : VAR_1;
 if (FUNC_0(VAR_4, VAR_5) == VAR_6)
  return 0;
 FUNC_1(VAR_4, VAR_5, VAR_6);
 return 1;
}
