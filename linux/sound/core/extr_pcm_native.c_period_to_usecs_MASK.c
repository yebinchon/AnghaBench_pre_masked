
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int rate; int period_size; } ;



__attribute__((used)) static int FUNC_0(struct snd_pcm_runtime *VAR_0)
{
 int VAR_1;

 if (! VAR_0->rate)
  return -1;


 VAR_1 = (750000 / VAR_0->rate) * VAR_0->period_size;
 VAR_1 += ((750000 % VAR_0->rate) * VAR_0->period_size) /
  VAR_0->rate;

 return VAR_1;
}
