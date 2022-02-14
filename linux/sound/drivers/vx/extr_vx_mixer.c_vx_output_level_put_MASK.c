
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vx_core {unsigned int** output_level; int mixer_mutex; TYPE_2__* hw; } ;
struct TYPE_5__ {int index; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_7__ {unsigned int* value; } ;
struct TYPE_8__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct TYPE_6__ {unsigned int output_level_max; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vx_core* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct vx_core*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct vx_core *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_1->id.index;
 unsigned int VAR_5[2], VAR_6;

 VAR_6 = VAR_3->hw->output_level_max;
 VAR_5[0] = VAR_2->value.integer.value[0];
 VAR_5[1] = VAR_2->value.integer.value[1];
 if (VAR_5[0] > VAR_6 || VAR_5[1] > VAR_6)
  return -VAR_0;
 FUNC_0(&VAR_3->mixer_mutex);
 if (VAR_5[0] != VAR_3->output_level[VAR_4][0] ||
     VAR_5[1] != VAR_3->output_level[VAR_4][1]) {
  FUNC_3(VAR_3, VAR_4, VAR_5[0], VAR_5[1]);
  VAR_3->output_level[VAR_4][0] = VAR_5[0];
  VAR_3->output_level[VAR_4][1] = VAR_5[1];
  FUNC_1(&VAR_3->mixer_mutex);
  return 1;
 }
 FUNC_1(&VAR_3->mixer_mutex);
 return 0;
}
