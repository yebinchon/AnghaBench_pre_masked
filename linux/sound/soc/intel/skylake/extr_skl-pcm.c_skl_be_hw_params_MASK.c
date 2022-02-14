
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct skl_pipe_params {int stream; int s_freq; int ch; int s_fmt; int member_0; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_soc_dai*,struct skl_pipe_params*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct skl_pipe_params VAR_3 = {0};

 VAR_3.s_fmt = FUNC_4(FUNC_1(VAR_1));
 VAR_3.ch = FUNC_0(VAR_1);
 VAR_3.s_freq = FUNC_2(VAR_1);
 VAR_3.stream = VAR_0->stream;

 return FUNC_3(VAR_2, &VAR_3);
}
