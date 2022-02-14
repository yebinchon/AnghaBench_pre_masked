
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_oxfw {int unit; struct fw_spkr* spec; } ;
struct snd_kcontrol {struct snd_oxfw* private_data; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct fw_spkr {int mute; int mute_fb_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct snd_oxfw *VAR_3 = VAR_1->private_data;
 struct fw_spkr *VAR_4 = VAR_3->spec;
 bool VAR_5;
 int VAR_6;

 VAR_5 = !VAR_2->value.integer.value[0];

 if (VAR_5 == VAR_4->mute)
  return 0;

 VAR_6 = FUNC_0(VAR_3->unit, VAR_4->mute_fb_id, &VAR_5,
         VAR_0);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_4->mute = VAR_5;

 return 1;
}
