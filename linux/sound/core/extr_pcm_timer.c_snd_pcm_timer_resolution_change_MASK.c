
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned long rate; unsigned long period_size; int timer_resolution; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct snd_pcm_substream *VAR_0)
{
 unsigned long VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
 struct snd_pcm_runtime *VAR_6 = VAR_0->runtime;

 VAR_2 = 1000000000;
 VAR_1 = VAR_6->rate;
 if (FUNC_2(!VAR_1))
  return;
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_2 /= VAR_4;
 VAR_1 /= VAR_4;
 VAR_3 = VAR_6->period_size;
 if (FUNC_2(!VAR_3))
  return;
 VAR_4 = FUNC_0(VAR_1, VAR_3);
 VAR_1 /= VAR_4;
 VAR_3 /= VAR_4;
 VAR_5 = 1;
 while ((VAR_2 * VAR_3) / VAR_3 != VAR_2) {
  VAR_2 /= 2;
  VAR_5 *= 2;
 }
 if (VAR_1 == 0) {
  FUNC_1(VAR_0->pcm,
   "pcm timer resolution out of range (rate = %u, period_size = %lu)\n",
   VAR_6->rate, VAR_6->period_size);
  VAR_6->timer_resolution = -1;
  return;
 }
 VAR_6->timer_resolution = (VAR_2 * VAR_3 / VAR_1) * VAR_5;
}
