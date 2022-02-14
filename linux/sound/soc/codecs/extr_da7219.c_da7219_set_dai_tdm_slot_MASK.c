
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned long u32 ;
typedef unsigned int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct da7219_priv {int tdm_en; int regmap; scalar_t__ master; struct clk** dai_clks; } ;
struct clk {int dummy; } ;
typedef int dai_offset ;
typedef int __le16 ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*,unsigned long) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,unsigned long) ;
 int FUNC_4 (int ,char*,unsigned long,...) ;
 unsigned int FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,int ,int *,int) ;
 struct da7219_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_dai *VAR_10,
       unsigned int VAR_11, unsigned int VAR_12,
       int VAR_13, int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_10->component;
 struct da7219_priv *VAR_16 = FUNC_8(VAR_15);
 struct clk *VAR_17 = VAR_16->dai_clks[VAR_8];
 struct clk *VAR_18 = VAR_16->dai_clks[VAR_0];
 unsigned int VAR_19;
 unsigned long VAR_20, VAR_21;
 u8 VAR_22;
 u16 VAR_23;
 __le16 VAR_24;
 u32 VAR_25;
 int VAR_26;


 if (!VAR_11) {
  FUNC_9(VAR_15, VAR_5,
        VAR_3 |
        VAR_7, 0);
  VAR_16->tdm_en = 0;
  return 0;
 }


 VAR_22 = FUNC_5(VAR_11) - 1;
 VAR_19 = (VAR_11 >> VAR_22);
 if (FUNC_6(VAR_19) > VAR_6) {
  FUNC_4(VAR_15->dev,
   "Invalid number of slots, max = %d\n",
   VAR_6);
  return -VAR_9;
 }





 VAR_23 = VAR_22 * VAR_14;
 if (VAR_23 > VAR_2) {
  FUNC_4(VAR_15->dev, "Invalid frame offset %d\n", VAR_23);
  return -VAR_9;
 }





 if (VAR_16->master) {
  VAR_25 = VAR_13 * VAR_14;

  if (VAR_18) {
   VAR_20 = FUNC_0(VAR_17);
   VAR_21 = VAR_20 * VAR_25;
   VAR_26 = FUNC_1(VAR_18, VAR_21);
   if (VAR_26) {
    FUNC_4(VAR_15->dev,
     "Failed to set TDM BCLK rate %lu: %d\n",
     VAR_21, VAR_26);
    return VAR_26;
   }
  } else {
   VAR_26 = FUNC_3(VAR_15, VAR_25);
   if (VAR_26) {
    FUNC_4(VAR_15->dev,
     "Failed to set TDM BCLKs per WCLK %d: %d\n",
     VAR_25, VAR_26);
    return VAR_26;
   }
  }
 }

 VAR_24 = FUNC_2(VAR_23);
 FUNC_7(VAR_16->regmap, VAR_1,
     &VAR_24, sizeof(VAR_24));

 FUNC_9(VAR_15, VAR_5,
       VAR_3 |
       VAR_7,
       (VAR_19 << VAR_4) |
       VAR_7);

 VAR_16->tdm_en = 1;

 return 0;
}
