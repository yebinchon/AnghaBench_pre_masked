
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ,unsigned int) ;
 struct hda_codec* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_5(VAR_1);
 hda_nid_t VAR_4 = VAR_1->private_value;
 unsigned int VAR_5 = FUNC_1(VAR_3, VAR_4);
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_5, VAR_6 & VAR_0);
 if (VAR_7 == VAR_2->value.enumerated.item[0])
  return 0;

 VAR_6 &= ~VAR_0;
 VAR_6 |= FUNC_2(VAR_5, VAR_2->value.enumerated.item[0]);
 FUNC_4(VAR_3, VAR_4, VAR_6);
 return 1;
}
