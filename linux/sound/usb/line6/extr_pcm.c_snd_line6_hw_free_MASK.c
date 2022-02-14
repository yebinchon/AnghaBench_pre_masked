
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; } ;
struct snd_line6_pcm {int state_mutex; } ;
struct line6_pcm_stream {int dummy; } ;


 int VAR_0 ;
 struct line6_pcm_stream* FUNC_0 (struct snd_line6_pcm*,int ) ;
 int FUNC_1 (struct snd_line6_pcm*,struct line6_pcm_stream*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_line6_pcm* FUNC_5 (struct snd_pcm_substream*) ;

int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_line6_pcm *VAR_2 = FUNC_5(VAR_1);
 struct line6_pcm_stream *VAR_3 = FUNC_0(VAR_2, VAR_1->stream);

 FUNC_2(&VAR_2->state_mutex);
 FUNC_1(VAR_2, VAR_3, VAR_0);
 FUNC_3(&VAR_2->state_mutex);
 return FUNC_4(VAR_1);
}
