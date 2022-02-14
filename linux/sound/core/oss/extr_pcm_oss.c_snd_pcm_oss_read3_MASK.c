
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
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct snd_pcm_substream*,void*,int,int ,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ,int *) ;
 int FUNC_3 (struct snd_pcm_substream*,int*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

snd_pcm_sframes_t FUNC_5(struct snd_pcm_substream *VAR_8, char *VAR_9, snd_pcm_uframes_t VAR_10, int VAR_11)
{
 struct snd_pcm_runtime *VAR_12 = VAR_8->runtime;
 snd_pcm_sframes_t VAR_13;
 int VAR_14;
 while (1) {
  if (VAR_12->status->state == VAR_7 ||
      VAR_12->status->state == VAR_6) {






   VAR_14 = FUNC_2(VAR_8, VAR_2, ((void*)0));
   if (VAR_14 < 0)
    break;
  } else if (VAR_12->status->state == VAR_5) {
   VAR_14 = FUNC_4(VAR_8);
   if (VAR_14 < 0)
    break;
  }
  VAR_14 = FUNC_3(VAR_8, &VAR_13);
  if (VAR_14 < 0)
   break;
  VAR_14 = FUNC_0(VAR_8, (void *)VAR_9, 1,
      VAR_10, VAR_11);
  if (VAR_14 == -VAR_0) {
   if (VAR_12->status->state == VAR_4) {
    VAR_14 = FUNC_2(VAR_8, VAR_3, ((void*)0));
    if (VAR_14 < 0)
     break;
   }
   continue;
  }
  if (VAR_14 != -VAR_1)
   break;
 }
 return VAR_14;
}
