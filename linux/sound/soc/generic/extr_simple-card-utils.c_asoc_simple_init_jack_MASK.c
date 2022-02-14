
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_card {struct device* dev; } ;
struct device {int of_node; } ;
struct TYPE_3__ {int gpio; char* name; int report; int invert; int debounce_time; } ;
struct TYPE_4__ {char* pin; int mask; } ;
struct asoc_simple_jack {TYPE_1__ gpio; int jack; TYPE_2__ pin; } ;
typedef int prop ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int*) ;
 int FUNC_2 (struct snd_soc_card*,char*,int,int *,TYPE_2__*,int) ;
 int FUNC_3 (int *,int,TYPE_1__*) ;
 int FUNC_4 (char*,int,char*,char*) ;

int FUNC_5(struct snd_soc_card *VAR_5,
     struct asoc_simple_jack *VAR_6,
     int VAR_7, char *VAR_8)
{
 struct device *VAR_9 = VAR_5->dev;
 enum of_gpio_flags VAR_10;
 char VAR_11[128];
 char *VAR_12;
 char *VAR_13;
 int VAR_14;
 int VAR_15;

 if (!VAR_8)
  VAR_8 = "";

 VAR_6->gpio.gpio = -VAR_0;

 if (VAR_7) {
  FUNC_4(VAR_11, sizeof(VAR_11), "%shp-det-gpio", VAR_8);
  VAR_12 = "Headphones";
  VAR_13 = "Headphone detection";
  VAR_14 = VAR_3;
 } else {
  FUNC_4(VAR_11, sizeof(VAR_11), "%smic-det-gpio", VAR_8);
  VAR_12 = "Mic Jack";
  VAR_13 = "Mic detection";
  VAR_14 = VAR_4;
 }

 VAR_15 = FUNC_1(VAR_9->of_node, VAR_11, 0, &VAR_10);
 if (VAR_15 == -VAR_1)
  return -VAR_1;

 if (FUNC_0(VAR_15)) {
  VAR_6->pin.pin = VAR_12;
  VAR_6->pin.mask = VAR_14;

  VAR_6->gpio.name = VAR_13;
  VAR_6->gpio.report = VAR_14;
  VAR_6->gpio.gpio = VAR_15;
  VAR_6->gpio.invert = !!(VAR_10 & VAR_2);
  VAR_6->gpio.debounce_time = 150;

  FUNC_2(VAR_5, VAR_12, VAR_14,
          &VAR_6->jack,
          &VAR_6->pin, 1);

  FUNC_3(&VAR_6->jack, 1,
           &VAR_6->gpio);
 }

 return 0;
}
