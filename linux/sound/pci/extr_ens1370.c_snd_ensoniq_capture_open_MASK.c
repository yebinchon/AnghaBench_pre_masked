
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct ensoniq {struct snd_pcm_substream* capture_substream; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct ensoniq* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5)
{
 struct ensoniq *VAR_6 = FUNC_2(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;

 VAR_6->mode |= VAR_0;
 VAR_6->capture_substream = VAR_5;
 VAR_7->hw = VAR_2;
 FUNC_1(VAR_5);




 FUNC_0(VAR_7, 0, VAR_1,
          &VAR_4);

 return 0;
}
