
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; } ;
struct snd_cs4231 {int* image; int lock; scalar_t__ p_periods_sent; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_cs4231* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4)
{
 struct snd_cs4231 *VAR_5 = FUNC_1(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_2(&VAR_5->lock, VAR_7);

 VAR_5->image[VAR_0] &= ~(VAR_1 |
         VAR_2);

 if (FUNC_0(VAR_6->period_size > 0xffff + 1)) {
  VAR_8 = -VAR_3;
  goto out;
 }

 VAR_5->p_periods_sent = 0;

out:
 FUNC_3(&VAR_5->lock, VAR_7);

 return VAR_8;
}
