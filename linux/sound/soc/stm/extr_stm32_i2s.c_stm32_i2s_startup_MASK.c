
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_i2s_data {int fmt; int regmap; int i2sclk; int irq_lock; struct snd_pcm_substream* substream; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct stm32_i2s_data* FUNC_4 (struct snd_soc_dai*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5,
        struct snd_soc_dai *VAR_6)
{
 struct stm32_i2s_data *VAR_7 = FUNC_4(VAR_6);
 unsigned long VAR_8;
 int VAR_9;

 FUNC_5(&VAR_7->irq_lock, VAR_8);
 VAR_7->substream = VAR_5;
 FUNC_6(&VAR_7->irq_lock, VAR_8);

 if ((VAR_7->fmt & VAR_3) != VAR_2)
  FUNC_3(VAR_5->runtime,
          VAR_1, 2);

 VAR_9 = FUNC_0(VAR_7->i2sclk);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6->dev, "Failed to enable clock: %d\n", VAR_9);
  return VAR_9;
 }

 return FUNC_2(VAR_7->regmap, VAR_4,
     VAR_0, VAR_0);
}
