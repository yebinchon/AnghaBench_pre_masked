
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_line6_pcm {scalar_t__* volume_playback; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 struct snd_line6_pcm* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct snd_line6_pcm *VAR_4 = FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++)
  if (VAR_4->volume_playback[VAR_2] !=
      VAR_1->value.integer.value[VAR_2]) {
   VAR_4->volume_playback[VAR_2] =
       VAR_1->value.integer.value[VAR_2];
   VAR_3 = 1;
  }

 return VAR_3;
}
