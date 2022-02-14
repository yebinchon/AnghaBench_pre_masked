
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct atmel_pdmic {int regmap; struct snd_pcm_substream* substream; int gclk; int pclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct atmel_pdmic* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct atmel_pdmic *VAR_6 = FUNC_3(VAR_5->card);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6->gclk);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6->pclk);
 if (VAR_7) {
  FUNC_0(VAR_6->gclk);
  return VAR_7;
 }


 FUNC_2(VAR_6->regmap, VAR_0, 0);

 VAR_6->substream = VAR_3;


 FUNC_2(VAR_6->regmap, VAR_1, VAR_2);

 return 0;
}
