
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct ensoniq {int reg_lock; int spdif_default; int spdif_stream; int * playback1_substream; scalar_t__ spdif; struct snd_pcm_substream* playback2_substream; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct ensoniq* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5)
{
 struct ensoniq *VAR_6 = FUNC_3(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;

 VAR_6->mode |= VAR_0;
 VAR_6->playback2_substream = VAR_5;
 VAR_7->hw = VAR_2;
 FUNC_2(VAR_5);
 FUNC_4(&VAR_6->reg_lock);
 if (VAR_6->spdif && VAR_6->playback1_substream == ((void*)0))
  VAR_6->spdif_stream = VAR_6->spdif_default;
 FUNC_5(&VAR_6->reg_lock);




 FUNC_0(VAR_7, 0, VAR_1,
          &VAR_4);

 return 0;
}
