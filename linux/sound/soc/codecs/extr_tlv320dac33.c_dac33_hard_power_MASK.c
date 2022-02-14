
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int chip_power; scalar_t__ power_gpio; int mutex; int supplies; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 struct tlv320dac33_priv* FUNC_9 (struct snd_soc_component*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_0, int VAR_1)
{
 struct tlv320dac33_priv *VAR_2 = FUNC_9(VAR_0);
 int VAR_3 = 0;

 FUNC_5(&VAR_2->mutex);


 if (FUNC_10(VAR_1 == VAR_2->chip_power)) {
  FUNC_2(VAR_0->dev, "Trying to set the same power state: %s\n",
   VAR_1 ? "ON" : "OFF");
  goto exit;
 }

 if (VAR_1) {
  VAR_3 = FUNC_8(FUNC_0(VAR_2->supplies),
       VAR_2->supplies);
  if (VAR_3 != 0) {
   FUNC_3(VAR_0->dev,
    "Failed to enable supplies: %d\n", VAR_3);
   goto exit;
  }

  if (VAR_2->power_gpio >= 0)
   FUNC_4(VAR_2->power_gpio, 1);

  VAR_2->chip_power = 1;
 } else {
  FUNC_1(VAR_0, 0);
  if (VAR_2->power_gpio >= 0)
   FUNC_4(VAR_2->power_gpio, 0);

  VAR_3 = FUNC_7(FUNC_0(VAR_2->supplies),
          VAR_2->supplies);
  if (VAR_3 != 0) {
   FUNC_3(VAR_0->dev,
    "Failed to disable supplies: %d\n", VAR_3);
   goto exit;
  }

  VAR_2->chip_power = 0;
 }

exit:
 FUNC_6(&VAR_2->mutex);
 return VAR_3;
}
