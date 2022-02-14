
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct atmel_classd {int pclk; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct atmel_classd* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
     struct snd_soc_dai *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct atmel_classd *VAR_4 = FUNC_2(VAR_3->card);

 FUNC_1(VAR_4->regmap, VAR_0, 0x0);

 return FUNC_0(VAR_4->pclk);
}
