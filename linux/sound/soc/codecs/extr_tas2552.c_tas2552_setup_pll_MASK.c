
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tas2552_data {unsigned int pll_clkin; int pll_clk_id; scalar_t__ tdm_delay; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct tas2552_data* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ) ;
 unsigned int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_12,
        struct snd_pcm_hw_params *VAR_13)
{
 struct tas2552_data *VAR_14 = FUNC_2(VAR_12->dev);
 bool VAR_15 = 0;
 unsigned int VAR_16 = FUNC_3(VAR_13) * 512;
 unsigned int VAR_17 = VAR_14->pll_clkin;
 u8 VAR_18;

 if (!VAR_17) {
  if (VAR_14->pll_clk_id != VAR_5)
   return -VAR_0;

  VAR_17 = FUNC_7(VAR_13);
  VAR_17 += VAR_14->tdm_delay;
 }

 VAR_18 = FUNC_4(VAR_12, VAR_2) & VAR_9;
 FUNC_5(VAR_12, VAR_2, VAR_9, 0);

 if (VAR_17 == VAR_16)
  VAR_15 = 1;

 if (VAR_15) {

  FUNC_5(VAR_12, VAR_7,
        VAR_3, VAR_3);
 } else {




  unsigned int VAR_19, VAR_20, VAR_21;
  u8 VAR_22;
  u8 VAR_23 = (VAR_14->pll_clk_id << 3) & VAR_11;
  u8 VAR_24 = FUNC_4(VAR_12, VAR_6);

  VAR_24 = (VAR_24 >> 7);

recalc:
  VAR_21 = (VAR_16 * 2) << VAR_24;
  VAR_22 = VAR_21 / VAR_17;
  VAR_19 = VAR_21 % VAR_17;
  VAR_21 = VAR_17 / 10000;
  VAR_20 = VAR_19 / (VAR_21 + 1);
  VAR_19 = VAR_20 + ((9999 - VAR_17 % 10000) * (VAR_19 / VAR_21 - VAR_20)) / 10000;

  if (VAR_19 && (VAR_17 < 512000 || VAR_17 > 9200000)) {
   if (VAR_14->pll_clk_id == VAR_5) {
    VAR_17 = 1800000;
    VAR_23 = (VAR_4 << 3) &
       VAR_11;
   } else {
    VAR_17 = FUNC_7(VAR_13);
    VAR_17 += VAR_14->tdm_delay;
    VAR_23 = (VAR_5 << 3) &
       VAR_11;
   }
   goto recalc;
  }

  FUNC_5(VAR_12, VAR_1, VAR_11,
        VAR_23);

  FUNC_5(VAR_12, VAR_6,
        VAR_10, VAR_22);

  FUNC_6(VAR_12, VAR_7,
         FUNC_1(VAR_19));
  FUNC_6(VAR_12, VAR_8,
         FUNC_0(VAR_19));
 }


 FUNC_5(VAR_12, VAR_2, VAR_9,
       VAR_18);

 return 0;
}
