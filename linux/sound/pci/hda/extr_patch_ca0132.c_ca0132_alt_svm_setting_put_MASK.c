
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int smart_volume_setting; } ;
struct TYPE_6__ {int * reqs; int mid; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (struct hda_codec*,char*,int,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,unsigned int) ;
 int * VAR_7 ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_8,
    struct snd_ctl_elem_value *VAR_9)
{
 struct hda_codec *VAR_10 = FUNC_2(VAR_8);
 struct ca0132_spec *VAR_11 = VAR_10->spec;
 int VAR_12 = VAR_9->value.enumerated.item[0];
 unsigned int VAR_13 = VAR_4;
 unsigned int VAR_14 = VAR_5 - VAR_0;
 unsigned int VAR_15;

 if (VAR_12 >= VAR_13)
  return 0;

 FUNC_0(VAR_10, "ca0132_alt_svm_setting: sel=%d, preset=%s\n",
      VAR_12, VAR_7[VAR_12]);

 VAR_11->smart_volume_setting = VAR_12;

 switch (VAR_12) {
 case 0:
  VAR_15 = VAR_3;
  break;
 case 1:
  VAR_15 = VAR_1;
  break;
 case 2:
  VAR_15 = VAR_2;
  break;
 default:
  VAR_15 = VAR_3;
  break;
 }

 FUNC_1(VAR_10, VAR_6[VAR_14].mid,
   VAR_6[VAR_14].reqs[2], VAR_15);
 return 1;
}
