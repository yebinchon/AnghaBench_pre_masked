
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_es1688 {struct snd_pcm_substream* capture_substream; int * playback_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_es1688* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4)
{
 struct snd_es1688 *VAR_5 = FUNC_1(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;

 if (VAR_5->playback_substream != ((void*)0))
  return -VAR_0;
 VAR_5->capture_substream = VAR_4;
 VAR_6->hw = VAR_3;
 FUNC_0(VAR_6, 0, VAR_1,
          &VAR_2);
 return 0;
}
