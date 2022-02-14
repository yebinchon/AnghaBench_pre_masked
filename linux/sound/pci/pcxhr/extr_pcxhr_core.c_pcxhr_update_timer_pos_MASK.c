
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct snd_pcm_runtime {int period_size; scalar_t__ periods; } ;
struct pcxhr_stream {scalar_t__ status; int timer_is_synced; int timer_abs_periods; int timer_period_frag; scalar_t__ timer_buf_periods; TYPE_2__* substream; } ;
struct pcxhr_mgr {int granularity; int lock; TYPE_1__* pci; } ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcxhr_mgr*,struct pcxhr_stream*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct pcxhr_mgr *VAR_1,
       struct pcxhr_stream *VAR_2,
       int VAR_3)
{
 if (VAR_2->substream &&
     (VAR_2->status == VAR_0)) {
  u_int64_t VAR_4;
  int VAR_5 = 0;
  int VAR_6 = 0;
  struct snd_pcm_runtime *VAR_7 = VAR_2->substream->runtime;

  if (VAR_3 < 0) {
   VAR_2->timer_is_synced = 0;

   VAR_3 = VAR_1->granularity;
  }

  if (!VAR_2->timer_is_synced) {
   if ((VAR_2->timer_abs_periods != 0) ||
       ((VAR_2->timer_period_frag + VAR_3) >=
       VAR_7->period_size)) {
    VAR_4 =
      FUNC_3(VAR_1, VAR_2);
    VAR_6 = 1;
    if (VAR_4 >= VAR_1->granularity) {




     VAR_4 -= VAR_1->granularity;
     VAR_2->timer_is_synced = 1;
    }
   }
  }
  if (!VAR_6) {



   VAR_4 = VAR_2->timer_abs_periods +
    VAR_2->timer_period_frag + VAR_3;
  }
  while (1) {
   u_int64_t VAR_8 = VAR_2->timer_abs_periods +
    VAR_7->period_size;
   if (VAR_8 > VAR_4)
    break;
   VAR_5 = 1;
   VAR_2->timer_buf_periods++;
   if (VAR_2->timer_buf_periods >= VAR_7->periods)
    VAR_2->timer_buf_periods = 0;
   VAR_2->timer_abs_periods = VAR_8;
  }
  if (VAR_4 >= VAR_2->timer_abs_periods) {
   VAR_2->timer_period_frag =
    (u_int32_t)(VAR_4 -
         VAR_2->timer_abs_periods);
  } else {
   FUNC_0(&VAR_1->pci->dev,
       "ERROR new_sample_count too small ??? %ld\n",
       (long unsigned int)VAR_4);
  }

  if (VAR_5) {
   FUNC_2(&VAR_1->lock);
   FUNC_4(VAR_2->substream);
   FUNC_1(&VAR_1->lock);
  }
 }
}
