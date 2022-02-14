
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98090_priv {int jack_work; int pll_work; int regmap; struct snd_soc_component* component; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int *) ;
 int VAR_10 ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct max98090_priv *VAR_13 = VAR_12;
 struct snd_soc_component *VAR_14 = VAR_13->component;
 int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;


 if (VAR_14 == ((void*)0))
  return VAR_1;

 FUNC_0(VAR_14->dev, "***** max98090_interrupt *****\n");

 VAR_15 = FUNC_5(VAR_13->regmap, VAR_7, &VAR_16);

 if (VAR_15 != 0) {
  FUNC_1(VAR_14->dev,
   "failed to read M98090_REG_INTERRUPT_S: %d\n",
   VAR_15);
  return VAR_1;
 }

 VAR_15 = FUNC_5(VAR_13->regmap, VAR_6, &VAR_17);

 if (VAR_15 != 0) {
  FUNC_1(VAR_14->dev,
   "failed to read M98090_REG_DEVICE_STATUS: %d\n",
   VAR_15);
  return VAR_1;
 }

 FUNC_0(VAR_14->dev, "active=0x%02x mask=0x%02x -> active=0x%02x\n",
  VAR_17, VAR_16, VAR_17 & VAR_16);

 VAR_17 &= VAR_16;

 if (!VAR_17)
  return VAR_1;

 if (VAR_17 & VAR_2)
  FUNC_1(VAR_14->dev, "M98090_CLD_MASK\n");

 if (VAR_17 & VAR_8)
  FUNC_0(VAR_14->dev, "M98090_SLD_MASK\n");

 if (VAR_17 & VAR_9) {
  FUNC_0(VAR_14->dev, "M98090_ULK_MASK\n");
  FUNC_6(&VAR_13->pll_work);
 }

 if (VAR_17 & VAR_5) {
  FUNC_0(VAR_14->dev, "M98090_JDET_MASK\n");

  FUNC_3(VAR_14->dev, 100);

  FUNC_4(VAR_10,
       &VAR_13->jack_work,
       FUNC_2(100));
 }

 if (VAR_17 & VAR_3)
  FUNC_0(VAR_14->dev, "M98090_DRCACT_MASK\n");

 if (VAR_17 & VAR_4)
  FUNC_1(VAR_14->dev, "M98090_DRCCLP_MASK\n");

 return VAR_0;
}
