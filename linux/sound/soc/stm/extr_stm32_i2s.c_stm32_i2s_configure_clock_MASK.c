
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_i2s_data {unsigned int mclk_rate; int fmt; int regmap; int i2sclk; int x8kclk; int x11kclk; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,unsigned int,int,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 unsigned int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int,int) ;
 struct stm32_i2s_data* FUNC_10 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_dai *VAR_11,
         struct snd_pcm_hw_params *VAR_12)
{
 struct stm32_i2s_data *VAR_13 = FUNC_10(VAR_11);
 unsigned long VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20 = FUNC_7(VAR_12);
 int VAR_21;
 u32 VAR_22, VAR_23;
 bool VAR_24;

 if (!(VAR_20 % 11025))
  FUNC_3(VAR_13->i2sclk, VAR_13->x11kclk);
 else
  FUNC_3(VAR_13->i2sclk, VAR_13->x8kclk);
 VAR_14 = FUNC_2(VAR_13->i2sclk);
 if (VAR_13->mclk_rate) {
  VAR_15 = FUNC_0(VAR_14, VAR_13->mclk_rate);
 } else {
  VAR_19 = 32;
  if ((VAR_13->fmt & VAR_8) ==
      VAR_7)
   VAR_19 = 16;


  VAR_21 = FUNC_8(VAR_13->regmap, VAR_10, &VAR_22);
  if (VAR_21 < 0)
   return VAR_21;

  VAR_18 = VAR_19 * ((VAR_22 & VAR_2) + 1);
  VAR_15 = FUNC_0(VAR_14, (VAR_18 * VAR_20));
 }


 VAR_24 = VAR_15 & 0x1;


 VAR_16 = VAR_15 >> 1;

 VAR_22 = FUNC_1(VAR_16) | (VAR_24 << VAR_6);
 VAR_23 = VAR_3 | VAR_5;

 VAR_17 = ((2 * VAR_16) + VAR_24);
 FUNC_4(VAR_11->dev, "I2S clk: %ld, SCLK: %d\n",
  VAR_14, VAR_20);
 FUNC_4(VAR_11->dev, "Divider: 2*%d(div)+%d(odd) = %d\n",
  VAR_16, VAR_24, VAR_17);

 if (((VAR_16 == 1) && VAR_24) || (VAR_16 > VAR_4)) {
  FUNC_5(VAR_11->dev, "Wrong divider setting\n");
  return -VAR_0;
 }

 if (!VAR_16 && !VAR_24)
  FUNC_6(VAR_11->dev, "real divider forced to 1\n");

 VAR_21 = FUNC_9(VAR_13->regmap, VAR_10,
     VAR_23, VAR_22);
 if (VAR_21 < 0)
  return VAR_21;


 return FUNC_9(VAR_13->regmap, VAR_9,
      VAR_1, VAR_1);
}
