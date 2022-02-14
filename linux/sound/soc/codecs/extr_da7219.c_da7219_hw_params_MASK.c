
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct da7219_priv {int tdm_en; scalar_t__ master; struct clk** dai_clks; } ;
struct clk {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned long FUNC_0 (struct clk*,unsigned long) ;
 int FUNC_1 (struct clk*,unsigned long) ;
 int FUNC_2 (struct snd_soc_component*,int) ;
 int FUNC_3 (struct snd_soc_component*,unsigned long) ;
 int FUNC_4 (int ,char*,...) ;
 unsigned int FUNC_5 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 struct da7219_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_12,
       struct snd_pcm_hw_params *VAR_13,
       struct snd_soc_dai *VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_14->component;
 struct da7219_priv *VAR_16 = FUNC_8(VAR_15);
 struct clk *VAR_17 = VAR_16->dai_clks[VAR_5];
 struct clk *VAR_18 = VAR_16->dai_clks[VAR_0];
 u8 VAR_19 = 0;
 unsigned int VAR_20;
 unsigned long VAR_21, VAR_22;
 int VAR_23 = FUNC_7(VAR_13);
 int VAR_24, VAR_25;

 switch (VAR_23) {
 case 16:
  VAR_19 |= VAR_7;
  break;
 case 20:
  VAR_19 |= VAR_8;
  break;
 case 24:
  VAR_19 |= VAR_9;
  break;
 case 32:
  VAR_19 |= VAR_10;
  break;
 default:
  return -VAR_11;
 }

 VAR_20 = FUNC_5(VAR_13);
 if ((VAR_20 < 1) || (VAR_20 > VAR_2)) {
  FUNC_4(VAR_15->dev,
   "Invalid number of channels, only 1 to %d supported\n",
   VAR_2);
  return -VAR_11;
 }
 VAR_19 |= VAR_20 << VAR_3;

 VAR_21 = FUNC_6(VAR_13);
 if (VAR_16->master && VAR_17) {
  VAR_25 = FUNC_1(VAR_17, VAR_21);
  if (VAR_25) {
   FUNC_4(VAR_15->dev,
    "Failed to set WCLK SR %lu: %d\n", VAR_21, VAR_25);
   return VAR_25;
  }
 } else {
  VAR_25 = FUNC_3(VAR_15, VAR_21);
  if (VAR_25) {
   FUNC_4(VAR_15->dev,
    "Failed to set SR %lu: %d\n", VAR_21, VAR_25);
   return VAR_25;
  }
 }






 if (VAR_16->master && !VAR_16->tdm_en) {
  if ((VAR_23 * VAR_2) <= 32)
   VAR_24 = 32;
  else
   VAR_24 = 64;

  if (VAR_18) {
   VAR_22 = VAR_24 * VAR_21;
   VAR_22 = FUNC_0(VAR_18, VAR_22);
   if ((VAR_22 / VAR_21) < VAR_24) {
    FUNC_4(VAR_15->dev,
     "BCLK rate mismatch against frame size");
    return -VAR_11;
   }

   VAR_25 = FUNC_1(VAR_18, VAR_22);
   if (VAR_25) {
    FUNC_4(VAR_15->dev,
     "Failed to set BCLK rate %lu: %d\n",
     VAR_22, VAR_25);
    return VAR_25;
   }
  } else {
   VAR_25 = FUNC_2(VAR_15, VAR_24);
   if (VAR_25) {
    FUNC_4(VAR_15->dev,
     "Failed to set BCLKs per WCLK %d: %d\n",
     VAR_24, VAR_25);
    return VAR_25;
   }
  }
 }

 FUNC_9(VAR_15, VAR_4,
       VAR_6 |
       VAR_1,
       VAR_19);

 return 0;
}
