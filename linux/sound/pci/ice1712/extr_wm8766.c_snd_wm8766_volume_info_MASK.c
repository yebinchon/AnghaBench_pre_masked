
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_wm8766 {TYPE_3__* ctl; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int max; int min; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct TYPE_6__ {int flags; int max; int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_wm8766* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_info *VAR_3)
{
 struct snd_wm8766 *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = VAR_2->private_value;

 VAR_3->type = VAR_0;
 VAR_3->count = (VAR_4->ctl[VAR_5].flags & VAR_1) ? 2 : 1;
 VAR_3->value.integer.min = VAR_4->ctl[VAR_5].min;
 VAR_3->value.integer.max = VAR_4->ctl[VAR_5].max;

 return 0;
}
