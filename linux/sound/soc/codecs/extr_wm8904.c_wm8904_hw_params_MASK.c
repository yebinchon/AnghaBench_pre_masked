
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wm8904_priv {int fs; int bclk; int sysclk_rate; scalar_t__ tdm_slots; int tdm_width; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_5__ {int ratio; unsigned int clk_sys_rate; int rate; unsigned int sample_rate; int div; unsigned int bclk_div; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_15 ;
 TYPE_1__* VAR_16 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 TYPE_1__* VAR_17 ;
 int FUNC_5 (int,int ,int,scalar_t__) ;
 struct wm8904_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_component*) ;
 int FUNC_11 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_18,
       struct snd_pcm_hw_params *VAR_19,
       struct snd_soc_dai *VAR_20)
{
 struct snd_soc_component *VAR_21 = VAR_20->component;
 struct wm8904_priv *VAR_22 = FUNC_6(VAR_21);
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 unsigned int VAR_28 = 0;
 unsigned int VAR_29 = 0;
 unsigned int VAR_30 = 0;
 unsigned int VAR_31 = 0;
 unsigned int VAR_32 = 0;


 VAR_22->fs = FUNC_3(VAR_19);
 if (VAR_22->tdm_slots) {
  FUNC_2(VAR_21->dev, "Configuring for %d %d bit TDM slots\n",
   VAR_22->tdm_slots, VAR_22->tdm_width);
  VAR_22->bclk = FUNC_5(VAR_22->fs,
       VAR_22->tdm_width, 2,
       VAR_22->tdm_slots);
 } else {
  VAR_22->bclk = FUNC_8(VAR_19);
 }

 switch (FUNC_4(VAR_19)) {
 case 16:
  break;
 case 20:
  VAR_28 |= 0x40;
  break;
 case 24:
  VAR_28 |= 0x80;
  break;
 case 32:
  VAR_28 |= 0xc0;
  break;
 default:
  return -VAR_0;
 }


 FUNC_2(VAR_21->dev, "Target BCLK is %dHz\n", VAR_22->bclk);

 VAR_23 = FUNC_9(VAR_21);
 if (VAR_23 != 0)
  return VAR_23;


 VAR_25 = 0;
 VAR_26 = FUNC_1((VAR_22->sysclk_rate / VAR_16[0].ratio)
         - VAR_22->fs);
 for (VAR_24 = 1; VAR_24 < FUNC_0(VAR_16); VAR_24++) {
  VAR_27 = FUNC_1((VAR_22->sysclk_rate /
          VAR_16[VAR_24].ratio) - VAR_22->fs);
  if (VAR_27 < VAR_26) {
   VAR_25 = VAR_24;
   VAR_26 = VAR_27;
  }
 }
 FUNC_2(VAR_21->dev, "Selected CLK_SYS_RATIO of %d\n",
  VAR_16[VAR_25].ratio);
 VAR_31 |= (VAR_16[VAR_25].clk_sys_rate
     << VAR_8);


 VAR_25 = 0;
 VAR_26 = FUNC_1(VAR_22->fs - VAR_17[0].rate);
 for (VAR_24 = 1; VAR_24 < FUNC_0(VAR_17); VAR_24++) {

  VAR_27 = FUNC_1(VAR_22->fs - VAR_17[VAR_24].rate);
  if (VAR_27 < VAR_26) {
   VAR_25 = VAR_24;
   VAR_26 = VAR_27;
  }
 }
 FUNC_2(VAR_21->dev, "Selected SAMPLE_RATE of %dHz\n",
  VAR_17[VAR_25].rate);
 VAR_31 |= (VAR_17[VAR_25].sample_rate
     << VAR_14);


 if (VAR_22->fs <= 24000)
  VAR_32 |= VAR_11;


 VAR_25 = 0;
 VAR_26 = VAR_1;
 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_15); VAR_24++) {
  VAR_27 = ((VAR_22->sysclk_rate * 10) / VAR_15[VAR_24].div)
   - VAR_22->bclk;
  if (VAR_27 < 0)
   break;
  if (VAR_27 < VAR_26) {
   VAR_25 = VAR_24;
   VAR_26 = VAR_27;
  }
 }
 VAR_22->bclk = (VAR_22->sysclk_rate * 10) / VAR_15[VAR_25].div;
 FUNC_2(VAR_21->dev, "Selected BCLK_DIV of %d for %dHz BCLK\n",
  VAR_15[VAR_25].div, VAR_22->bclk);
 VAR_29 |= VAR_15[VAR_25].bclk_div;


 FUNC_2(VAR_21->dev, "LRCLK_RATE is %d\n", VAR_22->bclk / VAR_22->fs);
 VAR_30 |= VAR_22->bclk / VAR_22->fs;


 FUNC_7(VAR_21, VAR_10,
       VAR_11, VAR_32);
 FUNC_7(VAR_21, VAR_3,
       VAR_2, VAR_28);
 FUNC_7(VAR_21, VAR_4,
       VAR_6, VAR_29);
 FUNC_7(VAR_21, VAR_5,
       VAR_12, VAR_30);
 FUNC_7(VAR_21, VAR_9,
       VAR_13 |
       VAR_7, VAR_31);


 FUNC_11(VAR_21);
 FUNC_10(VAR_21);

 return 0;
}
