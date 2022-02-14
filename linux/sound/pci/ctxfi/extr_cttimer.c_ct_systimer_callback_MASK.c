
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int period_size; unsigned int buffer_size; int rate; } ;
struct ct_timer_instance {unsigned int position; int lock; int timer; scalar_t__ running; struct ct_atc_pcm* apcm; struct snd_pcm_substream* substream; } ;
struct ct_atc_pcm {int (* interrupt ) (struct ct_atc_pcm*) ;} ;
struct TYPE_2__ {unsigned int (* pointer ) (struct snd_pcm_substream*) ;} ;


 unsigned int VAR_0 ;
 struct ct_timer_instance* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct ct_atc_pcm*) ;
 struct ct_timer_instance* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 struct ct_timer_instance *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct snd_pcm_substream *VAR_6 = VAR_5->substream;
 struct snd_pcm_runtime *VAR_7 = VAR_6->runtime;
 struct ct_atc_pcm *VAR_8 = VAR_5->apcm;
 unsigned int VAR_9 = VAR_7->period_size;
 unsigned int VAR_10 = VAR_7->buffer_size;
 unsigned long VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;

 VAR_12 = VAR_6->ops->pointer(VAR_6);
 VAR_13 = (VAR_12 + VAR_10 - VAR_5->position) % VAR_10;
 if (VAR_13 >= VAR_9 ||
     VAR_12 / VAR_9 != VAR_5->position / VAR_9) {
  VAR_8->interrupt(VAR_8);
  VAR_5->position = VAR_12;
 }


 VAR_14 = ((VAR_9 - (VAR_12 % VAR_9))
     * VAR_0 + (VAR_7->rate - 1)) / VAR_7->rate + VAR_0 * 5 / 1000;
 FUNC_2(&VAR_5->lock, VAR_11);
 if (VAR_5->running)
  FUNC_1(&VAR_5->timer, VAR_1 + VAR_14);
 FUNC_3(&VAR_5->lock, VAR_11);
}
