
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct stm32_i2s_data {int refcount; int regmap; int lock_fd; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;






 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct stm32_i2s_data*) ;
 int FUNC_1 (struct stm32_i2s_data*) ;
 int VAR_14 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 struct stm32_i2s_data* FUNC_7 (struct snd_soc_dai*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_15, int VAR_16,
        struct snd_soc_dai *VAR_17)
{
 struct stm32_i2s_data *VAR_18 = FUNC_7(VAR_17);
 bool VAR_19 = (VAR_15->stream == VAR_9);
 u32 VAR_20, VAR_21;
 int VAR_22;

 switch (VAR_16) {
 case 130:
 case 131:
 case 132:

  FUNC_2(VAR_17->dev, "start I2S %s\n",
   VAR_19 ? "playback" : "capture");

  VAR_20 = VAR_1 | VAR_2;
  FUNC_4(VAR_18->regmap, VAR_10,
       VAR_20, VAR_20);

  VAR_22 = FUNC_4(VAR_18->regmap, VAR_11,
      VAR_4, VAR_4);
  if (VAR_22 < 0) {
   FUNC_3(VAR_17->dev, "Error %d enabling I2S\n", VAR_22);
   return VAR_22;
  }

  VAR_22 = FUNC_6(VAR_18->regmap, VAR_11,
     VAR_3, VAR_3);
  if (VAR_22 < 0) {
   FUNC_3(VAR_17->dev, "Error %d starting I2S\n", VAR_22);
   return VAR_22;
  }

  FUNC_6(VAR_18->regmap, VAR_13,
      VAR_8, VAR_8);

  FUNC_8(&VAR_18->lock_fd);
  VAR_18->refcount++;
  if (VAR_19) {
   VAR_21 = VAR_7;
  } else {
   VAR_21 = VAR_5;

   if (FUNC_0(VAR_18) && VAR_18->refcount == 1)

    FUNC_5(VAR_18->regmap,
          VAR_14, 0);
  }
  FUNC_9(&VAR_18->lock_fd);

  if (FUNC_1(VAR_18))
   VAR_21 |= VAR_6;

  FUNC_4(VAR_18->regmap, VAR_12, VAR_21, VAR_21);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_2(VAR_17->dev, "stop I2S %s\n",
   VAR_19 ? "playback" : "capture");

  if (VAR_19)
   FUNC_4(VAR_18->regmap, VAR_12,
        VAR_7,
        (unsigned int)~VAR_7);
  else
   FUNC_4(VAR_18->regmap, VAR_12,
        VAR_5,
        (unsigned int)~VAR_5);

  FUNC_8(&VAR_18->lock_fd);
  VAR_18->refcount--;
  if (VAR_18->refcount) {
   FUNC_9(&VAR_18->lock_fd);
   break;
  }

  VAR_22 = FUNC_4(VAR_18->regmap, VAR_11,
      VAR_4, 0);
  if (VAR_22 < 0) {
   FUNC_3(VAR_17->dev, "Error %d disabling I2S\n", VAR_22);
   FUNC_9(&VAR_18->lock_fd);
   return VAR_22;
  }
  FUNC_9(&VAR_18->lock_fd);

  VAR_20 = VAR_1 | VAR_2;
  FUNC_4(VAR_18->regmap, VAR_10,
       VAR_20, 0);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
