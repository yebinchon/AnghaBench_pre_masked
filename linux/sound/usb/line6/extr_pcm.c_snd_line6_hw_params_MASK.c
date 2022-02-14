
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_line6_pcm {int state_mutex; } ;
struct line6_pcm_stream {int period; } ;


 int VAR_0 ;
 struct line6_pcm_stream* FUNC_0 (struct snd_line6_pcm*,int ) ;
 int FUNC_1 (struct snd_line6_pcm*,struct line6_pcm_stream*,int ,int ) ;
 int FUNC_2 (struct snd_line6_pcm*,struct line6_pcm_stream*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_substream*,int ) ;
 struct snd_line6_pcm* FUNC_8 (struct snd_pcm_substream*) ;

int FUNC_9(struct snd_pcm_substream *VAR_1,
   struct snd_pcm_hw_params *VAR_2)
{
 int VAR_3;
 struct snd_line6_pcm *VAR_4 = FUNC_8(VAR_1);
 struct line6_pcm_stream *VAR_5 = FUNC_0(VAR_4, VAR_1->stream);

 FUNC_3(&VAR_4->state_mutex);
 VAR_3 = FUNC_1(VAR_4, VAR_5, VAR_1->stream,
                            VAR_0);
 if (VAR_3 < 0)
  goto error;

 VAR_3 = FUNC_7(VAR_1,
           FUNC_5(VAR_2));
 if (VAR_3 < 0) {
  FUNC_2(VAR_4, VAR_5, VAR_0);
  goto error;
 }

 VAR_5->period = FUNC_6(VAR_2);
 error:
 FUNC_4(&VAR_4->state_mutex);
 return VAR_3;
}
