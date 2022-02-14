
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; scalar_t__ period_size; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2, snd_pcm_sframes_t *VAR_3)
{
 struct snd_pcm_runtime *VAR_4;
 snd_pcm_uframes_t VAR_5;
 int VAR_6 = 0;

 while (1) {
  VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_3);
  if (VAR_6 < 0)
   break;
  VAR_4 = VAR_2->runtime;
  if (*VAR_3 <= (snd_pcm_sframes_t)VAR_4->buffer_size)
   break;


  VAR_5 = (*VAR_3 - VAR_4->buffer_size) + VAR_4->period_size - 1;
  VAR_5 /= VAR_4->period_size;
  VAR_5 *= VAR_4->period_size;
  VAR_6 = FUNC_0(VAR_2, VAR_1, &VAR_5);
  if (VAR_6 < 0)
   break;
 }
 return VAR_6;
}
