
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int channels_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;

 VAR_5->hw.channels_max = 4;
 FUNC_0(VAR_5, 0, VAR_0,
        &VAR_2);

 return FUNC_0(VAR_4->runtime, 0,
   VAR_1, &VAR_3);
}
