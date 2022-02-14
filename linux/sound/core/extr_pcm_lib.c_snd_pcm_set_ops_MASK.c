
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_ops const* ops; struct snd_pcm_substream* next; } ;
struct snd_pcm_str {struct snd_pcm_substream* substream; } ;
struct snd_pcm_ops {int dummy; } ;
struct snd_pcm {struct snd_pcm_str* streams; } ;



void FUNC_0(struct snd_pcm *VAR_0, int VAR_1,
       const struct snd_pcm_ops *VAR_2)
{
 struct snd_pcm_str *VAR_3 = &VAR_0->streams[VAR_1];
 struct snd_pcm_substream *VAR_4;

 for (VAR_4 = VAR_3->substream; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  VAR_4->ops = VAR_2;
}
