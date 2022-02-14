
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct snd_pcm_substream*,void*,int,int ,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

snd_pcm_sframes_t FUNC_3(struct snd_pcm_substream *VAR_6, const char *VAR_7, snd_pcm_uframes_t VAR_8, int VAR_9)
{
 struct snd_pcm_runtime *VAR_10 = VAR_6->runtime;
 int VAR_11;
 while (1) {
  if (VAR_10->status->state == VAR_5 ||
      VAR_10->status->state == VAR_4) {






   VAR_11 = FUNC_2(VAR_6);
   if (VAR_11 < 0)
    break;
  }
  VAR_11 = FUNC_0(VAR_6, (void *)VAR_7, 1,
      VAR_8, VAR_9);
  if (VAR_11 != -VAR_1 && VAR_11 != -VAR_2)
   break;


  if (VAR_10->status->state == VAR_3)
   return -VAR_0;
 }
 return VAR_11;
}
