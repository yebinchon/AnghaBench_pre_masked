
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pcxhr_mgr {scalar_t__ use_clock_type; int sample_rate; int mixer_mutex; int setup_mutex; int is_hr_stereo; scalar_t__ capture_chips; scalar_t__ board_has_aes1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcxhr_mgr*,scalar_t__,int*) ;
 int FUNC_3 (struct pcxhr_mgr*,int) ;
 struct pcxhr_mgr* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct pcxhr_mgr *VAR_4 = FUNC_4(VAR_2);
 int VAR_5, VAR_6 = 0;
 unsigned int VAR_7 = 2;
 if (VAR_4->board_has_aes1) {
  VAR_7 += VAR_4->capture_chips;
  if (!VAR_4->is_hr_stereo)
   VAR_7 += 1;
 }
 if (VAR_3->value.enumerated.item[0] >= VAR_7)
  return -VAR_0;
 FUNC_0(&VAR_4->mixer_mutex);
 if (VAR_4->use_clock_type != VAR_3->value.enumerated.item[0]) {
  FUNC_0(&VAR_4->setup_mutex);
  VAR_4->use_clock_type = VAR_3->value.enumerated.item[0];
  VAR_5 = 0;
  if (VAR_4->use_clock_type != VAR_1) {
   FUNC_2(VAR_4, VAR_4->use_clock_type,
       &VAR_5);
  } else {
   VAR_5 = VAR_4->sample_rate;
   if (!VAR_5)
    VAR_5 = 48000;
  }
  if (VAR_5) {
   FUNC_3(VAR_4, VAR_5);
   if (VAR_4->sample_rate)
    VAR_4->sample_rate = VAR_5;
  }
  FUNC_1(&VAR_4->setup_mutex);
  VAR_6 = 1;
 }
 FUNC_1(&VAR_4->mixer_mutex);
 return VAR_6;
}
