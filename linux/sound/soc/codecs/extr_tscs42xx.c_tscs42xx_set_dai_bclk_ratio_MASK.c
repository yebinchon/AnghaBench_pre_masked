
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs42xx {unsigned int bclk_ratio; int audio_params_lock; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tscs42xx* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_8,
  unsigned int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_8->component;
 struct tscs42xx *VAR_11 = FUNC_3(VAR_10);
 unsigned int VAR_12;
 int VAR_13 = 0;

 switch (VAR_9) {
 case 32:
  VAR_12 = VAR_3;
  break;
 case 40:
  VAR_12 = VAR_4;
  break;
 case 64:
  VAR_12 = VAR_5;
  break;
 default:
  FUNC_0(VAR_10->dev, "Unsupported bclk ratio (%d)\n", VAR_13);
  return -VAR_0;
 }

 VAR_13 = FUNC_4(VAR_10,
   VAR_7, VAR_2, VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(VAR_10->dev,
    "Failed to set DAC BCLK ratio (%d)\n", VAR_13);
  return VAR_13;
 }
 VAR_13 = FUNC_4(VAR_10,
   VAR_6, VAR_1, VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(VAR_10->dev,
    "Failed to set ADC BCLK ratio (%d)\n", VAR_13);
  return VAR_13;
 }

 FUNC_1(&VAR_11->audio_params_lock);

 VAR_11->bclk_ratio = VAR_9;

 FUNC_2(&VAR_11->audio_params_lock);

 return 0;
}
