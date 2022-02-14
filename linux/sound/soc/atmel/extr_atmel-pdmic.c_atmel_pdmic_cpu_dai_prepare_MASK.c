
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct atmel_pdmic {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 struct atmel_pdmic* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
     struct snd_soc_dai *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct atmel_pdmic *VAR_4 = FUNC_1(VAR_3->card);
 u32 VAR_5;


 return FUNC_0(VAR_4->regmap, VAR_0, &VAR_5);
}
