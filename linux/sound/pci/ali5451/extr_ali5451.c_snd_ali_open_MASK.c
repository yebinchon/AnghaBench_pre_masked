
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_hardware {int dummy; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; int private_free; struct snd_ali_voice* private_data; } ;
struct snd_ali_voice {struct snd_pcm_substream* substream; } ;
struct snd_ali {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_ali_voice* FUNC_0 (struct snd_ali*,int ,int,int) ;
 int VAR_3 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_ali* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4, int VAR_5,
   int VAR_6, struct snd_pcm_hardware *VAR_7)
{
 struct snd_ali *VAR_8 = FUNC_3(VAR_4);
 struct snd_pcm_runtime *VAR_9 = VAR_4->runtime;
 struct snd_ali_voice *VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_1, VAR_5,
         VAR_6);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->substream = VAR_4;
 VAR_9->private_data = VAR_10;
 VAR_9->private_free = VAR_3;

 VAR_9->hw = *VAR_7;
 FUNC_2(VAR_4);
 FUNC_1(VAR_9, VAR_2,
         0, 64*1024);
 return 0;
}
