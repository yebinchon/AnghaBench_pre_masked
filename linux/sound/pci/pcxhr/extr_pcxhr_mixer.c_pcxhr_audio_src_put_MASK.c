
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {int audio_capture_source; TYPE_3__* mgr; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int mixer_mutex; scalar_t__ is_hr_stereo; scalar_t__ board_has_mic; scalar_t__ board_has_aes1; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcxhr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcxhr*) ;
 struct snd_pcxhr* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct snd_pcxhr *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = 0;
 int VAR_5 = 2;
 if (VAR_3->mgr->board_has_aes1) {
  VAR_5 = 3;
  if (VAR_3->mgr->board_has_mic)
   VAR_5 = 5;
 }
 if (VAR_2->value.enumerated.item[0] >= VAR_5)
  return -VAR_0;
 FUNC_1(&VAR_3->mgr->mixer_mutex);
 if (VAR_3->audio_capture_source != VAR_2->value.enumerated.item[0]) {
  VAR_3->audio_capture_source = VAR_2->value.enumerated.item[0];
  if (VAR_3->mgr->is_hr_stereo)
   FUNC_0(VAR_3);
  else
   FUNC_3(VAR_3);
  VAR_4 = 1;
 }
 FUNC_2(&VAR_3->mgr->mixer_mutex);
 return VAR_4;
}
