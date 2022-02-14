
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs4270_private {unsigned int mclk; int mode; scalar_t__ slave_mode; } ;
struct TYPE_2__ {unsigned int ratio; int mclk; int speed_mode; } ;


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
 unsigned int VAR_12 ;


 TYPE_1__* VAR_13 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct cs4270_private* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_14,
       struct snd_pcm_hw_params *VAR_15,
       struct snd_soc_dai *VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_16->component;
 struct cs4270_private *VAR_18 = FUNC_2(VAR_17);
 int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 int VAR_23;



 VAR_21 = FUNC_1(VAR_15);
 VAR_22 = VAR_18->mclk / VAR_21;

 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
  if (VAR_13[VAR_20].ratio == VAR_22)
   break;
 }

 if (VAR_20 == VAR_12) {

  FUNC_0(VAR_17->dev, "could not find matching ratio\n");
  return -VAR_11;
 }



 VAR_23 = FUNC_3(VAR_17, VAR_7);
 VAR_23 &= ~(VAR_10 | VAR_8);
 VAR_23 |= VAR_13[VAR_20].mclk;

 if (VAR_18->slave_mode)
  VAR_23 |= VAR_9;
 else
  VAR_23 |= VAR_13[VAR_20].speed_mode;

 VAR_19 = FUNC_4(VAR_17, VAR_7, VAR_23);
 if (VAR_19 < 0) {
  FUNC_0(VAR_17->dev, "i2c write failed\n");
  return VAR_19;
 }



 VAR_23 = FUNC_3(VAR_17, VAR_0);
 VAR_23 &= ~(VAR_6 | VAR_3);

 switch (VAR_18->mode) {
 case 129:
  VAR_23 |= VAR_4 | VAR_1;
  break;
 case 128:
  VAR_23 |= VAR_5 | VAR_2;
  break;
 default:
  FUNC_0(VAR_17->dev, "unknown dai format\n");
  return -VAR_11;
 }

 VAR_19 = FUNC_4(VAR_17, VAR_0, VAR_23);
 if (VAR_19 < 0) {
  FUNC_0(VAR_17->dev, "i2c write failed\n");
  return VAR_19;
 }

 return VAR_19;
}
