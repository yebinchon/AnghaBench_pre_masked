
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usX2Y_substream {int * pcm_substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_usX2Y_substream* private_data; } ;



__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct snd_usX2Y_substream *VAR_2 = VAR_1->private_data;

 VAR_2->pcm_substream = ((void*)0);

 return 0;
}
