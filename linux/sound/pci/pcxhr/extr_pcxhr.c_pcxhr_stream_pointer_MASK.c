
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct snd_pcxhr {TYPE_1__* mgr; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; struct pcxhr_stream* private_data; } ;
struct pcxhr_stream {int timer_buf_periods; scalar_t__ timer_period_frag; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_pcxhr* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 u_int32_t VAR_1;
 int VAR_2;
 struct snd_pcxhr *VAR_3 = FUNC_2(VAR_0);
 struct snd_pcm_runtime *VAR_4 = VAR_0->runtime;
 struct pcxhr_stream *VAR_5 = VAR_4->private_data;

 FUNC_0(&VAR_3->mgr->lock);


 VAR_1 = VAR_5->timer_period_frag;
 VAR_2 = VAR_5->timer_buf_periods;

 FUNC_1(&VAR_3->mgr->lock);

 return (snd_pcm_uframes_t)((VAR_2 * VAR_4->period_size) +
       VAR_1);
}
