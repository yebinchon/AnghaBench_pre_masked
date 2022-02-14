
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_i2s {unsigned int mclk_freq; int field_clkdiv_mclk_en; int regmap; TYPE_1__* variant; int mod_clk; } ;
struct snd_soc_dai {int dev; } ;
struct TYPE_2__ {unsigned int (* get_bclk_parent_rate ) (struct sun4i_i2s*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 struct sun4i_i2s* FUNC_6 (struct snd_soc_dai*) ;
 unsigned int FUNC_7 (struct sun4i_i2s*) ;
 int FUNC_8 (struct sun4i_i2s*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_9 (struct sun4i_i2s*,unsigned int,unsigned int) ;
 int FUNC_10 (unsigned int) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_dai *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5)
{
 struct sun4i_i2s *VAR_6 = FUNC_6(VAR_2);
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 switch (VAR_3) {
 case 176400:
 case 88200:
 case 44100:
 case 22050:
 case 11025:
  VAR_8 = 22579200;
  break;

 case 192000:
 case 128000:
 case 96000:
 case 64000:
 case 48000:
 case 32000:
 case 24000:
 case 16000:
 case 12000:
 case 8000:
  VAR_8 = 24576000;
  break;

 default:
  FUNC_3(VAR_2->dev, "Unsupported sample rate: %u\n", VAR_3);
  return -VAR_0;
 }

 VAR_12 = FUNC_2(VAR_6->mod_clk, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_7 = VAR_6->mclk_freq / VAR_3;
 if (!FUNC_10(VAR_7)) {
  FUNC_3(VAR_2->dev, "Unsupported oversample rate: %d\n",
   VAR_7);
  return -VAR_0;
 }

 VAR_9 = VAR_6->variant->get_bclk_parent_rate(VAR_6);
 VAR_10 = FUNC_8(VAR_6, VAR_9,
       VAR_3, VAR_4, VAR_5);
 if (VAR_10 < 0) {
  FUNC_3(VAR_2->dev, "Unsupported BCLK divider: %d\n", VAR_10);
  return -VAR_0;
 }

 VAR_11 = FUNC_9(VAR_6, VAR_8, VAR_6->mclk_freq);
 if (VAR_11 < 0) {
  FUNC_3(VAR_2->dev, "Unsupported MCLK divider: %d\n", VAR_11);
  return -VAR_0;
 }

 FUNC_5(VAR_6->regmap, VAR_1,
       FUNC_0(VAR_10) |
       FUNC_1(VAR_11));

 FUNC_4(VAR_6->field_clkdiv_mclk_en, 1);

 return 0;
}
