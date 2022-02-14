
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct wm8903_priv {int sysclk; void* fs; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_5__ {int rate; int value; int mclk_div; int div; int mode; int ratio; } ;


 int FUNC_0 (TYPE_1__*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_17 ;
 TYPE_1__* VAR_18 ;
 int FUNC_2 (int ,char*,int,...) ;
 void* FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 TYPE_1__* VAR_19 ;
 struct wm8903_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int) ;
 int FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_20,
       struct snd_pcm_hw_params *VAR_21,
       struct snd_soc_dai *VAR_22)
{
 struct snd_soc_component *VAR_23 = VAR_22->component;
 struct wm8903_priv *VAR_24 = FUNC_5(VAR_23);
 int VAR_25 = FUNC_3(VAR_21);
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;

 u16 VAR_34 = FUNC_6(VAR_23, VAR_2);
 u16 VAR_35 = FUNC_6(VAR_23, VAR_3);
 u16 VAR_36 = FUNC_6(VAR_23, VAR_4);
 u16 VAR_37 = FUNC_6(VAR_23, VAR_10);
 u16 VAR_38 = FUNC_6(VAR_23, VAR_11);
 u16 VAR_39 = FUNC_6(VAR_23, VAR_12);


 if (VAR_25 <= 24000)
  VAR_39 |= VAR_13;
 else
  VAR_39 &= ~VAR_13;


 VAR_29 = 0;
 VAR_31 = FUNC_1(VAR_19[VAR_29].rate - VAR_25);
 for (VAR_28 = 1; VAR_28 < FUNC_0(VAR_19); VAR_28++) {
  VAR_32 = FUNC_1(VAR_19[VAR_28].rate - VAR_25);
  if (VAR_32 <= VAR_31) {
   VAR_29 = VAR_28;
   VAR_31 = VAR_32;
  }
 }

 FUNC_2(VAR_23->dev, "DSP fs = %dHz\n", VAR_19[VAR_29].rate);
 VAR_38 &= ~VAR_16;
 VAR_38 |= VAR_19[VAR_29].value;

 VAR_34 &= ~VAR_1;
 VAR_26 = 2 * VAR_25;
 switch (FUNC_4(VAR_21)) {
 case 16:
  VAR_26 *= 16;
  break;
 case 20:
  VAR_26 *= 20;
  VAR_34 |= 0x4;
  break;
 case 24:
  VAR_26 *= 24;
  VAR_34 |= 0x8;
  break;
 case 32:
  VAR_26 *= 32;
  VAR_34 |= 0xc;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_23->dev, "MCLK = %dHz, target sample rate = %dHz\n",
  VAR_24->sysclk, VAR_25);





 VAR_30 = 0;
 VAR_31 = FUNC_1((VAR_24->sysclk /
   (VAR_18[0].mclk_div *
    VAR_18[0].div)) - VAR_25);
 for (VAR_28 = 1; VAR_28 < FUNC_0(VAR_18); VAR_28++) {
  VAR_32 = FUNC_1((VAR_24->sysclk /
          (VAR_18[VAR_28].mclk_div *
    VAR_18[VAR_28].div)) - VAR_25);

  if (VAR_32 <= VAR_31) {
   VAR_30 = VAR_28;
   VAR_31 = VAR_32;
  }
 }

 if (VAR_18[VAR_30].mclk_div == 2) {
  VAR_37 |= VAR_15;
  VAR_33 = VAR_24->sysclk / 2;
 } else {
  VAR_37 &= ~VAR_15;
  VAR_33 = VAR_24->sysclk;
 }

 VAR_38 &= ~(VAR_8 |
      VAR_6);
 VAR_38 |= VAR_18[VAR_30].rate << VAR_9;
 VAR_38 |= VAR_18[VAR_30].mode << VAR_7;

 FUNC_2(VAR_23->dev, "CLK_SYS_RATE=%x, CLK_SYS_MODE=%x div=%d\n",
  VAR_18[VAR_30].rate,
  VAR_18[VAR_30].mode,
  VAR_18[VAR_30].div);

 FUNC_2(VAR_23->dev, "Actual CLK_SYS = %dHz\n", VAR_33);






 VAR_27 = 0;
 VAR_31 = ((VAR_33 * 10) / VAR_17[0].ratio) - VAR_26;
 VAR_28 = 1;
 while (VAR_28 < FUNC_0(VAR_17)) {
  VAR_32 = ((VAR_33 * 10) / VAR_17[VAR_28].ratio) - VAR_26;
  if (VAR_32 < 0)
   break;
  VAR_27 = VAR_28;
  VAR_31 = VAR_32;
  VAR_28++;
 }

 VAR_35 &= ~VAR_5;
 VAR_36 &= ~VAR_14;

 FUNC_2(VAR_23->dev, "BCLK ratio %d for %dHz - actual BCLK = %dHz\n",
  VAR_17[VAR_27].ratio / 10, VAR_26,
  (VAR_33 * 10) / VAR_17[VAR_27].ratio);

 VAR_35 |= VAR_17[VAR_27].div;
 VAR_36 |= VAR_26 / VAR_25;

 VAR_24->fs = FUNC_3(VAR_21);
 FUNC_8(VAR_23);

 FUNC_7(VAR_23, VAR_10, VAR_37);
 FUNC_7(VAR_23, VAR_11, VAR_38);
 FUNC_7(VAR_23, VAR_2, VAR_34);
 FUNC_7(VAR_23, VAR_3, VAR_35);
 FUNC_7(VAR_23, VAR_4, VAR_36);
 FUNC_7(VAR_23, VAR_12, VAR_39);

 return 0;
}
