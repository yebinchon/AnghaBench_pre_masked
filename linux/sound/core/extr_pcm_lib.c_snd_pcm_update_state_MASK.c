
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_runtime {scalar_t__ avail_max; scalar_t__ buffer_size; scalar_t__ stop_threshold; scalar_t__ twake; int sleep; TYPE_1__* control; int tsleep; TYPE_2__* status; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ avail_min; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_runtime *VAR_3)
{
 snd_pcm_uframes_t VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 > VAR_3->avail_max)
  VAR_3->avail_max = VAR_4;
 if (VAR_3->status->state == VAR_1) {
  if (VAR_4 >= VAR_3->buffer_size) {
   FUNC_2(VAR_2);
   return -VAR_0;
  }
 } else {
  if (VAR_4 >= VAR_3->stop_threshold) {
   FUNC_0(VAR_2);
   return -VAR_0;
  }
 }
 if (VAR_3->twake) {
  if (VAR_4 >= VAR_3->twake)
   FUNC_3(&VAR_3->tsleep);
 } else if (VAR_4 >= VAR_3->control->avail_min)
  FUNC_3(&VAR_3->sleep);
 return 0;
}
