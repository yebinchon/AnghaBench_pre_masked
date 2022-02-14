
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {int* analog_capture_volume; int* analog_playback_volume; TYPE_3__* mgr; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int mixer_mutex; scalar_t__ is_hr_stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_pcxhr*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcxhr*,int,int) ;
 struct snd_pcxhr* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_8,
    struct snd_ctl_elem_value *VAR_9)
{
 struct snd_pcxhr *VAR_10 = FUNC_4(VAR_8);
 int VAR_11 = 0;
 int VAR_12, VAR_13;

 FUNC_1(&VAR_10->mgr->mixer_mutex);
 VAR_12 = (VAR_8->private_value != 0);
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  int VAR_14 = VAR_9->value.integer.value[VAR_13];
  int *VAR_15 = VAR_12 ?
   &VAR_10->analog_capture_volume[VAR_13] :
   &VAR_10->analog_playback_volume[VAR_13];
  if (VAR_12) {
   if (VAR_10->mgr->is_hr_stereo) {
    if (VAR_14 < VAR_1 ||
        VAR_14 > VAR_0)
     continue;
   } else {
    if (VAR_14 < VAR_5 ||
        VAR_14 > VAR_4)
     continue;
   }
  } else {
   if (VAR_10->mgr->is_hr_stereo) {
    if (VAR_14 < VAR_3 ||
        VAR_14 > VAR_2)
     continue;
   } else {
    if (VAR_14 < VAR_7 ||
        VAR_14 > VAR_6)
     continue;
   }
  }
  if (*VAR_15 != VAR_14) {
   *VAR_15 = VAR_14;
   VAR_11 = 1;
   if (VAR_10->mgr->is_hr_stereo)
    FUNC_0(VAR_10,
        VAR_12, VAR_13);
   else
    FUNC_3(VAR_10,
        VAR_12, VAR_13);
  }
 }
 FUNC_2(&VAR_10->mgr->mixer_mutex);
 return VAR_11;
}
