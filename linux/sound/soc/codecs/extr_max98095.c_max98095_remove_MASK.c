
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98095_priv {scalar_t__ mic_jack; scalar_t__ headphone_jack; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct max98095_priv* FUNC_2 (struct snd_soc_component*) ;
 struct i2c_client* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_0)
{
 struct max98095_priv *VAR_1 = FUNC_2(VAR_0);
 struct i2c_client *VAR_2 = FUNC_3(VAR_0->dev);

 if (VAR_1->headphone_jack || VAR_1->mic_jack)
  FUNC_1(VAR_0);

 if (VAR_2->irq)
  FUNC_0(VAR_2->irq, VAR_0);
}
