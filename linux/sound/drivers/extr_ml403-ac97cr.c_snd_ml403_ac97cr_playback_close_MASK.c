
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_ml403_ac97cr {int * playback_substream; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct snd_ml403_ac97cr* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_ml403_ac97cr *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, "close(playback)\n");
 VAR_2->playback_substream = ((void*)0);
 return 0;
}
