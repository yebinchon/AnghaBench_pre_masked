
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {TYPE_1__* mgr; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int max; int min; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;
struct TYPE_4__ {scalar_t__ is_hr_stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct snd_pcxhr* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_9,
     struct snd_ctl_elem_info *VAR_10)
{
 struct snd_pcxhr *VAR_11 = FUNC_0(VAR_9);

 VAR_10->type = VAR_8;
 VAR_10->count = 2;
 if (VAR_9->private_value == 0) {
     if (VAR_11->mgr->is_hr_stereo) {
  VAR_10->value.integer.min =
   VAR_3;
  VAR_10->value.integer.max =
   VAR_2;
     } else {
  VAR_10->value.integer.min =
   VAR_7;
  VAR_10->value.integer.max =
   VAR_6;
     }
 } else {
     if (VAR_11->mgr->is_hr_stereo) {
  VAR_10->value.integer.min =
   VAR_1;
  VAR_10->value.integer.max =
   VAR_0;
     } else {
  VAR_10->value.integer.min =
   VAR_5;
  VAR_10->value.integer.max =
   VAR_4;
     }
 }
 return 0;
}
