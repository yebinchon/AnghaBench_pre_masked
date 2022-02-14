
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wm8961_priv {int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int val; int ratio; scalar_t__ rate; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct wm8961_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;
 TYPE_1__* VAR_13 ;
 TYPE_1__* VAR_14 ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_15,
       struct snd_pcm_hw_params *VAR_16,
       struct snd_soc_dai *VAR_17)
{
 struct snd_soc_component *VAR_18 = VAR_17->component;
 struct wm8961_priv *VAR_19 = FUNC_6(VAR_18);
 int VAR_20, VAR_21, VAR_22, VAR_23;
 u16 VAR_24;

 VAR_23 = FUNC_4(VAR_16);

 if (!VAR_19->sysclk) {
  FUNC_3(VAR_18->dev, "MCLK has not been specified\n");
  return -VAR_0;
 }


 VAR_21 = 0;
 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_14); VAR_20++) {
  if (FUNC_1(VAR_14[VAR_20].rate - VAR_23) <
      FUNC_1(VAR_14[VAR_21].rate - VAR_23))
   VAR_21 = VAR_20;
 }
 VAR_24 = FUNC_7(VAR_18, VAR_4);
 VAR_24 &= ~VAR_10;
 VAR_24 |= VAR_14[VAR_21].val;
 FUNC_8(VAR_18, VAR_4, VAR_24);
 FUNC_2(VAR_18->dev, "Selected SRATE %dHz for %dHz\n",
  VAR_14[VAR_21].rate, VAR_23);


 VAR_22 = VAR_19->sysclk / VAR_23;

 if (VAR_15->stream == VAR_2 && VAR_22 < 64) {
  FUNC_3(VAR_18->dev,
   "SYSCLK must be at least 64*fs for DAC\n");
  return -VAR_0;
 }
 if (VAR_15->stream == VAR_1 && VAR_22 < 256) {
  FUNC_3(VAR_18->dev,
   "SYSCLK must be at least 256*fs for ADC\n");
  return -VAR_0;
 }

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_13); VAR_20++) {
  if (VAR_13[VAR_20].ratio >= VAR_22)
   break;
 }
 if (VAR_20 == FUNC_0(VAR_13)) {
  FUNC_3(VAR_18->dev, "Unable to generate CLK_SYS_RATE\n");
  return -VAR_0;
 }
 FUNC_2(VAR_18->dev, "Selected CLK_SYS_RATE of %d for %d/%d=%d\n",
  VAR_13[VAR_20].ratio, VAR_19->sysclk, VAR_23,
  VAR_19->sysclk / VAR_23);

 VAR_24 = FUNC_7(VAR_18, VAR_8);
 VAR_24 &= ~VAR_6;
 VAR_24 |= VAR_13[VAR_20].val << VAR_7;
 FUNC_8(VAR_18, VAR_8, VAR_24);

 VAR_24 = FUNC_7(VAR_18, VAR_5);
 VAR_24 &= ~VAR_11;
 switch (FUNC_5(VAR_16)) {
 case 16:
  break;
 case 20:
  VAR_24 |= 1 << VAR_12;
  break;
 case 24:
  VAR_24 |= 2 << VAR_12;
  break;
 case 32:
  VAR_24 |= 3 << VAR_12;
  break;
 default:
  return -VAR_0;
 }
 FUNC_8(VAR_18, VAR_5, VAR_24);


 VAR_24 = FUNC_7(VAR_18, VAR_3);
 if (VAR_23 <= 24000)
  VAR_24 |= VAR_9;
 else
  VAR_24 &= ~VAR_9;
 FUNC_8(VAR_18, VAR_3, VAR_24);

 return 0;
}
