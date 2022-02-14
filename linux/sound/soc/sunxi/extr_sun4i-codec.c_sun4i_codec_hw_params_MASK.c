
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_codec {int clk_module; } ;
struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 struct sun4i_codec* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct sun4i_codec*,struct snd_pcm_hw_params*,int) ;
 int FUNC_5 (struct sun4i_codec*,struct snd_pcm_hw_params*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2,
     struct snd_pcm_hw_params *VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct sun4i_codec *VAR_6 = FUNC_1(VAR_5->card);
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6->clk_module, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_9 = FUNC_2(VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_2->stream == VAR_1)
  return FUNC_5(VAR_6, VAR_3,
            VAR_9);

 return FUNC_4(VAR_6, VAR_3,
          VAR_9);
}
