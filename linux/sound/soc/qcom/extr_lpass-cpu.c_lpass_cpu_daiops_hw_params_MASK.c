
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; TYPE_1__* driver; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct lpass_data {int * mi2s_bit_clk; int variant; int lpaif_map; } ;
typedef int snd_pcm_format_t ;
struct TYPE_2__ {size_t id; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int ,size_t) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,...) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int ) ;
 struct lpass_data* FUNC_8 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_19,
  struct snd_pcm_hw_params *VAR_20, struct snd_soc_dai *VAR_21)
{
 struct lpass_data *VAR_22 = FUNC_8(VAR_21);
 snd_pcm_format_t VAR_23 = FUNC_4(VAR_20);
 unsigned int VAR_24 = FUNC_3(VAR_20);
 unsigned int VAR_25 = FUNC_5(VAR_20);
 unsigned int VAR_26;
 int VAR_27, VAR_28;

 VAR_27 = FUNC_7(VAR_23);
 if (VAR_27 < 0) {
  FUNC_2(VAR_21->dev, "invalid bit width given: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_26 = VAR_4 |
   VAR_17;

 switch (VAR_27) {
 case 16:
  VAR_26 |= VAR_1;
  break;
 case 24:
  VAR_26 |= VAR_2;
  break;
 case 32:
  VAR_26 |= VAR_3;
  break;
 default:
  FUNC_2(VAR_21->dev, "invalid bitwidth given: %d\n", VAR_27);
  return -VAR_0;
 }

 if (VAR_19->stream == VAR_18) {
  switch (VAR_24) {
  case 1:
   VAR_26 |= VAR_14;
   VAR_26 |= VAR_15;
   break;
  case 2:
   VAR_26 |= VAR_14;
   VAR_26 |= VAR_16;
   break;
  case 4:
   VAR_26 |= VAR_13;
   VAR_26 |= VAR_16;
   break;
  case 6:
   VAR_26 |= VAR_11;
   VAR_26 |= VAR_16;
   break;
  case 8:
   VAR_26 |= VAR_12;
   VAR_26 |= VAR_16;
   break;
  default:
   FUNC_2(VAR_21->dev, "invalid channels given: %u\n",
    VAR_24);
   return -VAR_0;
  }
 } else {
  switch (VAR_24) {
  case 1:
   VAR_26 |= VAR_8;
   VAR_26 |= VAR_9;
   break;
  case 2:
   VAR_26 |= VAR_8;
   VAR_26 |= VAR_10;
   break;
  case 4:
   VAR_26 |= VAR_7;
   VAR_26 |= VAR_10;
   break;
  case 6:
   VAR_26 |= VAR_5;
   VAR_26 |= VAR_10;
   break;
  case 8:
   VAR_26 |= VAR_6;
   VAR_26 |= VAR_10;
   break;
  default:
   FUNC_2(VAR_21->dev, "invalid channels given: %u\n",
    VAR_24);
   return -VAR_0;
  }
 }

 VAR_28 = FUNC_6(VAR_22->lpaif_map,
      FUNC_0(VAR_22->variant, VAR_21->driver->id),
      VAR_26);
 if (VAR_28) {
  FUNC_2(VAR_21->dev, "error writing to i2sctl reg: %d\n", VAR_28);
  return VAR_28;
 }

 VAR_28 = FUNC_1(VAR_22->mi2s_bit_clk[VAR_21->driver->id],
      VAR_25 * VAR_27 * 2);
 if (VAR_28) {
  FUNC_2(VAR_21->dev, "error setting mi2s bitclk to %u: %d\n",
   VAR_25 * VAR_27 * 2, VAR_28);
  return VAR_28;
 }

 return 0;
}
