
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct audio_stream {int dummy; } ;


 int FUNC_0 (struct audio_stream*,int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct audio_stream* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1)
{
 struct audio_stream *VAR_2 = FUNC_6(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_0,
           FUNC_1(VAR_1));
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_2,
        FUNC_2(VAR_1),
        FUNC_3(VAR_1));
 if (VAR_3)
  FUNC_4(VAR_0);

 return VAR_3;
}
