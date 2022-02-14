
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_cs46xx_pcm* private_data; } ;
struct snd_cs46xx_pcm {int hw_buf; int * substream; int * pcm_channel; } ;
struct snd_cs46xx {int (* active_ctrl ) (struct snd_cs46xx*,int) ;int * playback_pcm; int spos_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct snd_cs46xx* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_cs46xx*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_cs46xx *VAR_2 = FUNC_4(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_cs46xx_pcm * VAR_4;

 VAR_4 = VAR_3->private_data;


 if (!VAR_4) return -VAR_0;
 VAR_2->playback_pcm = ((void*)0);


 VAR_4->substream = ((void*)0);
 FUNC_3(&VAR_4->hw_buf);
 VAR_2->active_ctrl(VAR_2, -1);

 return 0;
}
