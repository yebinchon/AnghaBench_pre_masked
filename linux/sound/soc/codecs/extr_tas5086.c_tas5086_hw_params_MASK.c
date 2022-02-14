
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5086_private {int rate; int mclk; int sclk; int format; int regmap; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 struct tas5086_private* FUNC_9 (struct snd_soc_component*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_10,
        struct snd_pcm_hw_params *VAR_11,
        struct snd_soc_dai *VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_12->component;
 struct tas5086_private *VAR_14 = FUNC_9(VAR_13);
 int VAR_15;
 int VAR_16;

 VAR_14->rate = FUNC_5(VAR_11);


 VAR_15 = FUNC_4(VAR_9,
        FUNC_0(VAR_9), VAR_14->rate);

 if (VAR_15 < 0) {
  FUNC_3(VAR_13->dev, "Invalid sample rate\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_7(VAR_14->regmap, VAR_2,
     VAR_3,
     FUNC_1(VAR_15));
 if (VAR_16 < 0)
  return VAR_16;


 VAR_15 = FUNC_4(VAR_8, FUNC_0(VAR_8),
        VAR_14->mclk / VAR_14->rate);
 if (VAR_15 < 0) {
  FUNC_3(VAR_13->dev, "Invalid MCLK / Fs ratio\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_7(VAR_14->regmap, VAR_2,
     VAR_4,
     FUNC_2(VAR_15));
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_7(VAR_14->regmap, VAR_2,
     VAR_5,
     (VAR_14->sclk == 48 * VAR_14->rate) ?
     VAR_5 : 0);
 if (VAR_16 < 0)
  return VAR_16;
 switch (VAR_14->format & VAR_1) {
 case 128:
  VAR_15 = 0x00;
  break;
 case 130:
  VAR_15 = 0x03;
  break;
 case 129:
  VAR_15 = 0x06;
  break;
 default:
  FUNC_3(VAR_13->dev, "Invalid DAI format\n");
  return -VAR_0;
 }


 switch (FUNC_6(VAR_11)) {
        case 16:
  VAR_15 += 0;
                break;
 case 20:
  VAR_15 += 1;
  break;
 case 24:
  VAR_15 += 2;
  break;
 default:
  FUNC_3(VAR_13->dev, "Invalid bit width\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_8(VAR_14->regmap, VAR_7, VAR_15);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_7(VAR_14->regmap, VAR_2,
     VAR_6, VAR_6);
 if (VAR_16 < 0)
  return VAR_16;

 return FUNC_10(VAR_13);
}
