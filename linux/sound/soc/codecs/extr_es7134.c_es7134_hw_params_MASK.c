
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct es7134_data {int mclk; } ;


 int FUNC_0 (struct snd_soc_dai*,struct es7134_data*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct es7134_data* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
       struct snd_pcm_hw_params *VAR_1,
       struct snd_soc_dai *VAR_2)
{
 struct es7134_data *VAR_3 = FUNC_2(VAR_2);


 if (!VAR_3->mclk)
  return 0;

 return FUNC_0(VAR_2, VAR_3, FUNC_1(VAR_1));
}
