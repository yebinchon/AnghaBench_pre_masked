
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct atmel_pdmic {int pclk; int gclk; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct atmel_pdmic* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_2,
     struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct atmel_pdmic *VAR_5 = FUNC_2(VAR_4->card);


 FUNC_1(VAR_5->regmap, VAR_0, VAR_1);

 FUNC_0(VAR_5->gclk);
 FUNC_0(VAR_5->pclk);
}
