
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs42l51_ratios {unsigned int ratio; int speed_mode; scalar_t__ mclk; } ;
struct cs42l51_private {int func; unsigned int mclk; int audio_mode; } ;


 int FUNC_0 (struct cs42l51_ratios*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;






 int FUNC_3 (int ,char*) ;
 struct cs42l51_ratios* VAR_14 ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct cs42l51_ratios* VAR_15 ;
 struct cs42l51_ratios* VAR_16 ;
 struct cs42l51_private* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_17,
  struct snd_pcm_hw_params *VAR_18,
  struct snd_soc_dai *VAR_19)
{
 struct snd_soc_component *VAR_20 = VAR_19->component;
 struct cs42l51_private *VAR_21 = FUNC_6(VAR_20);
 int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;
 struct cs42l51_ratios *VAR_26 = ((void*)0);
 int VAR_27 = 0;
 int VAR_28, VAR_29, VAR_30, VAR_31;

 switch (VAR_21->func) {
 case 133:
  VAR_26 = VAR_14;
  VAR_27 = FUNC_0(VAR_14);
  break;
 case 132:
  VAR_26 = VAR_16;
  VAR_27 = FUNC_0(VAR_16);
  break;
 case 131:
  VAR_26 = VAR_15;
  VAR_27 = FUNC_0(VAR_15);
  break;
 }


 VAR_24 = FUNC_4(VAR_18);
 VAR_25 = VAR_21->mclk / VAR_24;
 for (VAR_23 = 0; VAR_23 < VAR_27; VAR_23++) {
  if (VAR_26[VAR_23].ratio == VAR_25)
   break;
 }

 if (VAR_23 == VAR_27) {

  FUNC_3(VAR_20->dev, "could not find matching ratio\n");
  return -VAR_13;
 }

 VAR_28 = FUNC_7(VAR_20, VAR_7);
 VAR_29 = FUNC_7(VAR_20, VAR_10);

 VAR_28 &= ~(VAR_9 | VAR_8
   | FUNC_1(7));
 VAR_29 &= ~(FUNC_2(3)
   | VAR_12);

 switch (VAR_21->func) {
 case 133:
  VAR_28 |= VAR_9;
  VAR_31 = VAR_26[VAR_23].speed_mode;

  if (VAR_24 > 50000)
   VAR_31 = VAR_6;
  VAR_29 |= FUNC_2(VAR_31);




  VAR_29 &= ~VAR_11;
  break;
 case 132:
  VAR_29 |= FUNC_2(VAR_26[VAR_23].speed_mode);
  break;
 case 131:
  VAR_29 |= VAR_11;
  break;
 }

 switch (VAR_21->audio_mode) {
 case 130:
  VAR_28 |= VAR_8;
  VAR_28 |= FUNC_1(VAR_0);
  break;
 case 129:
  VAR_28 |= FUNC_1(VAR_1);
  break;
 case 128:
  switch (FUNC_5(VAR_18)) {
  case 16:
   VAR_30 = VAR_2;
   break;
  case 18:
   VAR_30 = VAR_3;
   break;
  case 20:
   VAR_30 = VAR_4;
   break;
  case 24:
   VAR_30 = VAR_5;
   break;
  default:
   FUNC_3(VAR_20->dev, "unknown format\n");
   return -VAR_13;
  }
  VAR_28 |= FUNC_1(VAR_30);
  break;
 default:
  FUNC_3(VAR_20->dev, "unknown format\n");
  return -VAR_13;
 }

 if (VAR_26[VAR_23].mclk)
  VAR_29 |= VAR_12;

 VAR_22 = FUNC_8(VAR_20, VAR_7, VAR_28);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_8(VAR_20, VAR_10, VAR_29);
 if (VAR_22 < 0)
  return VAR_22;

 return 0;
}
