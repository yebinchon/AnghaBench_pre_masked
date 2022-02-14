
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8903_priv {int mic_last_report; int mic_short; int mic_det; int mic_jack; int regmap; int mic_delay; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 struct wm8903_priv *VAR_12 = VAR_11;
 int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;

 VAR_14 = FUNC_5(VAR_12->regmap, VAR_4,
     &VAR_16);
 if (VAR_14 != 0) {
  FUNC_1(VAR_12->dev, "Failed to read IRQ mask: %d\n", VAR_14);
  return VAR_1;
 }

 VAR_14 = FUNC_5(VAR_12->regmap, VAR_3, &VAR_15);
 if (VAR_14 != 0) {
  FUNC_1(VAR_12->dev, "Failed to read IRQ status: %d\n", VAR_14);
  return VAR_1;
 }

 VAR_15 &= ~VAR_16;

 if (VAR_15 & VAR_9) {
  FUNC_3(VAR_12->dev, "Write sequencer done\n");
 }
 VAR_13 = VAR_12->mic_last_report;
 VAR_14 = FUNC_5(VAR_12->regmap, VAR_2,
     &VAR_17);
 if (VAR_14 != 0) {
  FUNC_1(VAR_12->dev, "Failed to read interrupt polarity: %d\n",
   VAR_14);
  return VAR_0;
 }


 if (VAR_15 & (VAR_7 | VAR_5))
  FUNC_8(FUNC_2(VAR_12->dev));


 if (VAR_15 & VAR_7) {
  FUNC_0(VAR_12->dev, "Microphone short (pol=%x)\n", VAR_17);

  VAR_13 ^= VAR_12->mic_short;
  VAR_17 ^= VAR_8;
 }

 if (VAR_15 & VAR_5) {
  FUNC_0(VAR_12->dev, "Microphone detect (pol=%x)\n", VAR_17);

  VAR_13 ^= VAR_12->mic_det;
  VAR_17 ^= VAR_6;

  FUNC_4(VAR_12->mic_delay);
 }

 FUNC_6(VAR_12->regmap, VAR_2,
      VAR_8 | VAR_6, VAR_17);

 FUNC_7(VAR_12->mic_jack, VAR_13,
       VAR_12->mic_short | VAR_12->mic_det);

 VAR_12->mic_last_report = VAR_13;

 return VAR_0;
}
