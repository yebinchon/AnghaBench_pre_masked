
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {char* name; int report; int debounce_time; int wake; int jack_status_check; struct rt5670_priv* data; int gpiod_dev; } ;
struct rt5670_priv {TYPE_1__ hp_gpio; struct snd_soc_jack* jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 struct rt5670_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_jack*,int,TYPE_1__*) ;

int FUNC_3(struct snd_soc_component *VAR_5,
 struct snd_soc_jack *VAR_6)
{
 struct rt5670_priv *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;

 VAR_7->jack = VAR_6;
 VAR_7->hp_gpio.gpiod_dev = VAR_5->dev;
 VAR_7->hp_gpio.name = "headset";
 VAR_7->hp_gpio.report = VAR_3 |
  VAR_0 | VAR_1 | VAR_2;
 VAR_7->hp_gpio.debounce_time = 150;
 VAR_7->hp_gpio.wake = 1;
 VAR_7->hp_gpio.data = (struct rt5670_priv *)VAR_7;
 VAR_7->hp_gpio.jack_status_check = VAR_4;

 VAR_8 = FUNC_2(VAR_7->jack, 1,
   &VAR_7->hp_gpio);
 if (VAR_8) {
  FUNC_0(VAR_5->dev, "Adding jack GPIO failed\n");
  return VAR_8;
 }

 return 0;
}
