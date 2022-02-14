
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; } ;
struct snd_line6_pcm {int dummy; } ;
struct line6_pcm_stream {int pos_done; } ;
typedef int snd_pcm_uframes_t ;


 struct line6_pcm_stream* FUNC_0 (struct snd_line6_pcm*,int ) ;
 struct snd_line6_pcm* FUNC_1 (struct snd_pcm_substream*) ;

snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_line6_pcm *VAR_1 = FUNC_1(VAR_0);
 struct line6_pcm_stream *VAR_2 = FUNC_0(VAR_1, VAR_0->stream);

 return VAR_2->pos_done;
}
