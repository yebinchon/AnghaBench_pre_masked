
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int pcm; struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {scalar_t__ buffer_used; scalar_t__ period_ptr; scalar_t__ prev_hw_ptr_period; scalar_t__ prepare; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_substream*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 int VAR_2;
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;

 VAR_2 = FUNC_1(VAR_1, VAR_0, ((void*)0));
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->pcm,
   "snd_pcm_oss_prepare: SNDRV_PCM_IOCTL_PREPARE failed\n");
  return VAR_2;
 }
 VAR_3->oss.prepare = 0;
 VAR_3->oss.prev_hw_ptr_period = 0;
 VAR_3->oss.period_ptr = 0;
 VAR_3->oss.buffer_used = 0;

 return 0;
}
