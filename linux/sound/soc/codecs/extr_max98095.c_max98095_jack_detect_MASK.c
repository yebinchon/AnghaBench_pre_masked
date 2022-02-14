
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct max98095_priv {struct snd_soc_jack* mic_jack; struct snd_soc_jack* headphone_jack; } ;
struct i2c_client {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int ,struct snd_soc_component*) ;
 struct max98095_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 struct i2c_client* FUNC_5 (int ) ;

int FUNC_6(struct snd_soc_component *VAR_3,
 struct snd_soc_jack *VAR_4, struct snd_soc_jack *VAR_5)
{
 struct max98095_priv *VAR_6 = FUNC_3(VAR_3);
 struct i2c_client *VAR_7 = FUNC_5(VAR_3->dev);
 int VAR_8 = 0;

 VAR_6->headphone_jack = VAR_4;
 VAR_6->mic_jack = VAR_5;


 if (!VAR_4 && !VAR_5)
  return -VAR_0;

 FUNC_1(VAR_3);


 VAR_8 = FUNC_4(VAR_3, VAR_1,
  VAR_2, VAR_2);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3->dev, "Failed to cfg jack irqs %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_2(VAR_7->irq, VAR_3);
 return 0;
}
