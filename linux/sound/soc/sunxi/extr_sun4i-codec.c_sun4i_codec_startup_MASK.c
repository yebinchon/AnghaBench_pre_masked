
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_codec {int clk_module; int regmap; } ;
struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int runtime; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct sun4i_codec* FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
          struct snd_soc_dai *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct sun4i_codec *VAR_7 = FUNC_3(VAR_6->card);

 FUNC_2(VAR_4->runtime, 0,
    VAR_0, &VAR_3);





 FUNC_1(VAR_7->regmap, VAR_1,
      3 << VAR_2,
      3 << VAR_2);

 return FUNC_0(VAR_7->clk_module);
}
