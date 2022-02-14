
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int formats; int channels_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_6->runtime;
 VAR_7->hw.channels_max = VAR_0;
 FUNC_0(VAR_7, 0, VAR_2,
        &VAR_4);

 VAR_7->hw.formats = VAR_1;
 FUNC_1(VAR_7, 0, 16, 16);

 FUNC_0(VAR_7, 0,
    VAR_3, &VAR_5);

 return 0;
}
