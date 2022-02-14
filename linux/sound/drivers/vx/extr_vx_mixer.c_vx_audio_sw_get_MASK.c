
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {int mixer_mutex; int * audio_active; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vx_core* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct vx_core *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = VAR_0->private_value & 0xff;

 FUNC_0(&VAR_2->mixer_mutex);
 VAR_1->value.integer.value[0] = VAR_2->audio_active[VAR_3];
 VAR_1->value.integer.value[1] = VAR_2->audio_active[VAR_3+1];
 FUNC_1(&VAR_2->mixer_mutex);
 return 0;
}
