
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vx_core {TYPE_3__* hw; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int max; scalar_t__ min; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct TYPE_6__ {int output_level_max; } ;


 int VAR_0 ;
 struct vx_core* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 struct vx_core *VAR_3 = FUNC_0(VAR_1);
 VAR_2->type = VAR_0;
 VAR_2->count = 2;
 VAR_2->value.integer.min = 0;
 VAR_2->value.integer.max = VAR_3->hw->output_level_max;
 return 0;
}
