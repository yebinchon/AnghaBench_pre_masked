
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int * dev; } ;
struct TYPE_3__ {int * gpiod_dev; struct snd_soc_component* data; } ;
struct cx2072x_priv {TYPE_1__ jack_gpio; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 TYPE_1__ VAR_0 ;
 struct cx2072x_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_jack*,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1,
       struct snd_soc_jack *VAR_2, void *VAR_3)
{
 struct cx2072x_priv *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 if (!VAR_2) {
  FUNC_0(VAR_1);
  return 0;
 }

 if (!VAR_4->jack_gpio.gpiod_dev) {
  VAR_4->jack_gpio = VAR_0;
  VAR_4->jack_gpio.gpiod_dev = VAR_1->dev;
  VAR_4->jack_gpio.data = VAR_1;
  VAR_5 = FUNC_3(VAR_2, 1, &VAR_4->jack_gpio);
  if (VAR_5) {
   VAR_4->jack_gpio.gpiod_dev = ((void*)0);
   return VAR_5;
  }
 }

 FUNC_1(VAR_1);
 return 0;
}
