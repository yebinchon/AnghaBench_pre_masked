
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int regmap; scalar_t__ master; int sai_ck; int irq_lock; struct snd_pcm_substream* substream; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct stm32_sai_sub_data*) ;
 scalar_t__ FUNC_1 (struct stm32_sai_sub_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 struct stm32_sai_sub_data* FUNC_9 (struct snd_soc_dai*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_14,
        struct snd_soc_dai *VAR_15)
{
 struct stm32_sai_sub_data *VAR_16 = FUNC_9(VAR_15);
 int VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;

 FUNC_10(&VAR_16->irq_lock, VAR_20);
 VAR_16->substream = VAR_14;
 FUNC_11(&VAR_16->irq_lock, VAR_20);

 if (FUNC_1(VAR_16)) {
  FUNC_7(VAR_14->runtime,
          VAR_10,
          VAR_8);
  FUNC_8(VAR_14->runtime,
          VAR_9, 2);
 }

 VAR_19 = FUNC_2(VAR_16->sai_ck);
 if (VAR_19 < 0) {
  FUNC_3(VAR_15->dev, "Failed to enable clock: %d\n", VAR_19);
  return VAR_19;
 }


 FUNC_6(VAR_16->regmap, VAR_11,
     VAR_0, VAR_0);

 VAR_17 = VAR_6;
 if (FUNC_0(VAR_16)) {
  FUNC_4(VAR_16->regmap, VAR_12, &VAR_18);
  if (VAR_18 & VAR_1)
   VAR_17 |= VAR_5;
 }

 if (VAR_16->master)
  VAR_17 |= VAR_7;
 else
  VAR_17 |= VAR_2 | VAR_3;

 FUNC_5(VAR_16->regmap, VAR_13,
      VAR_4, VAR_17);

 return 0;
}
